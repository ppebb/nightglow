#include "icon_window.h"
#include "common/icon_utils.h"
#include "void_list.h"
#include <gio/gio.h>
#include <glib-object.h>
#include <glib.h>
#include <gtk/gtk.h>
#include <libc/x/x.h>

typedef struct _icon_window {
    GtkWindow *win;
    GtkWidget *default_button;
    GtkWidget *selected_button;
    GtkWidget *ok_button;
    GtkWidget *remove_button;
    GListModel *model;
    bool default_selected;
    const char *selected; // Selected icon *name*
    void *data;           // For callback
    void (*cb)(void *, const char *);
} icon_window;

struct _NGIconSelectionButton {
    GObject parent_instance;
    char *icon_path;
    guint signal_id;
};

struct _NGIconSelectionButtonClass {
    GObjectClass parent_class;
};

G_BEGIN_DECLS

#define NG_TYPE_ICON_SELECTION_BUTTON ng_icon_selection_button_get_type()
G_DECLARE_FINAL_TYPE(
    NGIconSelectionButton, ng_icon_selection_button, NG, ICON_SELECTION_BUTTON,
    GtkButton
)
G_DEFINE_FINAL_TYPE(
    NGIconSelectionButton, ng_icon_selection_button, GTK_TYPE_BUTTON
)

static void
ng_icon_selection_button_class_init(NGIconSelectionButtonClass *klass) {
}

static void ng_icon_selection_button_init(NGIconSelectionButton *self) {
}

GtkWidget *ng_icon_selection_button_new() {
    return g_object_new(NG_TYPE_ICON_SELECTION_BUTTON, NULL);
}

G_END_DECLS;

static void
setup(GtkSignalListItemFactory *self, GtkListItem *item, gpointer user_data) {
    GtkWidget *button = ng_icon_selection_button_new();

    GtkWidget *box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_button_set_child(GTK_BUTTON(button), box);

    GtkWidget *image = gtk_image_new();
    gtk_widget_set_size_request(image, 128, 128);
    gtk_box_append(GTK_BOX(box), image);

    GtkWidget *label = gtk_label_new(NULL);
    gtk_box_append(GTK_BOX(box), label);

    gtk_list_item_set_child(item, button);
}

static void icon_button_click(NGIconSelectionButton *self, gpointer data) {
    icon_window *iwin = (icon_window *)data;

    gtk_widget_set_sensitive(GTK_WIDGET(iwin->selected_button), true);
    gtk_widget_set_sensitive(GTK_WIDGET(self), false);
    iwin->selected_button = GTK_WIDGET(self);

    gtk_widget_set_sensitive(iwin->ok_button, true);
    gtk_widget_set_sensitive(
        iwin->remove_button, icon_allowed_to_delete(iwin->selected)
    );
}

static void
bind(GtkSignalListItemFactory *self, GtkListItem *item, gpointer user_data) {
    icon_window *iwin = (icon_window *)user_data;

    GtkWidget *button = gtk_list_item_get_child(item);
    GtkWidget *box = gtk_widget_get_first_child(button);
    GtkWidget *image = gtk_widget_get_first_child(box);
    GtkWidget *label = gtk_widget_get_last_child(box);
    char *icon_path = gtk_list_item_get_item(item);

    if (!icon_path || !button || !box || !image || !label)
        return;

    gtk_image_set_from_file(GTK_IMAGE(image), icon_path);

    char *icon_name = icon_name_from_path(icon_path);
    if (strcmp(icon_name, "Terraria"))
        iwin->default_button = button;

    if (strcmp(icon_name, iwin->selected))
        gtk_widget_set_sensitive(button, false);

    gtk_label_set_text(GTK_LABEL(label), icon_name);
    free(icon_name);

    guint signal_id =
        g_signal_connect(button, "click", G_CALLBACK(icon_button_click), iwin);
    NG_ICON_SELECTION_BUTTON(button)->signal_id = signal_id;
    NG_ICON_SELECTION_BUTTON(button)->icon_path = icon_path;
}

static void
unbind(GtkSignalListItemFactory *self, GtkListItem *item, gpointer user_data) {
    icon_window *iwin = (icon_window *)user_data;

    GtkWidget *button = gtk_list_item_get_child(item);
    GtkWidget *box = gtk_widget_get_first_child(button);
    GtkWidget *image = gtk_widget_get_first_child(box);
    GtkWidget *label = gtk_widget_get_last_child(box);

    if (button) {
        NGIconSelectionButton *b = NG_ICON_SELECTION_BUTTON(button);
        g_signal_handler_disconnect(button, b->signal_id);

        char *icon_name = icon_name_from_path(b->icon_path);

        if (strcmp(icon_name, "Terraria"))
            iwin->default_button = NULL;

        b->signal_id = 0;
        b->icon_path = NULL;
    }

    if (image)
        gtk_image_clear(GTK_IMAGE(image));

    if (label)
        gtk_label_set_text(GTK_LABEL(label), "");
}

static void icon_window_free(icon_window *iwin, bool close) {
    if (close) {
        gtk_window_close(iwin->win);
        gtk_window_destroy(iwin->win);
    }

    free(iwin);
}

static void
icon_selected_response(GObject *self, GAsyncResult *res, gpointer data) {
    GtkFileDialog *dialog = GTK_FILE_DIALOG(self);
    icon_window *iwin = (icon_window *)data;

    GFile *file = gtk_file_dialog_open_finish(dialog, res, NULL);

    if (!file)
        return;

    char *fname = g_file_get_basename(file);
    GFile *dest = g_file_new_for_path(fname);
    if (!g_file_copy(file, dest, G_FILE_COPY_NONE, NULL, NULL, NULL, NULL))
        goto end;

    NGVoidList *l = NG_VOID_LIST(iwin->model);
    int pos = ng_void_list_search(l, file, (int (*)(void *, void *))strcmp);

    if (pos < 0)
        ng_void_list_insert(l, file, ~pos);

end:
    free(fname);
    g_object_unref(dest);
    g_object_unref(file);
}

