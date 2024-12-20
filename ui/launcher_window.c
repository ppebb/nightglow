#include "launcher_window.h"
#include "add_instance_window.h"
#include "common/platform/platform.h"
#include "ui_instance.h"
#include <gio/gio.h>
#include <gtk/gtk.h>

void add_instance_button_clicked(GtkButton *self, gpointer *data) {
    launcher_window *lwin = (launcher_window *)data;

    GtkApplication *application = gtk_window_get_application(lwin->win);

    add_instance_window_open(application, lwin->win, NULL);
}

void help_button_clicked(GtkButton *self) {
    open_path("https://github.com/ppebb/nightglow");
}

void open_path_wrapper(GtkButton *self, gpointer *data) {
    GtkWidget *popover = gtk_widget_get_parent(
        gtk_widget_get_parent(gtk_widget_get_parent(GTK_WIDGET(self)))
    );
    gtk_popover_popdown(GTK_POPOVER(popover));
    open_path((char *)data);
}

launcher_window *launcher_window_new(GtkApplication *application) {
    launcher_window *lwin = malloc(sizeof(*lwin));

    GtkWindow *win = GTK_WINDOW(gtk_application_window_new(application));
    gtk_window_set_application(win, application);
    gtk_window_set_title(win, "Nightglow");
    gtk_window_set_default_size(win, 800, 600);

    GtkWidget *root_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_window_set_child(win, root_box);

    GtkWidget *scrolled = gtk_scrolled_window_new();

    GListStore *model = g_list_store_new(ng_ui_instance_get_type());

    GtkListItemFactory *factory = gtk_signal_list_item_factory_new();
    // TODO: Setup factory signals

    GtkWidget *view = gtk_grid_view_new(
        GTK_SELECTION_MODEL(gtk_no_selection_new(G_LIST_MODEL(model))), factory
    );
    gtk_widget_set_halign(view, GTK_ALIGN_FILL);
    gtk_widget_set_vexpand(view, true);
    gtk_widget_set_hexpand(view, true);

    GtkWidget *ribbon_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_widget_set_css_classes(ribbon_box, (const char *[]){"toolbar", NULL});
    gtk_box_append(GTK_BOX(root_box), ribbon_box);

    GtkWidget *add_instance_button = gtk_button_new_with_label("Add Instance");
    g_signal_connect(
        add_instance_button, "clicked", G_CALLBACK(add_instance_button_clicked),
        lwin
    );
    gtk_box_append(GTK_BOX(ribbon_box), add_instance_button);

    GtkMenuButton *folders_button = GTK_MENU_BUTTON(gtk_menu_button_new());
    gtk_menu_button_set_label(folders_button, "Folders");

    // TODO: don't use popover menu because I HATE it. It's so damn ugly.
    GtkPopover *popover = GTK_POPOVER(gtk_popover_new());
    GtkWidget *popover_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);

#define button_for_path(LABEL, PATH)                                           \
    {                                                                          \
        GtkWidget *button = gtk_button_new_with_label(LABEL);                  \
        g_signal_connect(                                                      \
            button, "clicked", G_CALLBACK(open_path_wrapper), PATH             \
        );                                                                     \
        gtk_box_append(GTK_BOX(popover_box), button);                          \
    }

    button_for_path("Launcher Root", ng_data_path);
    button_for_path("Instances", ng_instances_path);
    button_for_path("Instance Icons", ng_instance_icons_path);
    button_for_path("Logs", ng_logs_path);
    button_for_path("Cache", ng_cache_path);

    gtk_popover_set_child(popover, popover_box);
    gtk_popover_set_has_arrow(popover, FALSE);
    gtk_widget_set_halign(GTK_WIDGET(popover), GTK_ALIGN_START);
    gtk_menu_button_set_popover(folders_button, GTK_WIDGET(popover));
    gtk_box_append(GTK_BOX(ribbon_box), GTK_WIDGET(folders_button));

    GtkWidget *settings_button = gtk_button_new_with_label("Settings");
    // g_signal_connect clicked. Settings don't exist yet!
    gtk_box_append(GTK_BOX(ribbon_box), settings_button);

    GtkWidget *help_button = gtk_button_new_with_label("Help");
    g_signal_connect(
        help_button, "clicked", G_CALLBACK(help_button_clicked), NULL
    );
    gtk_box_append(GTK_BOX(ribbon_box), help_button);

    GtkWidget *center_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_box_append(GTK_BOX(center_box), scrolled);
    gtk_box_append(GTK_BOX(root_box), center_box);

    *lwin = (launcher_window){
        .win = win,
    };

    return lwin;
}

void launcher_window_free(launcher_window *lwin) {
    free(lwin);
}
