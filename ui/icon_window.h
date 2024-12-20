#ifndef NG_ICON_WINDOW_H
#define NG_ICON_WINDOW_H

#include <gtk/gtk.h>

void icon_window_new(
    GtkWindow *parent, const char *selected, void (*cb)(void *, const char *),
    void *data
);

#endif
