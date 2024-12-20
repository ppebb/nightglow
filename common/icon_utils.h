#ifndef NG_ICON_UTILS_H
#define NG_ICON_UTILS_H

#include "common/data_structures/list.h"

extern list *ng_available_icons;

list *initialize_icons(void);
char *icon_name_from_path(const char *icon_path);
bool icon_allowed_to_delete(const char *icon_path);

#endif
