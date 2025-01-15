#ifndef NG_LIST_H
#define NG_LIST_H

#include <stdbool.h>

typedef struct _list {
    void **data;
    size_t len;
    size_t capacity;
} list;

list *list_new(void);
bool list_add(list *l, void *item);
bool list_insert(list *l, void *item, size_t idx);
void *list_get(list *l, size_t idx);
bool list_remove(list *l, size_t idx);
bool list_remove_elem(list *l, void *elem, int (*cb)(void *, void *));
void list_clear(list *l);
int list_bin_search(list *l, void *elem, int (*cb)(void *, void *));
void list_sort(list *l, int (*cb)(void *, void *));
void list_free(list *l);

#endif
