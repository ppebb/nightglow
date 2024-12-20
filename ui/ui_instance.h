#ifndef UI_INSTANCE
#define UI_INSTANCE

#include "common/instance.h"
#include <glib-object.h>

G_BEGIN_DECLS

#define NG_TYPE_UI_INSTANCE ng_ui_instance_get_type()
G_DECLARE_FINAL_TYPE(NGUIInstance, ng_ui_instance, NG, UI_INSTANCE, GObject)

struct _NGUIInstanceClass {
    GObjectClass parent_class;
};

NGUIInstance *ng_ui_instance_new(instance *instance);

G_END_DECLS

#endif
