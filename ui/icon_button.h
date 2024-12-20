#ifndef NG_ICON_BUTTON_H
#define NG_ICON_BUTTON_H

#include <glib-object.h>
#include <gtk/gtk.h>

G_BEGIN_DECLS

#define NG_TYPE_ICON_BUTTON ng_icon_button_get_type()
G_DECLARE_FINAL_TYPE(NGIconButton, ng_icon_button, NG, ICON_BUTTON, GtkButton)

struct _NGIconButtonClass {
    GObjectClass parent_class;
};

GtkWidget *ng_icon_button_new(
    GtkWindow *window, char *icon, void (*cb)(void *, const char *), void *data
);

G_END_DECLS

#endif
