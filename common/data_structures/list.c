#include "list.h"
#include <libc/mem/mem.h>
#include <libc/str/str.h>

// Create list with a backing array of size 10
list *list_new() {
    list *l = malloc(sizeof(*l));

    *l = (list){
        .data = malloc(sizeof(void *) * 10),
        .len = 0,
        .capacity = 10,
    };

    return l;
}

static bool resize(list *l, size_t new_cap) {
    if (new_cap <= l->capacity)
        return false;

    void **tmp = reallocarray(l->data, new_cap, sizeof(void *));

    if (!tmp)
        return false;

    l->data = tmp;
    l->capacity = new_cap;
    return true;
}

bool list_add(list *l, void *item) {
    if (l->len + 1 > l->capacity)
        if (!resize(l, l->capacity * 2))
            return false;

    l->data[l->len] = item;
    l->len++;

    return true;
}

bool list_insert(list *l, void *item, size_t idx) {
    if (idx > l->len)
        return false;

    if (l->len + 1 > l->capacity)
        resize(l, l->capacity * 2);

    if (idx < l->len)
        memmove(l->data[idx + 1], l->data[idx], l->len - (idx + 1) * sizeof(void *));
    l->len++;

    l->data[idx] = item;

    return true;
}

void *list_get(list *l, size_t idx) {
    if (idx >= l->len)
        return NULL;

    return l->data[idx];
}

bool list_remove(list *l, size_t idx) {
    if (idx >= l->len)
        return false;

    memmove(l->data[idx], l->data[idx + 1], l->len - (idx + 1) * sizeof(void *));
    l->len--;

    return true;
}

int direct(void *i1, void *i2) {
    return i1 == i2 ? 0 : 1;
}

bool list_remove_elem(list *l, void *elem, int (*cb)(void *, void *)) {
    int (*cmp)(void *, void *) = cb ? cb : direct;

    for (size_t i = 0; i < l->len; i++)
        if (cmp(elem, l->data[i]) == 0)
            return list_remove(l, i);

    return false;
}

void list_clear(list *l) {
    memset(l->data, 0, l->len);
    l->len = 0;
}

int list_bin_search(list *l, void *elem, int (*cb)(void *, void *)) {
    int (*cmp)(void *, void *) = cb ? cb : direct;

    int lo = 0;
    int hi = l->len;

    while (lo <= hi) {
        int i = (hi + lo) / 2;

        int c = cmp(elem, l->data[i]);

        if (c == 0)
            return i;

        if (c < 0)
            lo = i + 1;
        else
            hi = i - 1;
    }

    return ~lo;
}

static void swap(void **p1, void **p2) {
    void *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

static size_t partition(void **arr, size_t low, size_t high, int (*cb)(void *, void *)) {
    void *pivot = arr[high];

    size_t i = low - 1;

    for (size_t j = low; j < high; j++) {
        if (cb(arr[j], pivot) == -1) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

static void quicksort(void **arr, size_t low, size_t high, int (*cb)(void *, void *)) {
    if (cb(arr[low], arr[high]) == -1) {
        size_t pi = partition(arr, low, high, cb);

        quicksort(arr, low, pi - 1, cb);
        quicksort(arr, pi + 1, high, cb);
    }
}

void list_sort(list *l, int (*cb)(void *, void *)) {
    quicksort(l->data, 0, l->len - 1, cb);
}

void list_free(list *l) {
    free(l->data);
    free(l);
}
