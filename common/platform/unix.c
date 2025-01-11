#include "unix.h"
#include "platform.h"
#include <libc/dce.h>
#include <libc/proc/posix_spawn.h>
#include <libc/runtime/runtime.h>
#include <libc/stdlib.h>
#include <libc/str/str.h>
#include <libc/x/x.h>

static const char *data_dir() {
    const char *xdg_data = getenv("XDG_DATA_HOME");

    if (xdg_data != NULL && strlen(xdg_data) != 0)
        return xdg_data;

    const char *xdg_home = getenv("HOME");
    if (xdg_home != NULL && strlen(xdg_home) != 0)
        return path_combinev(xdg_home, ".local", "share");

    // Surely this won't be null...
    const char *uname = getlogin();
    return path_combinev("/", uname, ".local", "share");
}

static const char *cache_dir() {
    const char *xdg_cache = getenv("XDG_CACHE_HOME");

    if (xdg_cache != NULL && strlen(xdg_cache) != 0)
        return xdg_cache;

    const char *xdg_home = getenv("HOME");
    if (xdg_home != NULL && strlen(xdg_home) != 0)
        return path_combinev(xdg_home, ".cache");

    // Surely this won't be null...
    const char *uname = getlogin();
    return path_combinev("/", uname, ".cache");
}

static int spawn_xdg_open(char *const path) {
    char *const prog = IsXnu() ? "open" : "xdg-open";

    return posix_spawnp_shut_up(prog, (char *const[]){prog, path, NULL});
}

void initialize_platform_unix(platform *platform) {
    platform->path_combine = xjoinpaths;
    platform->data_dir = data_dir;
    platform->cache_dir = cache_dir;
    platform->open_path = spawn_xdg_open;
}
