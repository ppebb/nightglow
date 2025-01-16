#include "common/icon_utils.h"
#include "common/platform/platform.h"
#include "renderer.h"
#include "sdl2_stub.h"
#include "sdl2_ttf_stub.h"
#include "ui/launcher_window.h"

int main() {
    ShowCrashReports();
    initialize_sdl2();
    initialize_sdl2_ttf();

    initialize_platform();
    initialize_icons();

    if (!renderer_init())
        goto close;

    launcher_window_new();

    list *events = list_new();
    list *ng_wins = renderer_get_wins();

    while (true) {
        list_clear(events);

        while (true) {
            // Needs to exist beyond its enclosing scope!
            SDL_Event *event = malloc(sizeof(SDL_Event));

            if (SDL_PollEvent(event)) {
                if (event->type == SDL_QUIT)
                    goto close;

                list_add(events, &event);
            }
            else {
                free(event);
                break;
            }
        }

        for (size_t i = 0; i < ng_wins->len; i++) {
            ng_win *w = list_get(ng_wins, i);
            if (renderer_render_ng_win(w, events))
                ng_win_destroy(w);
        }

        // Once every window is closed, we can exit
        if (ng_wins->len == 0) {
            printf("ng_wins became empty!\n");
            break;
        }
    }

close:
    renderer_deinit();
    close_sdl2_ttf();
    close_sdl2();

    return EXIT_SUCCESS;
}
