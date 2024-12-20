#include "windows.h"
#include <libc/proc/posix_spawn.h>
#include <libc/runtime/runtime.h>
#include <libc/x/x.h>
#include <string.h>

// Copy of xjoinpaths but with backslashes
char *path_combine_win(const char *path, const char *other) {
    if (!*other)
        return xstrdup(path);
    else if (!*path)
        return xstrdup(other);
    else if (*other == '\\' || !strcmp(path, "."))
        return xstrdup(other);
    else if (endswith(path, "\\"))
        return xstrcat(path, other);
    else
        return xstrcat(path, (uintptr_t)'\\', other);
}

int spawn_explorer_exe(const char *path) {
    return posix_spawnp_shut_up(
        "explorer.exe", (char const *[]){"explorer.exe", path, NULL}
    );
}

void initialize_platform_windows(platform *platform) {
    platform->path_combine = path_combine_win;
    platform->open_path = spawn_explorer_exe;
}
