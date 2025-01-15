#ifndef NG_RENDERER_H
#define NG_RENDERER_H

#include "clay/clay.h"
#include "common/data_structures/list.h"
#include "ui/ng_win.h"
#include <SDL.h>

list *renderer_get_wins();
bool renderer_init();
void renderer_deinit();
bool renderer_render_ng_win(ng_win *w, list *events);

#endif
