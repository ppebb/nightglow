#include "instance.h"
#include "common/platform/platform.h"
#include <libc/calls/calls.h>
#include <libc/fmt/itoa.h>
#include <libc/sysv/consts/o.h>
#include <libc/sysv/consts/ok.h>
#include <libc/x/x.h>
#include <stdio.h>
#include <stdlib.h>

char *determine_path(char *name) {
    char *path = path_combinev(ng_instances_path, name);

    if (access(path, F_OK)) {
        for (size_t i = 1;; i++) {
            size_t len = sizeof(char) * LengthUint64(i);
            char *buf = malloc(len);
            snprintf(buf, len, "%zu", i);

            char *discriminated = xstrcat(path, buf);
            free(buf);

            if (!access(discriminated, F_OK)) {
                free(path);
                return discriminated;
            }
            else
                free(discriminated);
        }
    }

    return path;
}

instance *instance_new(char *name, enum InstanceType type, char *icon) {
    instance *inst;
    inst = malloc(sizeof(*inst));

    *inst = (instance){
        .name = name,
        .type = type,
        .icon = icon,
        .path = determine_path(name),
    };

    return inst;
}

#define write_value(fd, val) write(fd, &val, sizeof(val))

#define write_string(fd, str)                                                  \
    {                                                                          \
        size_t len = strlen(str);                                              \
        write_value(fd, len);                                                  \
        write(fd, str, len);                                                   \
    }

#define read_value(fd, type)                                                   \
    ({                                                                         \
        type *buf = alloca(sizeof(type));                                      \
        read(fd, buf, sizeof(type));                                           \
        *buf;                                                                  \
    })

#define read_string(fd)                                                        \
    ({                                                                         \
        size_t len = read_value(fd, size_t);                                   \
        char *buf = malloc(len + 1);                                           \
        read(fd, buf, len);                                                    \
        buf[len] = '\0';                                                       \
        buf;                                                                   \
    })

// NOTE: Serialization and deserialization must happen in the same order.
// Might abstract this if I end up needing to save this anywhere
// Strings are saved by writing their length and then the actual contents,
// rather than being null terminated
bool instance_serialize(instance *instance) {
    int fd = open(instance->path, O_WRONLY);

    if (!fd)
        return false;

    write_string(fd, instance->name);
    write_value(fd, instance->type);
    write_string(fd, instance->icon);

    close(fd);
    return true;
}

instance *instance_deserialize(char *path) {
    int fd = open(path, O_RDONLY);

    if (!fd)
        return NULL;

    instance *instance = malloc(sizeof(*instance));

    instance->name = read_string(fd);
    instance->type = read_value(fd, enum InstanceType);
    instance->icon = read_string(fd);

    close(fd);
    return instance;
}

void instance_free(instance *instance) {
    free(instance->name);
    free(instance->icon);
    free(instance->path);
    free(instance);
}
