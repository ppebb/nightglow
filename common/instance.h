#ifndef NG_INSTANCE_H
#define NG_INSTANCE_H

#include <libc/calls/weirdtypes.h>
#include <stdbool.h>

enum InstanceType {
    VANILLA,
    TCONFIG,
    TAPI,
    TML,
};

typedef struct _instance {
    char *name;
    enum InstanceType type;
    char *icon;
    char *path;
    bool windows_only;
    pid_t pid;
} instance;

instance *instance_new(char *name, enum InstanceType type, char *icon);
bool instance_serialize(instance *instance);
instance *instance_deserialize(char *path);
void instance_free(instance *instance);

#endif
