#include "common/icon_utils.h"
#include "common/platform/platform.h"
#include "glib_stub.h"
#include "gtk4_stub.h"
#include "ui/launcher_window.h"
#include <libc/runtime/runtime.h>

static void activate(GtkApplication *app, gpointer data) {
    data = launcher_window_new(app);
    gtk_window_present(((launcher_window *)data)->win);
}

int main(int argc, char **argv) {
    // ShowCrashReports();
    initialize_glib();
    initialize_gtk4();
    initialize_platform();
    initialize_icons();

    GtkApplication *app;
    int status;

    app = gtk_application_new("ppeb.nightglow", G_APPLICATION_DEFAULT_FLAGS);

    launcher_window *lwin = NULL;
    g_signal_connect(app, "activate", G_CALLBACK(activate), lwin);

    status = g_application_run(G_APPLICATION(app), argc, argv);

    launcher_window_free(lwin);
    g_object_unref(app);

    close_glib();
    close_gtk4();

    return status;
}
