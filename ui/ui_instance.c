#include "ui_instance.h"

struct _NGUIInstance {
    GObject parent_instance;
    instance *instance; // launcher instance. Not to be confused with...
                        // anything else called instance
};

G_DEFINE_TYPE(NGUIInstance, ng_ui_instance, G_TYPE_OBJECT)

enum { PROP_0, PROP_INSTANCE, N_PROPS };

static void ng_ui_instance_class_init(NGUIInstanceClass *klass) {
}

static void ng_ui_instance_init(NGUIInstance *self) {
}

NGUIInstance *ng_ui_instance_new(instance *instance) {
    return g_object_new(NG_TYPE_UI_INSTANCE, "instance", instance);
}
