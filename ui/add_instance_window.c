#include "add_instance_window.h"
#include "icon_button.h"
#include <gtk/gtk.h>

typedef struct _add_instance_window {
    const char *icon_to_use;
    bool non_default_icon;
} add_instance_window;

static void icon_button_cb(void *data, const char *icon) {
    add_instance_window *awin = (add_instance_window *)data;

    awin->icon_to_use = icon;
    printf("%s\n", icon);
}

void add_instance_window_open(
    GtkApplication *application, GtkWindow *parent, void *(*cb)(instance)
) {
    add_instance_window *awin = malloc(sizeof(*awin));

    GtkWindow *win = GTK_WINDOW(gtk_window_new());
    gtk_window_set_application(win, application);
    gtk_window_set_title(win, "New Instance - Nightglow");
    gtk_window_set_default_size(win, 800, 600);
    gtk_window_set_transient_for(win, parent);

    GtkBox *root_box = GTK_BOX(gtk_box_new(GTK_ORIENTATION_VERTICAL, 0));
    gtk_window_set_child(win, GTK_WIDGET(root_box));

    GtkWidget *header_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_widget_set_valign(header_box, GTK_ALIGN_START);
    gtk_widget_set_vexpand(header_box, TRUE);
    gtk_box_append(GTK_BOX(root_box), header_box);

    GtkWidget *icon_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    GtkWidget *icon_button =
        ng_icon_button_new(win, NULL, icon_button_cb, awin);
    gtk_widget_set_size_request(icon_button, 64, 64);
    gtk_box_append(GTK_BOX(icon_box), icon_button);
    gtk_box_append(GTK_BOX(header_box), icon_box);

    gtk_window_present(win);
}
