#include "platform.h"
#include <libc/calls/calls.h>
#include <libc/dce.h>
#include <libc/mem/mem.h>
#include <libc/proc/posix_spawn.h>
#include <libc/runtime/runtime.h>
#include <libc/sysv/consts/at.h>
#include <libc/sysv/consts/fileno.h>
#include <libc/sysv/consts/o.h>
#include <libc/x/x.h>
#include <stdio.h>

platform _platform;
const char *ng_data_path;
const char *ng_cache_path;
const char *netfx_path;
const char *netcore_path;
const char *ng_instances_path;
const char *ng_instance_icons_path;
const char *ng_logs_path;

#define log_makedir(NAME, PERM)                                                \
    printf("Creating directory %s, %s\n", NAME, makedirs(NAME, PERM))

void initialize_platform(void) {
    // clang-format off
#if SupportsLinux() || SupportsXnu() || SupportsBsd()
    #include "unix.h"
    if (IsLinux() || IsXnu() || IsXnuSilicon() || IsBsd())
        initialize_platform_unix(&_platform);
#endif

#if SupportsWindows()
    #include "windows.h"
    if (IsWindows())
        initialize_platform_windows(&_platform);
#endif
    // clang-format on

    // Cannot be modified at runtime
    ng_data_path = path_combine(_platform.data_dir(), "nightglow");
    ng_cache_path = path_combine(_platform.cache_dir(), "nightglow");
    ng_instances_path = path_combine(ng_data_path, "instances");
    ng_instance_icons_path = path_combine(ng_data_path, "icons");
    ng_logs_path = path_combine(ng_data_path, "logs");

    log_makedir(ng_data_path, 0755);
    log_makedir(ng_cache_path, 0755);
    log_makedir(ng_instances_path, 0755);
    log_makedir(ng_instance_icons_path, 0755);
    log_makedir(ng_logs_path, 0755);
}

int posix_spawnp_shut_up(const char *prog, char *const *args) {
    posix_spawn_file_actions_t action;
    posix_spawn_file_actions_init(&action);
    posix_spawn_file_actions_addopen(
        &action, STDOUT_FILENO, "/dev/null", O_WRONLY | O_APPEND, 0
    );
    posix_spawn_file_actions_addopen(
        &action, STDERR_FILENO, "/dev/null", O_WRONLY | O_APPEND, 0
    );

    int ret = posix_spawnp(NULL, prog, &action, NULL, args, environ);

    posix_spawn_file_actions_destroy(&action);

    return ret;
}

char *path_combine(const char *path, const char *other) {
    return _platform.path_combine(path, other);
}

char *__path_combinev(size_t len, const char **paths) {
    char *ret = "";

    for (size_t i = 0; i < len; i++) {
        char *temp = path_combine(ret, paths[i]);

        if (i > 0)
            free(ret);

        ret = temp;
    }

    return ret;
}

int open_path(char *const path) {
    return _platform.open_path(path);
}
