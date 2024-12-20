#ifndef NG_VOID_LIST_H
#define NG_VOID_LIST_H

#include "common/data_structures/list.h"
#include <glib-object.h>

G_BEGIN_DECLS

#define NG_TYPE_VOID_LIST ng_void_list_get_type()
G_DECLARE_FINAL_TYPE(NGVoidList, ng_void_list, NG, VOID_LIST, GObject)

NGVoidList *ng_void_list_new(list *list);
bool ng_void_list_add(NGVoidList *self, void *item);
bool ng_void_list_insert(NGVoidList *self, void *item, int idx);
bool ng_void_list_remove(NGVoidList *self, guint position);
int ng_void_list_search(
    NGVoidList *self, void *elem, int (*cb)(void *, void *)
);

G_END_DECLS

#endif
