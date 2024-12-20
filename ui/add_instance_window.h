#include "common/instance.h"
#include <gtk/gtk.h>

void add_instance_window_open(
    GtkApplication *application, GtkWindow *parent, void *(*cb)(instance)
);
