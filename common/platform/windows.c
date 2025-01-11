#include "windows.h"
#include <libc/proc/posix_spawn.h>
#include <libc/runtime/runtime.h>
#include <libc/stdio/stdio.h>
#include <libc/str/str.h>
#include <libc/x/x.h>

// TODO: Implement this for windows :)
static const char *data_dir() {
    fprintf(stderr, "Unimplemented on windows!");
    exit(1);
    __builtin_unreachable();
}

static const char *cache_dir() {
    fprintf(stderr, "Unimplemented on windows!");
    exit(1);
    __builtin_unreachable();
}

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

int spawn_explorer_exe(char *const path) {
    return posix_spawnp_shut_up(
        "explorer.exe", (char *const[]){"explorer.exe", path, NULL}
    );
}

void initialize_platform_windows(platform *platform) {
    platform->path_combine = path_combine_win;
    platform->data_dir = data_dir;
    platform->cache_dir = cache_dir;
    platform->open_path = spawn_explorer_exe;
}
