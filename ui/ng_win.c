#include "ng_win.h"
#include "common/data_structures/list.h"
#include "renderer.h"

void clay_error_cb(Clay_ErrorData d) {
    char *title = (char *)d.userData;

    fprintf(stderr, "Window %s: Clay Error %s\n", title, d.errorText.chars);
}

ng_win *ng_win_new(char *title, int w, int h, Clay_RenderCommandArray (*create_layout)(void *udata), void *udata) {
    SDL_Window *win;
    SDL_Renderer *ren;

    if (SDL_CreateWindowAndRenderer(w, h, SDL_WINDOW_RESIZABLE, &win, &ren) < 0) {
        fprintf(stderr, "Error: unable to create sdl window '%s' and renderer: %s\n", title, SDL_GetError());
        return NULL;
    }

    printf("Created window with ID %d\n", SDL_GetWindowID(win));

    ng_win *ret = malloc(sizeof(ng_win));

    list *ng_wins = renderer_get_wins();
    ret->idx = ng_wins->len;
    list_add(ng_wins, ret);

    ret->udata = udata;
    ret->win = win;
    ret->ren = ren;
    ret->create_layout = create_layout;

    uint64_t size = Clay_MinMemorySize();
    Clay_Arena a = Clay_CreateArenaWithCapacityAndMemory(size, malloc(size));
    ret->arena = a;
    ret->context = Clay_Initialize(
        a, (Clay_Dimensions){ (float)w, (float)h },
        (Clay_ErrorHandler){ .errorHandlerFunction = clay_error_cb, .userData = (uintptr_t)title });

    ret->last = 0;
    ret->now = SDL_GetPerformanceCounter();

    return ret;
}

void ng_win_destroy(ng_win *w) {
    printf("Destroying window with ID %d\n", SDL_GetWindowID(w->win));
    SDL_DestroyRenderer(w->ren);
    SDL_DestroyWindow(w->win);

    list_remove(renderer_get_wins(), w->idx);

    free(w->arena.memory);
    free(w);
}