static void add_button_click(GtkButton *self, gpointer data) {
    icon_window *iwin = (icon_window *)data;

    GtkFileDialog *dialog = gtk_file_dialog_new();
    GtkFileFilter *filter = gtk_file_filter_new();
    gtk_file_filter_add_pixbuf_formats(filter);

    gtk_file_dialog_set_default_filter(dialog, filter);
    gtk_file_dialog_set_title(dialog, "Select and Icon - Nightglow");
    gtk_file_dialog_set_modal(dialog, true);

    gtk_file_dialog_open(dialog, iwin->win, NULL, icon_selected_response, iwin);
    g_object_unref(dialog);
}

static void remove_button_click(GtkButton *self, gpointer data) {
    icon_window *iwin = (icon_window *)data;
    NGVoidList *l = NG_VOID_LIST(iwin->model);

    for (size_t i = 0; i < g_list_model_get_n_items(G_LIST_MODEL(l)); i++) {
        const char *icon_path = g_list_model_get_item(G_LIST_MODEL(l), i);
        if (strcmp(iwin->selected, icon_path)) {
            // TODO: Check success
            ng_void_list_remove(l, i);

            char *icon_path = icon_path;
            // TODO: Check success
            remove(icon_path);

            iwin->selected = "Terraria";
            if (iwin->default_button) {
                gtk_widget_set_sensitive(iwin->default_button, false);
                iwin->selected_button = iwin->default_button;
            }

            break;
        }
    }
}

static void ok_button_click(GtkButton *self, gpointer data) {
    icon_window *iwin = (icon_window *)data;
    iwin->cb(iwin->data, iwin->selected);
    icon_window_free(iwin, true);
}

static void cancel_button_click(GtkButton *self, gpointer data) {
    icon_window_free(data, true);
}

static void win_close_request(GtkWindow *self, gpointer data) {
    icon_window_free(data, false);
}

void icon_window_new(
    GtkWindow *parent, const char *selected, void (*cb)(void *, const char *),
    void *data
) {
    icon_window *iwin = malloc(sizeof(*iwin));
    iwin->selected = selected;
    iwin->default_selected = strcmp(selected, "Terraria") == 0;
    iwin->cb = cb;
    iwin->data = data;

    GtkWindow *win = GTK_WINDOW(gtk_window_new());
    gtk_window_set_application(win, gtk_window_get_application(parent));
    gtk_window_set_title(win, "Select Icon - Nightglow");
    gtk_window_set_default_size(win, 800, 800);
    gtk_window_set_transient_for(win, parent);
    gtk_window_set_modal(win, true);
    g_signal_connect(win, "close-request", G_CALLBACK(win_close_request), iwin);
    iwin->win = win;

    GtkWidget *root_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_window_set_child(win, root_box);

    GtkWidget *scrolled = gtk_scrolled_window_new();
    GListModel *model = G_LIST_MODEL(ng_void_list_new(ng_available_icons));
    iwin->model = model;
    GtkListItemFactory *factory = gtk_signal_list_item_factory_new();

    g_signal_connect(factory, "setup", G_CALLBACK(setup), NULL);
    g_signal_connect(factory, "bind", G_CALLBACK(bind), iwin);
    g_signal_connect(factory, "unbind", G_CALLBACK(unbind), iwin);

    GtkWidget *view = gtk_grid_view_new(
        GTK_SELECTION_MODEL(gtk_no_selection_new(model)), factory
    );
    gtk_scrolled_window_set_child(GTK_SCROLLED_WINDOW(scrolled), view);
    gtk_box_append(GTK_BOX(root_box), scrolled);

    GtkWidget *footer_box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_box_append(GTK_BOX(root_box), footer_box);

    GtkWidget *left_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_box_append(GTK_BOX(footer_box), left_box);

    GtkWidget *add_icon_button = gtk_button_new_with_label("Add Icon");
    g_signal_connect(
        add_icon_button, "click", G_CALLBACK(add_button_click), iwin
    );
    gtk_box_append(GTK_BOX(left_box), add_icon_button);

    GtkWidget *remove_icon_button = gtk_button_new_with_label("Remove Icon");
    iwin->remove_button = remove_icon_button;
    g_signal_connect(
        remove_icon_button, "click", G_CALLBACK(remove_button_click), iwin
    );
    gtk_box_append(GTK_BOX(left_box), remove_icon_button);
    if (selected && !icon_allowed_to_delete(selected))
        gtk_widget_set_sensitive(remove_icon_button, false);

    GtkWidget *right_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);
    gtk_widget_set_hexpand(right_box, true);
    gtk_widget_set_halign(right_box, GTK_ALIGN_END);
    gtk_box_append(GTK_BOX(footer_box), right_box);

    GtkWidget *ok_button = gtk_button_new_with_label("Ok");
    iwin->ok_button = ok_button;
    g_signal_connect(ok_button, "click", G_CALLBACK(ok_button_click), iwin);
    gtk_box_append(GTK_BOX(right_box), ok_button);
    if (!selected)
        gtk_widget_set_sensitive(ok_button, false);

    GtkWidget *cancel_button = gtk_button_new_with_label("Cancel");
    g_signal_connect(
        cancel_button, "click", G_CALLBACK(cancel_button_click), iwin
    );
    gtk_box_append(GTK_BOX(right_box), cancel_button);
}
