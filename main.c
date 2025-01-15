#include "common/icon_utils.h"
#include "common/platform/platform.h"
#include "sdl2_stub.h"
#include "sdl2_ttf_stub.h"
#include <libc/runtime/runtime.h>
#include <libc/stdio/stdio.h>

#define CLAY_IMPLEMENTATION
#include "third_party/clay/clay.h"
#include "third_party/clay/renderers/SDL2/clay_renderer_SDL2.c"

void clay_error_cb(Clay_ErrorData errorData) {
    printf("%s", errorData.errorText.chars);
}

void close_stubs() {
    TTF_Quit();
    SDL_Quit();

    close_sdl2_ttf();
    close_sdl2();
}

const int FONT_ID_NOTO = 0;
const Clay_Color COLOR_LIGHT = (Clay_Color){ 224, 215, 210, 255 };
const Clay_Color COLOR_RED = (Clay_Color){ 168, 66, 28, 255 };
const Clay_Color COLOR_ORANGE = (Clay_Color){ 225, 138, 50, 255 };

// Layout config is just a struct that can be declared statically, or inline
Clay_LayoutConfig sidebarItemLayout = (Clay_LayoutConfig){
    .sizing = { .width = CLAY_SIZING_GROW(0), .height = CLAY_SIZING_FIXED(50) },
};

// Re-useable components are just normal functions
void SidebarItemComponent() {
    CLAY(CLAY_LAYOUT(sidebarItemLayout), CLAY_RECTANGLE({ .color = COLOR_ORANGE })) {
    }
}

// An example function to begin the "root" of your layout tree
Clay_RenderCommandArray CreateLayout() {
    Clay_BeginLayout();

    // An example of laying out a UI with a fixed width sidebar and flexible width main content
    CLAY(
        CLAY_ID("OuterContainer"),
        CLAY_LAYOUT({
            .sizing = { CLAY_SIZING_GROW(0), CLAY_SIZING_GROW(0) },
              .padding = CLAY_PADDING_ALL(16), .childGap = 16
    }),
        CLAY_RECTANGLE({ .color = { 250, 250, 255, 255 } })) {
        CLAY(
            CLAY_ID("SideBar"),
            CLAY_LAYOUT({
                .layoutDirection = CLAY_TOP_TO_BOTTOM,
                .sizing = { .width = CLAY_SIZING_FIXED(300), .height = CLAY_SIZING_GROW(0) },
                .padding = CLAY_PADDING_ALL(16),
                .childGap = 16
        }),
            CLAY_RECTANGLE({ .color = COLOR_LIGHT })) {
            CLAY(
                CLAY_ID("ProfilePictureOuter"),
                CLAY_LAYOUT({ .sizing = { .width = CLAY_SIZING_GROW(0) },
                              .padding = CLAY_PADDING_ALL(16),
                              .childGap = 16,
                              .childAlignment = { .y = CLAY_ALIGN_Y_CENTER } }),
                CLAY_RECTANGLE({ .color = COLOR_RED })) {
                CLAY(
                    CLAY_ID("ProfilePicture"),
                    CLAY_LAYOUT({
                        .sizing = { .width = CLAY_SIZING_FIXED(60), .height = CLAY_SIZING_FIXED(60) }
                })) {
                }
                CLAY_TEXT(
                    CLAY_STRING("Clay - UI LIBRARY"), CLAY_TEXT_CONFIG({
                                                          .fontSize = 24, .textColor = { 255, 255, 255, 255 }
                }));
            }

            // Standard C code like loops etc work inside components
            for (int i = 0; i < 5; i++)
                SidebarItemComponent();
        }

        CLAY(
            CLAY_ID("MainContent"),
            CLAY_LAYOUT({
                .sizing = { .width = CLAY_SIZING_GROW(0), .height = CLAY_SIZING_GROW(0) }
        }),
            CLAY_RECTANGLE({ .color = COLOR_LIGHT })) {
        }
    }
    // ...

    return Clay_EndLayout();
}

int main(int argc, char **argv) {
    ShowCrashReports();
    initialize_sdl2();
    initialize_sdl2_ttf();

    initialize_platform();
    initialize_icons();

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        fprintf(stderr, "Error: could not initialize SDL_ttf: %s\n", TTF_GetError());
        close_stubs();
        return EXIT_FAILURE;
    }

    if (TTF_Init() < 0) {
        fprintf(stderr, "Error: could not initialize SDL_ttf: %s\n", TTF_GetError());
        close_stubs();
        return EXIT_FAILURE;
    }

    TTF_Font *font = TTF_OpenFont("/usr/share/fonts/noto/NotoSans-Regular.ttf", 16);
    if (!font) {
        fprintf(stderr, "Error: could not load font: %s\n", TTF_GetError());
        return 1;
    }
    SDL2_fonts[FONT_ID_NOTO] = (SDL2_Font){
        .fontId = FONT_ID_NOTO,
        .font = font,
    };

    SDL_Window *window;
    SDL_Renderer *renderer;

    if (SDL_CreateWindowAndRenderer(800, 600, SDL_WINDOW_RESIZABLE, &window, &renderer) < 0) {
        fprintf(stderr, "Error: unable to create sdl window and renderer: %s", SDL_GetError());
        close_stubs();
        return EXIT_FAILURE;
    }

    uint64_t totalMemSize = Clay_MinMemorySize();
    Clay_Arena clayMem = Clay_CreateArenaWithCapacityAndMemory(totalMemSize, malloc(totalMemSize));

    Clay_SetMeasureTextFunction(SDL2_MeasureText);

    int windowWidth = 0;
    int windowHeight = 0;
    SDL_GetWindowSize(window, &windowWidth, &windowHeight);
    Clay_Initialize(
        clayMem, (Clay_Dimensions){ (float)windowWidth, (float)windowHeight }, (Clay_ErrorHandler){ clay_error_cb, 0 });
    Uint64 NOW = SDL_GetPerformanceCounter();
    Uint64 LAST = 0;
    double deltaTime = 0;

    while (true) {
        Clay_Vector2 scrollDelta = {};
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    goto quit;
                case SDL_MOUSEWHEEL: {
                    scrollDelta.x = event.wheel.x;
                    scrollDelta.y = event.wheel.y;
                }
            }
        }

        LAST = NOW;
        NOW = SDL_GetPerformanceCounter();
        deltaTime = (double)((NOW - LAST) * 1000 / (double)SDL_GetPerformanceFrequency());

        int mouseX;
        int mouseY;
        Uint32 mouseState = SDL_GetMouseState(&mouseX, &mouseY);
        Clay_Vector2 mousePosition = (Clay_Vector2){ (float)mouseX, (float)mouseY };
        Clay_SetPointerState(mousePosition, mouseState & SDL_BUTTON(1));

        Clay_UpdateScrollContainers(true, (Clay_Vector2){ scrollDelta.x, scrollDelta.y }, deltaTime);

        SDL_GetWindowSize(window, &windowWidth, &windowHeight);
        Clay_SetLayoutDimensions((Clay_Dimensions){ (float)windowWidth, (float)windowHeight });

        Clay_RenderCommandArray renderCommands = CreateLayout();
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);

        Clay_SDL2_Render(renderer, renderCommands);

        SDL_RenderPresent(renderer);
    }

quit:
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    close_stubs();

    return EXIT_SUCCESS;
}
