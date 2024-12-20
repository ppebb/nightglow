// Small wrapper around common/data_structures/list.c so it can be a GListModel

#include "void_list.h"
#include "common/data_structures/list.h"
#include <gio/gio.h>
#include <glib-object.h>

struct _NGVoidList {
    GObject parent_instance;
    list *list;
};

struct _NGVoidListClass {
    GObjectClass parent_class;
};

static GType ng_void_list_get_item_type(GListModel *list) {
    return G_TYPE_OBJECT;
}

static guint ng_void_list_get_n_items(GListModel *list) {
    return (NG_VOID_LIST(list)->list->len);
}

static gpointer ng_void_list_get_item(GListModel *list, guint position) {
    NGVoidList *self = NG_VOID_LIST(list);

    if (position >= self->list->len)
        return NULL;

    return g_object_ref(list_get(self->list, position));
}

static void ng_void_list_model_init(GListModelInterface *iface) {
    iface->get_item_type = ng_void_list_get_item_type;
    iface->get_n_items = ng_void_list_get_n_items;
    iface->get_item = ng_void_list_get_item;
}

G_DEFINE_TYPE_WITH_CODE(
    NGVoidList, ng_void_list, G_TYPE_OBJECT,
    G_IMPLEMENT_INTERFACE(G_TYPE_LIST_MODEL, ng_void_list_model_init)
)

enum { PROP_0, PROP_ITEM_TYPE, PROP_N_ITEMS, PROP_LIST, N_PROPS };

static GParamSpec *properties[N_PROPS] = {
    NULL,
};

static void ng_void_list_get_property(
    GObject *object, guint prop_id, GValue *value, GParamSpec *pspec
) {
    NGVoidList *self = NG_VOID_LIST(object);

    switch (prop_id) {
    case PROP_ITEM_TYPE:
        g_value_set_gtype(
            value, ng_void_list_get_item_type(G_LIST_MODEL(self))
        );
        break;
    case PROP_N_ITEMS:
        g_value_set_uint(value, ng_void_list_get_n_items(G_LIST_MODEL(self)));
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}

static void ng_void_list_set_property(
    GObject *object, guint prop_id, const GValue *value, GParamSpec *pspec
) {
    NGVoidList *self = NG_VOID_LIST(object);

    switch (prop_id) {
    case PROP_LIST:
        self->list = (list *)g_value_get_pointer(value);
        g_list_model_items_changed(G_LIST_MODEL(self), 0, 0, self->list->len);
        break;
    default:
        G_OBJECT_WARN_INVALID_PROPERTY_ID(object, prop_id, pspec);
        break;
    }
}

static void ng_void_list_class_init(NGVoidListClass *klass) {
    GObjectClass *gobject_class = G_OBJECT_CLASS(klass);

    gobject_class->get_property = ng_void_list_get_property;
    gobject_class->set_property = ng_void_list_set_property;

    properties[PROP_ITEM_TYPE] = g_param_spec_gtype(
        "item-type", NULL, NULL, G_TYPE_OBJECT,
        G_PARAM_READABLE | G_PARAM_STATIC_STRINGS
    );

    properties[PROP_N_ITEMS] = g_param_spec_uint(
        "n-items", NULL, NULL, 0, G_MAXUINT, 0,
        G_PARAM_READABLE | G_PARAM_STATIC_STRINGS
    );

    properties[PROP_LIST] = g_param_spec_pointer(
        "list", NULL, NULL,
        G_PARAM_WRITABLE | G_PARAM_STATIC_STRINGS | G_PARAM_CONSTRUCT_ONLY
    );

    g_object_class_install_properties(gobject_class, N_PROPS, properties);
}

static void ng_void_list_init(NGVoidList *self) {
}

NGVoidList *ng_void_list_new(list *list) {
    return g_object_new(NG_TYPE_VOID_LIST, "list", list, NULL);
}

bool ng_void_list_add(NGVoidList *self, void *item) {
    if (!list_add(self->list, item))
        return false;

    g_list_model_items_changed(G_LIST_MODEL(self), self->list->len - 1, 0, 1);
    g_object_notify_by_pspec(G_OBJECT(self), properties[PROP_N_ITEMS]);

    return true;
}

bool ng_void_list_insert(NGVoidList *self, void *item, int idx) {
    return list_insert(self->list, item, idx);
}

bool ng_void_list_remove(NGVoidList *self, guint position) {
    if (!list_remove(self->list, position))
        return false;

    g_list_model_items_changed(G_LIST_MODEL(self), position, 1, 0);
    g_object_notify_by_pspec(G_OBJECT(self), properties[PROP_N_ITEMS]);

    return true;
}

int ng_void_list_search(
    NGVoidList *self, void *elem, int (*cb)(void *, void *)
) {
    return list_bin_search(self->list, elem, cb);
}
