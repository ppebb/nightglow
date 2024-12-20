#include "icon_button.h"
#include "icon_window.h"
#include <glib-object.h>
#include <gtk/gtk.h>

struct _NGIconButton {
    GObject parent_instance;
    GtkWindow *pwin;
    guint signal_clicked;
    const char *icon;
    void (*callback)(void *, const char *);
    void *data;
};

G_DEFINE_TYPE(NGIconButton, ng_icon_button, GTK_TYPE_BUTTON)

enum { PROP_0, PROP_PWIN, PROP_ICON, PROP_CALLBACK, PROP_DATA, N_PROPS };

static GParamSpec *properties[N_PROPS] = {
    NULL,
};

static void ng_icon_button_set_icon(NGIconButton *self, const char *icon) {
    if (!icon)
        return;

    GtkWidget *image = gtk_button_get_child(GTK_BUTTON(self));

    if (image)
        gtk_image_set_from_file(GTK_IMAGE(image), icon);
    else
        gtk_button_set_child(GTK_BUTTON(self), gtk_image_new_from_file(icon));

    self->icon = icon;

    if (self->callback)
        self->callback(self->data, self->icon);

    g_object_notify_by_pspec(G_OBJECT(self), properties[PROP_ICON]);
}

static void ng_icon_button_get_property(
    GObject *object, guint prop_id, GValue *value, GParamSpec *pspec
) {
    NGIconButton *self = NG_ICON_BUTTON(object);

    switch (prop_id) {
    case PROP_ICON:
        g_value_set_string(value, self->icon);
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}

static void ng_icon_button_set_property(
    GObject *object, guint prop_id, const GValue *value, GParamSpec *pspec
) {
    NGIconButton *self = NG_ICON_BUTTON(object);

    switch (prop_id) {
    case PROP_PWIN:
        self->pwin = GTK_WINDOW(g_value_get_object(value));
        break;
    case PROP_ICON:
        ng_icon_button_set_icon(self, g_value_get_string(value));
        break;
    case PROP_CALLBACK:
        self->callback = g_value_get_pointer(value);
        break;
    case PROP_DATA:
        self->data = g_value_get_pointer(value);
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}

static void ng_icon_button_finalize(GObject *object) {
    NGIconButton *self = NG_ICON_BUTTON(object);

    g_signal_handler_disconnect(self, self->signal_clicked);

    G_OBJECT_CLASS(ng_icon_button_parent_class)->dispose(object);
}

static void ng_icon_button_class_init(NGIconButtonClass *klass) {
    GObjectClass *gobject_class = G_OBJECT_CLASS(klass);

    gobject_class->get_property = ng_icon_button_get_property;
    gobject_class->set_property = ng_icon_button_set_property;
    gobject_class->finalize = ng_icon_button_finalize;

    properties[PROP_PWIN] = g_param_spec_object(
        "pwin", NULL, NULL, GTK_TYPE_WINDOW,
        G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY | G_PARAM_STATIC_STRINGS
    );

    properties[PROP_ICON] = g_param_spec_string(
        "icon", NULL, NULL, NULL,
        G_PARAM_READWRITE | G_PARAM_EXPLICIT_NOTIFY | G_PARAM_STATIC_STRINGS
    );

    properties[PROP_CALLBACK] = g_param_spec_pointer(
        "callback", NULL, NULL,
        G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY | G_PARAM_STATIC_STRINGS
    );

    properties[PROP_DATA] = g_param_spec_pointer(
        "data", NULL, NULL,
        G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY | G_PARAM_STATIC_STRINGS
    );

    g_object_class_install_properties(gobject_class, N_PROPS, properties);
}

static void ng_icon_button_clicked(NGIconButton *self) {
    icon_window_new(
        self->pwin, self->icon,
        (void (*)(void *, const char *))ng_icon_button_set_icon, self
    );
}

static void ng_icon_button_init(NGIconButton *self) {
    // GtkWidget *image = gtk_image_new();
    // gtk_button_set_child(GTK_BUTTON(self), image);
    // self->signal_clicked = g_signal_connect(
    //     self, "clicked", G_CALLBACK(ng_icon_button_clicked), NULL
    // );
}

// TODO: Signals instead of cb?
GtkWidget *ng_icon_button_new(
    GtkWindow *window, char *icon, void (*cb)(void *, const char *), void *data
) {
    return g_object_new(
        NG_TYPE_ICON_BUTTON, "pwin", window, "icon", icon, "callback", cb,
        "data", data, NULL
    );
}
