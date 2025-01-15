#include "renderer.h"

#define CLAY_IMPLEMENTATION
#include "clay/clay.h"
#include "clay/renderers/SDL2/clay_renderer_SDL2.c"

static list *ng_wins;
const int FONT_ID_NOTO = 0;

list *renderer_get_wins() {
    return ng_wins;
}

bool renderer_init() {
    ng_wins = list_new();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "Error: could not initialize SDL_ttf: %s\n", TTF_GetError());
        return false;
    }

    if (TTF_Init() < 0) {
        fprintf(stderr, "Error: could not initialize SDL_ttf: %s\n", TTF_GetError());
        return false;
    }

    TTF_Font *font = TTF_OpenFont("/usr/share/fonts/noto/NotoSans-Regular.ttf", 16);
    if (!font) {
        fprintf(stderr, "Error: could not load font: %s\n", TTF_GetError());
        return false;
    }

    SDL2_fonts[FONT_ID_NOTO] = (SDL2_Font){
        .fontId = FONT_ID_NOTO,
        .font = font,
    };

    Clay_SetMeasureTextFunction(SDL2_MeasureText);

    return true;
}

void renderer_deinit() {
    for (size_t i = 0; i < ng_wins->len; i++)
        ng_win_destroy(list_get(ng_wins, i));

    list_free(ng_wins);

    TTF_Quit();
    SDL_Quit();
}

bool renderer_render_ng_win(ng_win *w, list *events) {
    Clay_SetCurrentContext(w->context);

    Uint32 winID = SDL_GetWindowID(w->win);
    Clay_Vector2 scrollDelta = {};

    for (size_t i = 0; i < events->len; i++) {
        SDL_Event event = *(SDL_Event *)list_get(events, i);

        if (event.window.windowID != winID)
            continue;

        switch (event.type) {
            case SDL_QUIT:
                return true;
            case SDL_MOUSEWHEEL: {
                scrollDelta.x = event.wheel.x;
                scrollDelta.y = event.wheel.y;
            }
        }
    }

    w->last = w->now;
    w->now = SDL_GetPerformanceCounter();
    double deltaTime = (double)((w->now - w->last) * 1000 / (double)SDL_GetPerformanceFrequency());

    int mouseX;
    int mouseY;
    Uint32 mouseState = SDL_GetMouseState(&mouseX, &mouseY);
    Clay_Vector2 mousePosition = (Clay_Vector2){ (float)mouseX, (float)mouseY };
    Clay_SetPointerState(mousePosition, mouseState & SDL_BUTTON(1));

    Clay_UpdateScrollContainers(true, scrollDelta, deltaTime);

    int ww, wh;
    SDL_GetWindowSize(w->win, &ww, &wh);
    Clay_SetLayoutDimensions((Clay_Dimensions){ (float)ww, (float)wh });

    Clay_RenderCommandArray cmds = w->create_layout(w->udata);
    SDL_SetRenderDrawColor(w->ren, 0, 0, 0, 255);
    SDL_RenderClear(w->ren);

    Clay_SDL2_Render(w->ren, cmds);

    SDL_RenderPresent(w->ren);

    return false;
}
