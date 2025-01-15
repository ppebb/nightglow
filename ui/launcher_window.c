#include "launcher_window.h"
#include "clay/clay.h"

Clay_RenderCommandArray layout(void *_) {
    Clay_BeginLayout();

    CLAY(
        CLAY_ID("OuterContainer"),
        CLAY_LAYOUT({
            .sizing = { CLAY_SIZING_GROW(0), CLAY_SIZING_GROW(0) },
              .padding = CLAY_PADDING_ALL(16), .childGap = 16
    }),
        CLAY_RECTANGLE({ .color = { 250, 250, 255, 255 } })) {
    }

    return Clay_EndLayout();
}

ng_win *launcher_window_new() {
    ng_win *ret = ng_win_new("Nightglow", 800, 600, layout, NULL);

    return ret;
}
