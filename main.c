#include "common/icon_utils.h"
#include "common/platform/platform.h"
#include "glfw_stub.h"
#include <libc/runtime/runtime.h>
#include <libc/stdio/stdio.h>

void error_callback(int _, const char *description) {
    fprintf(stderr, "Error: %s\n", description);
}

int main(int argc, char **argv) {
    initialize_glfw();
    initialize_platform();
    initialize_icons();

    if (!glfwInit()) {
        fprintf(stderr, "glfwInit Failed!\n");
        exit(1);
    }

    glfwSetErrorCallback(error_callback);

    GLFWwindow *window = glfwCreateWindow(640, 480, "nightglow", NULL, NULL);
    if (!window) {
        fprintf(stderr, "glfwCreateWindow Failed!\n");
        exit(1);
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
    }

    glfwTerminate();
    close_glfw();

    return 0;
}
