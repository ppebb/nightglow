#ifndef NG_UTILS_H
#define NG_UTILS_H

#include <libc/str/str.h>
#include <string.h>

#define LEN(X) sizeof(X) / sizeof(X[0])

// Returns a copy of the string up until the last .
static inline char *trim_extension(const char *path) {
    const char *c = path;

    int pos = -1;

    while (*c != '\0') {
        if (*c == '.')
            pos = c - path;

        c++;
    }

    if (pos == -1)
        return strdup(path);

    char *ret = malloc(sizeof(char) * (pos + 1));
    memcpy(ret, path, pos);
    ret[pos] = '\0';
    return ret;
}

#endif
