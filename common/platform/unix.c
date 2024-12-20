#include "unix.h"
#include "platform.h"
#include <libc/dce.h>
#include <libc/proc/posix_spawn.h>
#include <libc/runtime/runtime.h>
#include <libc/x/x.h>
#include <stdio.h>

static int spawn_xdg_open(const char *path) {
    const char *prog = IsXnu() ? "open" : "xdg-open";

    return posix_spawnp_shut_up(prog, (char const *[]){prog, path, NULL});
}

void initialize_platform_unix(platform *platform) {
    platform->open_path = spawn_xdg_open;
    platform->path_combine = xjoinpaths;
}
