#include "icon_utils.h"
#include "common/data_structures/list.h"
#include "common/platform/platform.h"
#include "common/utils.h"
#include "third_party/incbin/incbin.h"
#include <libc/calls/calls.h>
#include <libc/calls/struct/dirent.h>
#include <libc/sysv/consts/dt.h>
#include <libc/sysv/consts/o.h>
#include <libc/sysv/consts/ok.h>
#include <libc/x/x.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

INCBIN(t_config_icon, "assets/icons/tConfig.png");
INCBIN(t_api_icon, "assets/icons/tAPI.png");
INCBIN(terraria_icon, "assets/icons/Terraria.png");

#define write_asset(data, file)                                                \
    {                                                                          \
        char *out = path_combine(ng_instance_icons_path, file);                \
        if (access(out, F_OK) == -1) {                                         \
            printf("writing %s to path %s\n", file, out);                      \
            int fd = open(out, O_WRONLY | O_CREAT, 0664);                      \
            write(fd, g##data##Data, g##data##Size);                           \
            close(fd);                                                         \
        }                                                                      \
        free(out);                                                             \
    }

list *ng_available_icons;

list *initialize_icons(void) {
    list *available_icons = list_new();

    write_asset(t_config_icon, "tConfig.png");
    write_asset(t_api_icon, "tAPI.png");
    write_asset(terraria_icon, "Terraria.png");

    DIR *dir = opendir(ng_instance_icons_path);

    if (!dir)
        return available_icons;

    struct dirent *dp;
    while ((dp = readdir(dir)) != NULL)
        if (dp->d_type == DT_REG)
            list_add(
                available_icons,
                path_combine(ng_instance_icons_path, dp->d_name)
            );

    closedir(dir);

    list_sort(available_icons, (int (*)(void *, void *))strcmp);

    return available_icons;
}

char *icon_name_from_path(const char *icon_path) {
    char *bname = xbasename(icon_path);
    char *trim = trim_extension(bname);
    free(bname);

    return trim;
}

bool icon_allowed_to_delete(const char *icon_path) {
    char *icon_name = icon_name_from_path(icon_path);
    bool ret =
        (!strcmp(icon_name, "tConfig") && !strcmp(icon_name, "tAPI") &&
         !strcmp(icon_name, "Terraria"));

    free(icon_name);
    return ret;
}
