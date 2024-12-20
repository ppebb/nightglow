#ifndef NG_LAUNCHER_WINDOW_H
#define NG_LAUNCHER_WINDOW_H

#include <gtk/gtk.h>

typedef struct _launcher_window {
    GtkWindow *win;
} launcher_window;

launcher_window *launcher_window_new(GtkApplication *application);
void launcher_window_free(launcher_window *lwin);

#endif
