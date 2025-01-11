#ifndef NG_PLATFORM_H
#define NG_PLATFORM_H

#define path_combinev(...)                                                     \
    ({                                                                         \
        const char *paths_arr[] = {__VA_ARGS__};                               \
        __path_combinev(sizeof(paths_arr) / sizeof(paths_arr[0]), paths_arr);  \
    })

typedef struct _platform {
    char *(*path_combine)(const char *, const char *);
    const char *(*data_dir)(void);
    const char *(*cache_dir)(void);
    int (*open_path)(char *const);
} platform;

int posix_spawnp_shut_up(const char *prog, char *const *args);

void initialize_platform(void);
char *path_combine(const char *path, const char *other);
char *__path_combinev(size_t len, const char **paths);
int open_path(char *const path);
extern const char *ng_data_path;
extern const char *ng_cache_path;
extern const char *ng_netfx_path;
extern const char *ng_netcore_path;
extern const char *ng_instances_path;
extern const char *ng_instance_icons_path;
extern const char *ng_logs_path;

#endif
