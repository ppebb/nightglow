#ifndef NG_WIN_H
#define NG_WIN_H

#include "clay/clay.h"
#include <SDL.h>

typedef struct _ng_win {
    SDL_Window *win;
    SDL_Renderer *ren;
    Clay_Context *context;
    Clay_Arena arena;
    Uint64 now;
    Uint64 last;
    size_t idx;
    Clay_RenderCommandArray (*create_layout)(void *udata);
    void *udata;
} ng_win;

ng_win *ng_win_new(char *title, int w, int h, Clay_RenderCommandArray (*create_layout)(void *udata), void *udata);
void ng_win_destroy(ng_win *w);

#endif
