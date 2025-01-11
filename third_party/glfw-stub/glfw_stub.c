#include "glfw_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct glfwFuncs {
    int (*ptr_glfwInit)(void);
    void (*ptr_glfwTerminate)(void);
    void (*ptr_glfwInitHint)(int hint, int value);
    void (*ptr_glfwInitAllocator)(const GLFWallocator * allocator);
    void (*ptr_glfwGetVersion)(int * major, int * minor, int * rev);
    const char * (*ptr_glfwGetVersionString)(void);
    int (*ptr_glfwGetError)(const char * * description);
    GLFWerrorfun (*ptr_glfwSetErrorCallback)(GLFWerrorfun callback);
    int (*ptr_glfwGetPlatform)(void);
    int (*ptr_glfwPlatformSupported)(int platform);
    GLFWmonitor * * (*ptr_glfwGetMonitors)(int * count);
    GLFWmonitor * (*ptr_glfwGetPrimaryMonitor)(void);
    void (*ptr_glfwGetMonitorPos)(GLFWmonitor * monitor, int * xpos, int * ypos);
    void (*ptr_glfwGetMonitorWorkarea)(GLFWmonitor * monitor, int * xpos, int * ypos, int * width, int * height);
    void (*ptr_glfwGetMonitorPhysicalSize)(GLFWmonitor * monitor, int * widthMM, int * heightMM);
    void (*ptr_glfwGetMonitorContentScale)(GLFWmonitor * monitor, float * xscale, float * yscale);
    const char * (*ptr_glfwGetMonitorName)(GLFWmonitor * monitor);
    void (*ptr_glfwSetMonitorUserPointer)(GLFWmonitor * monitor, void * pointer);
    void * (*ptr_glfwGetMonitorUserPointer)(GLFWmonitor * monitor);
    GLFWmonitorfun (*ptr_glfwSetMonitorCallback)(GLFWmonitorfun callback);
    const GLFWvidmode * (*ptr_glfwGetVideoModes)(GLFWmonitor * monitor, int * count);
    const GLFWvidmode * (*ptr_glfwGetVideoMode)(GLFWmonitor * monitor);
    void (*ptr_glfwSetGamma)(GLFWmonitor * monitor, float gamma);
    const GLFWgammaramp * (*ptr_glfwGetGammaRamp)(GLFWmonitor * monitor);
    void (*ptr_glfwSetGammaRamp)(GLFWmonitor * monitor, const GLFWgammaramp * ramp);
    void (*ptr_glfwDefaultWindowHints)(void);
    void (*ptr_glfwWindowHint)(int hint, int value);
    void (*ptr_glfwWindowHintString)(int hint, const char * value);
    GLFWwindow * (*ptr_glfwCreateWindow)(int width, int height, const char * title, GLFWmonitor * monitor, GLFWwindow * share);
    void (*ptr_glfwDestroyWindow)(GLFWwindow * window);
    int (*ptr_glfwWindowShouldClose)(GLFWwindow * window);
    void (*ptr_glfwSetWindowShouldClose)(GLFWwindow * window, int value);
    const char * (*ptr_glfwGetWindowTitle)(GLFWwindow * window);
    void (*ptr_glfwSetWindowTitle)(GLFWwindow * window, const char * title);
    void (*ptr_glfwSetWindowIcon)(GLFWwindow * window, int count, const GLFWimage * images);
    void (*ptr_glfwGetWindowPos)(GLFWwindow * window, int * xpos, int * ypos);
    void (*ptr_glfwSetWindowPos)(GLFWwindow * window, int xpos, int ypos);
    void (*ptr_glfwGetWindowSize)(GLFWwindow * window, int * width, int * height);
    void (*ptr_glfwSetWindowSizeLimits)(GLFWwindow * window, int minwidth, int minheight, int maxwidth, int maxheight);
    void (*ptr_glfwSetWindowAspectRatio)(GLFWwindow * window, int numer, int denom);
    void (*ptr_glfwSetWindowSize)(GLFWwindow * window, int width, int height);
    void (*ptr_glfwGetFramebufferSize)(GLFWwindow * window, int * width, int * height);
    void (*ptr_glfwGetWindowFrameSize)(GLFWwindow * window, int * left, int * top, int * right, int * bottom);
    void (*ptr_glfwGetWindowContentScale)(GLFWwindow * window, float * xscale, float * yscale);
    float (*ptr_glfwGetWindowOpacity)(GLFWwindow * window);
    void (*ptr_glfwSetWindowOpacity)(GLFWwindow * window, float opacity);
    void (*ptr_glfwIconifyWindow)(GLFWwindow * window);
    void (*ptr_glfwRestoreWindow)(GLFWwindow * window);
    void (*ptr_glfwMaximizeWindow)(GLFWwindow * window);
    void (*ptr_glfwShowWindow)(GLFWwindow * window);
    void (*ptr_glfwHideWindow)(GLFWwindow * window);
    void (*ptr_glfwFocusWindow)(GLFWwindow * window);
    void (*ptr_glfwRequestWindowAttention)(GLFWwindow * window);
    GLFWmonitor * (*ptr_glfwGetWindowMonitor)(GLFWwindow * window);
    void (*ptr_glfwSetWindowMonitor)(GLFWwindow * window, GLFWmonitor * monitor, int xpos, int ypos, int width, int height, int refreshRate);
    int (*ptr_glfwGetWindowAttrib)(GLFWwindow * window, int attrib);
    void (*ptr_glfwSetWindowAttrib)(GLFWwindow * window, int attrib, int value);
    void (*ptr_glfwSetWindowUserPointer)(GLFWwindow * window, void * pointer);
    void * (*ptr_glfwGetWindowUserPointer)(GLFWwindow * window);
    GLFWwindowposfun (*ptr_glfwSetWindowPosCallback)(GLFWwindow * window, GLFWwindowposfun callback);
    GLFWwindowsizefun (*ptr_glfwSetWindowSizeCallback)(GLFWwindow * window, GLFWwindowsizefun callback);
    GLFWwindowclosefun (*ptr_glfwSetWindowCloseCallback)(GLFWwindow * window, GLFWwindowclosefun callback);
    GLFWwindowrefreshfun (*ptr_glfwSetWindowRefreshCallback)(GLFWwindow * window, GLFWwindowrefreshfun callback);
    GLFWwindowfocusfun (*ptr_glfwSetWindowFocusCallback)(GLFWwindow * window, GLFWwindowfocusfun callback);
    GLFWwindowiconifyfun (*ptr_glfwSetWindowIconifyCallback)(GLFWwindow * window, GLFWwindowiconifyfun callback);
    GLFWwindowmaximizefun (*ptr_glfwSetWindowMaximizeCallback)(GLFWwindow * window, GLFWwindowmaximizefun callback);
    GLFWframebuffersizefun (*ptr_glfwSetFramebufferSizeCallback)(GLFWwindow * window, GLFWframebuffersizefun callback);
    GLFWwindowcontentscalefun (*ptr_glfwSetWindowContentScaleCallback)(GLFWwindow * window, GLFWwindowcontentscalefun callback);
    void (*ptr_glfwPollEvents)(void);
    void (*ptr_glfwWaitEvents)(void);
    void (*ptr_glfwWaitEventsTimeout)(double timeout);
    void (*ptr_glfwPostEmptyEvent)(void);
    int (*ptr_glfwGetInputMode)(GLFWwindow * window, int mode);
    void (*ptr_glfwSetInputMode)(GLFWwindow * window, int mode, int value);
    int (*ptr_glfwRawMouseMotionSupported)(void);
    const char * (*ptr_glfwGetKeyName)(int key, int scancode);
    int (*ptr_glfwGetKeyScancode)(int key);
    int (*ptr_glfwGetKey)(GLFWwindow * window, int key);
    int (*ptr_glfwGetMouseButton)(GLFWwindow * window, int button);
    void (*ptr_glfwGetCursorPos)(GLFWwindow * window, double * xpos, double * ypos);
    void (*ptr_glfwSetCursorPos)(GLFWwindow * window, double xpos, double ypos);
    GLFWcursor * (*ptr_glfwCreateCursor)(const GLFWimage * image, int xhot, int yhot);
    GLFWcursor * (*ptr_glfwCreateStandardCursor)(int shape);
    void (*ptr_glfwDestroyCursor)(GLFWcursor * cursor);
    void (*ptr_glfwSetCursor)(GLFWwindow * window, GLFWcursor * cursor);
    GLFWkeyfun (*ptr_glfwSetKeyCallback)(GLFWwindow * window, GLFWkeyfun callback);
    GLFWcharfun (*ptr_glfwSetCharCallback)(GLFWwindow * window, GLFWcharfun callback);
    GLFWcharmodsfun (*ptr_glfwSetCharModsCallback)(GLFWwindow * window, GLFWcharmodsfun callback);
    GLFWmousebuttonfun (*ptr_glfwSetMouseButtonCallback)(GLFWwindow * window, GLFWmousebuttonfun callback);
    GLFWcursorposfun (*ptr_glfwSetCursorPosCallback)(GLFWwindow * window, GLFWcursorposfun callback);
    GLFWcursorenterfun (*ptr_glfwSetCursorEnterCallback)(GLFWwindow * window, GLFWcursorenterfun callback);
    GLFWscrollfun (*ptr_glfwSetScrollCallback)(GLFWwindow * window, GLFWscrollfun callback);
    GLFWdropfun (*ptr_glfwSetDropCallback)(GLFWwindow * window, GLFWdropfun callback);
    int (*ptr_glfwJoystickPresent)(int jid);
    const float * (*ptr_glfwGetJoystickAxes)(int jid, int * count);
    const unsigned char * (*ptr_glfwGetJoystickButtons)(int jid, int * count);
    const unsigned char * (*ptr_glfwGetJoystickHats)(int jid, int * count);
    const char * (*ptr_glfwGetJoystickName)(int jid);
    const char * (*ptr_glfwGetJoystickGUID)(int jid);
    void (*ptr_glfwSetJoystickUserPointer)(int jid, void * pointer);
    void * (*ptr_glfwGetJoystickUserPointer)(int jid);
    int (*ptr_glfwJoystickIsGamepad)(int jid);
    GLFWjoystickfun (*ptr_glfwSetJoystickCallback)(GLFWjoystickfun callback);
    int (*ptr_glfwUpdateGamepadMappings)(const char * string);
    const char * (*ptr_glfwGetGamepadName)(int jid);
    int (*ptr_glfwGetGamepadState)(int jid, GLFWgamepadstate * state);
    void (*ptr_glfwSetClipboardString)(GLFWwindow * window, const char * string);
    const char * (*ptr_glfwGetClipboardString)(GLFWwindow * window);
    double (*ptr_glfwGetTime)(void);
    void (*ptr_glfwSetTime)(double time);
    uint64_t (*ptr_glfwGetTimerValue)(void);
    uint64_t (*ptr_glfwGetTimerFrequency)(void);
    void (*ptr_glfwMakeContextCurrent)(GLFWwindow * window);
    GLFWwindow * (*ptr_glfwGetCurrentContext)(void);
    void (*ptr_glfwSwapBuffers)(GLFWwindow * window);
    void (*ptr_glfwSwapInterval)(int interval);
    int (*ptr_glfwExtensionSupported)(const char * extension);
    GLFWglproc (*ptr_glfwGetProcAddress)(const char * procname);
    int (*ptr_glfwVulkanSupported)(void);
    const char * * (*ptr_glfwGetRequiredInstanceExtensions)(uint32_t * count);
} stub_funcs;

void *glfw;

void initialize_glfw(void) {
    char *candidates_glfw[] = { "libglfw.so", "glfw3.dll" };
    glfw = try_find_lib(candidates_glfw, 2);

    if (!glfw) {
        fprintf(stderr, "Unable to locate glfw, exiting!");
        exit(1);
    }

    stub_funcs.ptr_glfwInit = try_find_sym(glfw, "glfwInit");
    stub_funcs.ptr_glfwTerminate = try_find_sym(glfw, "glfwTerminate");
    stub_funcs.ptr_glfwInitHint = try_find_sym(glfw, "glfwInitHint");
    stub_funcs.ptr_glfwInitAllocator = try_find_sym(glfw, "glfwInitAllocator");
    stub_funcs.ptr_glfwGetVersion = try_find_sym(glfw, "glfwGetVersion");
    stub_funcs.ptr_glfwGetVersionString = try_find_sym(glfw, "glfwGetVersionString");
    stub_funcs.ptr_glfwGetError = try_find_sym(glfw, "glfwGetError");
    stub_funcs.ptr_glfwSetErrorCallback = try_find_sym(glfw, "glfwSetErrorCallback");
    stub_funcs.ptr_glfwGetPlatform = try_find_sym(glfw, "glfwGetPlatform");
    stub_funcs.ptr_glfwPlatformSupported = try_find_sym(glfw, "glfwPlatformSupported");
    stub_funcs.ptr_glfwGetMonitors = try_find_sym(glfw, "glfwGetMonitors");
    stub_funcs.ptr_glfwGetPrimaryMonitor = try_find_sym(glfw, "glfwGetPrimaryMonitor");
    stub_funcs.ptr_glfwGetMonitorPos = try_find_sym(glfw, "glfwGetMonitorPos");
    stub_funcs.ptr_glfwGetMonitorWorkarea = try_find_sym(glfw, "glfwGetMonitorWorkarea");
    stub_funcs.ptr_glfwGetMonitorPhysicalSize = try_find_sym(glfw, "glfwGetMonitorPhysicalSize");
    stub_funcs.ptr_glfwGetMonitorContentScale = try_find_sym(glfw, "glfwGetMonitorContentScale");
    stub_funcs.ptr_glfwGetMonitorName = try_find_sym(glfw, "glfwGetMonitorName");
    stub_funcs.ptr_glfwSetMonitorUserPointer = try_find_sym(glfw, "glfwSetMonitorUserPointer");
    stub_funcs.ptr_glfwGetMonitorUserPointer = try_find_sym(glfw, "glfwGetMonitorUserPointer");
    stub_funcs.ptr_glfwSetMonitorCallback = try_find_sym(glfw, "glfwSetMonitorCallback");
    stub_funcs.ptr_glfwGetVideoModes = try_find_sym(glfw, "glfwGetVideoModes");
    stub_funcs.ptr_glfwGetVideoMode = try_find_sym(glfw, "glfwGetVideoMode");
    stub_funcs.ptr_glfwSetGamma = try_find_sym(glfw, "glfwSetGamma");
    stub_funcs.ptr_glfwGetGammaRamp = try_find_sym(glfw, "glfwGetGammaRamp");
    stub_funcs.ptr_glfwSetGammaRamp = try_find_sym(glfw, "glfwSetGammaRamp");
    stub_funcs.ptr_glfwDefaultWindowHints = try_find_sym(glfw, "glfwDefaultWindowHints");
    stub_funcs.ptr_glfwWindowHint = try_find_sym(glfw, "glfwWindowHint");
    stub_funcs.ptr_glfwWindowHintString = try_find_sym(glfw, "glfwWindowHintString");
    stub_funcs.ptr_glfwCreateWindow = try_find_sym(glfw, "glfwCreateWindow");
    stub_funcs.ptr_glfwDestroyWindow = try_find_sym(glfw, "glfwDestroyWindow");
    stub_funcs.ptr_glfwWindowShouldClose = try_find_sym(glfw, "glfwWindowShouldClose");
    stub_funcs.ptr_glfwSetWindowShouldClose = try_find_sym(glfw, "glfwSetWindowShouldClose");
    stub_funcs.ptr_glfwGetWindowTitle = try_find_sym(glfw, "glfwGetWindowTitle");
    stub_funcs.ptr_glfwSetWindowTitle = try_find_sym(glfw, "glfwSetWindowTitle");
    stub_funcs.ptr_glfwSetWindowIcon = try_find_sym(glfw, "glfwSetWindowIcon");
    stub_funcs.ptr_glfwGetWindowPos = try_find_sym(glfw, "glfwGetWindowPos");
    stub_funcs.ptr_glfwSetWindowPos = try_find_sym(glfw, "glfwSetWindowPos");
    stub_funcs.ptr_glfwGetWindowSize = try_find_sym(glfw, "glfwGetWindowSize");
    stub_funcs.ptr_glfwSetWindowSizeLimits = try_find_sym(glfw, "glfwSetWindowSizeLimits");
    stub_funcs.ptr_glfwSetWindowAspectRatio = try_find_sym(glfw, "glfwSetWindowAspectRatio");
    stub_funcs.ptr_glfwSetWindowSize = try_find_sym(glfw, "glfwSetWindowSize");
    stub_funcs.ptr_glfwGetFramebufferSize = try_find_sym(glfw, "glfwGetFramebufferSize");
    stub_funcs.ptr_glfwGetWindowFrameSize = try_find_sym(glfw, "glfwGetWindowFrameSize");
    stub_funcs.ptr_glfwGetWindowContentScale = try_find_sym(glfw, "glfwGetWindowContentScale");
    stub_funcs.ptr_glfwGetWindowOpacity = try_find_sym(glfw, "glfwGetWindowOpacity");
    stub_funcs.ptr_glfwSetWindowOpacity = try_find_sym(glfw, "glfwSetWindowOpacity");
    stub_funcs.ptr_glfwIconifyWindow = try_find_sym(glfw, "glfwIconifyWindow");
    stub_funcs.ptr_glfwRestoreWindow = try_find_sym(glfw, "glfwRestoreWindow");
    stub_funcs.ptr_glfwMaximizeWindow = try_find_sym(glfw, "glfwMaximizeWindow");
    stub_funcs.ptr_glfwShowWindow = try_find_sym(glfw, "glfwShowWindow");
    stub_funcs.ptr_glfwHideWindow = try_find_sym(glfw, "glfwHideWindow");
    stub_funcs.ptr_glfwFocusWindow = try_find_sym(glfw, "glfwFocusWindow");
    stub_funcs.ptr_glfwRequestWindowAttention = try_find_sym(glfw, "glfwRequestWindowAttention");
    stub_funcs.ptr_glfwGetWindowMonitor = try_find_sym(glfw, "glfwGetWindowMonitor");
    stub_funcs.ptr_glfwSetWindowMonitor = try_find_sym(glfw, "glfwSetWindowMonitor");
    stub_funcs.ptr_glfwGetWindowAttrib = try_find_sym(glfw, "glfwGetWindowAttrib");
    stub_funcs.ptr_glfwSetWindowAttrib = try_find_sym(glfw, "glfwSetWindowAttrib");
    stub_funcs.ptr_glfwSetWindowUserPointer = try_find_sym(glfw, "glfwSetWindowUserPointer");
    stub_funcs.ptr_glfwGetWindowUserPointer = try_find_sym(glfw, "glfwGetWindowUserPointer");
    stub_funcs.ptr_glfwSetWindowPosCallback = try_find_sym(glfw, "glfwSetWindowPosCallback");
    stub_funcs.ptr_glfwSetWindowSizeCallback = try_find_sym(glfw, "glfwSetWindowSizeCallback");
    stub_funcs.ptr_glfwSetWindowCloseCallback = try_find_sym(glfw, "glfwSetWindowCloseCallback");
    stub_funcs.ptr_glfwSetWindowRefreshCallback = try_find_sym(glfw, "glfwSetWindowRefreshCallback");
    stub_funcs.ptr_glfwSetWindowFocusCallback = try_find_sym(glfw, "glfwSetWindowFocusCallback");
    stub_funcs.ptr_glfwSetWindowIconifyCallback = try_find_sym(glfw, "glfwSetWindowIconifyCallback");
    stub_funcs.ptr_glfwSetWindowMaximizeCallback = try_find_sym(glfw, "glfwSetWindowMaximizeCallback");
    stub_funcs.ptr_glfwSetFramebufferSizeCallback = try_find_sym(glfw, "glfwSetFramebufferSizeCallback");
    stub_funcs.ptr_glfwSetWindowContentScaleCallback = try_find_sym(glfw, "glfwSetWindowContentScaleCallback");
    stub_funcs.ptr_glfwPollEvents = try_find_sym(glfw, "glfwPollEvents");
    stub_funcs.ptr_glfwWaitEvents = try_find_sym(glfw, "glfwWaitEvents");
    stub_funcs.ptr_glfwWaitEventsTimeout = try_find_sym(glfw, "glfwWaitEventsTimeout");
    stub_funcs.ptr_glfwPostEmptyEvent = try_find_sym(glfw, "glfwPostEmptyEvent");
    stub_funcs.ptr_glfwGetInputMode = try_find_sym(glfw, "glfwGetInputMode");
    stub_funcs.ptr_glfwSetInputMode = try_find_sym(glfw, "glfwSetInputMode");
    stub_funcs.ptr_glfwRawMouseMotionSupported = try_find_sym(glfw, "glfwRawMouseMotionSupported");
    stub_funcs.ptr_glfwGetKeyName = try_find_sym(glfw, "glfwGetKeyName");
    stub_funcs.ptr_glfwGetKeyScancode = try_find_sym(glfw, "glfwGetKeyScancode");
    stub_funcs.ptr_glfwGetKey = try_find_sym(glfw, "glfwGetKey");
    stub_funcs.ptr_glfwGetMouseButton = try_find_sym(glfw, "glfwGetMouseButton");
    stub_funcs.ptr_glfwGetCursorPos = try_find_sym(glfw, "glfwGetCursorPos");
    stub_funcs.ptr_glfwSetCursorPos = try_find_sym(glfw, "glfwSetCursorPos");
    stub_funcs.ptr_glfwCreateCursor = try_find_sym(glfw, "glfwCreateCursor");
    stub_funcs.ptr_glfwCreateStandardCursor = try_find_sym(glfw, "glfwCreateStandardCursor");
    stub_funcs.ptr_glfwDestroyCursor = try_find_sym(glfw, "glfwDestroyCursor");
    stub_funcs.ptr_glfwSetCursor = try_find_sym(glfw, "glfwSetCursor");
    stub_funcs.ptr_glfwSetKeyCallback = try_find_sym(glfw, "glfwSetKeyCallback");
    stub_funcs.ptr_glfwSetCharCallback = try_find_sym(glfw, "glfwSetCharCallback");
    stub_funcs.ptr_glfwSetCharModsCallback = try_find_sym(glfw, "glfwSetCharModsCallback");
    stub_funcs.ptr_glfwSetMouseButtonCallback = try_find_sym(glfw, "glfwSetMouseButtonCallback");
    stub_funcs.ptr_glfwSetCursorPosCallback = try_find_sym(glfw, "glfwSetCursorPosCallback");
    stub_funcs.ptr_glfwSetCursorEnterCallback = try_find_sym(glfw, "glfwSetCursorEnterCallback");
    stub_funcs.ptr_glfwSetScrollCallback = try_find_sym(glfw, "glfwSetScrollCallback");
    stub_funcs.ptr_glfwSetDropCallback = try_find_sym(glfw, "glfwSetDropCallback");
    stub_funcs.ptr_glfwJoystickPresent = try_find_sym(glfw, "glfwJoystickPresent");
    stub_funcs.ptr_glfwGetJoystickAxes = try_find_sym(glfw, "glfwGetJoystickAxes");
    stub_funcs.ptr_glfwGetJoystickButtons = try_find_sym(glfw, "glfwGetJoystickButtons");
    stub_funcs.ptr_glfwGetJoystickHats = try_find_sym(glfw, "glfwGetJoystickHats");
    stub_funcs.ptr_glfwGetJoystickName = try_find_sym(glfw, "glfwGetJoystickName");
    stub_funcs.ptr_glfwGetJoystickGUID = try_find_sym(glfw, "glfwGetJoystickGUID");
    stub_funcs.ptr_glfwSetJoystickUserPointer = try_find_sym(glfw, "glfwSetJoystickUserPointer");
    stub_funcs.ptr_glfwGetJoystickUserPointer = try_find_sym(glfw, "glfwGetJoystickUserPointer");
    stub_funcs.ptr_glfwJoystickIsGamepad = try_find_sym(glfw, "glfwJoystickIsGamepad");
    stub_funcs.ptr_glfwSetJoystickCallback = try_find_sym(glfw, "glfwSetJoystickCallback");
    stub_funcs.ptr_glfwUpdateGamepadMappings = try_find_sym(glfw, "glfwUpdateGamepadMappings");
    stub_funcs.ptr_glfwGetGamepadName = try_find_sym(glfw, "glfwGetGamepadName");
    stub_funcs.ptr_glfwGetGamepadState = try_find_sym(glfw, "glfwGetGamepadState");
    stub_funcs.ptr_glfwSetClipboardString = try_find_sym(glfw, "glfwSetClipboardString");
    stub_funcs.ptr_glfwGetClipboardString = try_find_sym(glfw, "glfwGetClipboardString");
    stub_funcs.ptr_glfwGetTime = try_find_sym(glfw, "glfwGetTime");
    stub_funcs.ptr_glfwSetTime = try_find_sym(glfw, "glfwSetTime");
    stub_funcs.ptr_glfwGetTimerValue = try_find_sym(glfw, "glfwGetTimerValue");
    stub_funcs.ptr_glfwGetTimerFrequency = try_find_sym(glfw, "glfwGetTimerFrequency");
    stub_funcs.ptr_glfwMakeContextCurrent = try_find_sym(glfw, "glfwMakeContextCurrent");
    stub_funcs.ptr_glfwGetCurrentContext = try_find_sym(glfw, "glfwGetCurrentContext");
    stub_funcs.ptr_glfwSwapBuffers = try_find_sym(glfw, "glfwSwapBuffers");
    stub_funcs.ptr_glfwSwapInterval = try_find_sym(glfw, "glfwSwapInterval");
    stub_funcs.ptr_glfwExtensionSupported = try_find_sym(glfw, "glfwExtensionSupported");
    stub_funcs.ptr_glfwGetProcAddress = try_find_sym(glfw, "glfwGetProcAddress");
    stub_funcs.ptr_glfwVulkanSupported = try_find_sym(glfw, "glfwVulkanSupported");
    stub_funcs.ptr_glfwGetRequiredInstanceExtensions = try_find_sym(glfw, "glfwGetRequiredInstanceExtensions");
}

int (glfwInit)(void) { return stub_funcs.ptr_glfwInit(); }
void (glfwTerminate)(void) { stub_funcs.ptr_glfwTerminate(); }
void (glfwInitHint)(int hint, int value) { stub_funcs.ptr_glfwInitHint(hint, value); }
void (glfwInitAllocator)(const GLFWallocator * allocator) { stub_funcs.ptr_glfwInitAllocator(allocator); }
void (glfwGetVersion)(int * major, int * minor, int * rev) { stub_funcs.ptr_glfwGetVersion(major, minor, rev); }
const char * (glfwGetVersionString)(void) { return stub_funcs.ptr_glfwGetVersionString(); }
int (glfwGetError)(const char * * description) { return stub_funcs.ptr_glfwGetError(description); }
GLFWerrorfun (glfwSetErrorCallback)(GLFWerrorfun callback) { return stub_funcs.ptr_glfwSetErrorCallback(callback); }
int (glfwGetPlatform)(void) { return stub_funcs.ptr_glfwGetPlatform(); }
int (glfwPlatformSupported)(int platform) { return stub_funcs.ptr_glfwPlatformSupported(platform); }
GLFWmonitor * * (glfwGetMonitors)(int * count) { return stub_funcs.ptr_glfwGetMonitors(count); }
GLFWmonitor * (glfwGetPrimaryMonitor)(void) { return stub_funcs.ptr_glfwGetPrimaryMonitor(); }
void (glfwGetMonitorPos)(GLFWmonitor * monitor, int * xpos, int * ypos) { stub_funcs.ptr_glfwGetMonitorPos(monitor, xpos, ypos); }
void (glfwGetMonitorWorkarea)(GLFWmonitor * monitor, int * xpos, int * ypos, int * width, int * height) { stub_funcs.ptr_glfwGetMonitorWorkarea(monitor, xpos, ypos, width, height); }
void (glfwGetMonitorPhysicalSize)(GLFWmonitor * monitor, int * widthMM, int * heightMM) { stub_funcs.ptr_glfwGetMonitorPhysicalSize(monitor, widthMM, heightMM); }
void (glfwGetMonitorContentScale)(GLFWmonitor * monitor, float * xscale, float * yscale) { stub_funcs.ptr_glfwGetMonitorContentScale(monitor, xscale, yscale); }
const char * (glfwGetMonitorName)(GLFWmonitor * monitor) { return stub_funcs.ptr_glfwGetMonitorName(monitor); }
void (glfwSetMonitorUserPointer)(GLFWmonitor * monitor, void * pointer) { stub_funcs.ptr_glfwSetMonitorUserPointer(monitor, pointer); }
void * (glfwGetMonitorUserPointer)(GLFWmonitor * monitor) { return stub_funcs.ptr_glfwGetMonitorUserPointer(monitor); }
GLFWmonitorfun (glfwSetMonitorCallback)(GLFWmonitorfun callback) { return stub_funcs.ptr_glfwSetMonitorCallback(callback); }
const GLFWvidmode * (glfwGetVideoModes)(GLFWmonitor * monitor, int * count) { return stub_funcs.ptr_glfwGetVideoModes(monitor, count); }
const GLFWvidmode * (glfwGetVideoMode)(GLFWmonitor * monitor) { return stub_funcs.ptr_glfwGetVideoMode(monitor); }
void (glfwSetGamma)(GLFWmonitor * monitor, float gamma) { stub_funcs.ptr_glfwSetGamma(monitor, gamma); }
const GLFWgammaramp * (glfwGetGammaRamp)(GLFWmonitor * monitor) { return stub_funcs.ptr_glfwGetGammaRamp(monitor); }
void (glfwSetGammaRamp)(GLFWmonitor * monitor, const GLFWgammaramp * ramp) { stub_funcs.ptr_glfwSetGammaRamp(monitor, ramp); }
void (glfwDefaultWindowHints)(void) { stub_funcs.ptr_glfwDefaultWindowHints(); }
void (glfwWindowHint)(int hint, int value) { stub_funcs.ptr_glfwWindowHint(hint, value); }
void (glfwWindowHintString)(int hint, const char * value) { stub_funcs.ptr_glfwWindowHintString(hint, value); }
GLFWwindow * (glfwCreateWindow)(int width, int height, const char * title, GLFWmonitor * monitor, GLFWwindow * share) { return stub_funcs.ptr_glfwCreateWindow(width, height, title, monitor, share); }
void (glfwDestroyWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwDestroyWindow(window); }
int (glfwWindowShouldClose)(GLFWwindow * window) { return stub_funcs.ptr_glfwWindowShouldClose(window); }
void (glfwSetWindowShouldClose)(GLFWwindow * window, int value) { stub_funcs.ptr_glfwSetWindowShouldClose(window, value); }
const char * (glfwGetWindowTitle)(GLFWwindow * window) { return stub_funcs.ptr_glfwGetWindowTitle(window); }
void (glfwSetWindowTitle)(GLFWwindow * window, const char * title) { stub_funcs.ptr_glfwSetWindowTitle(window, title); }
void (glfwSetWindowIcon)(GLFWwindow * window, int count, const GLFWimage * images) { stub_funcs.ptr_glfwSetWindowIcon(window, count, images); }
void (glfwGetWindowPos)(GLFWwindow * window, int * xpos, int * ypos) { stub_funcs.ptr_glfwGetWindowPos(window, xpos, ypos); }
void (glfwSetWindowPos)(GLFWwindow * window, int xpos, int ypos) { stub_funcs.ptr_glfwSetWindowPos(window, xpos, ypos); }
void (glfwGetWindowSize)(GLFWwindow * window, int * width, int * height) { stub_funcs.ptr_glfwGetWindowSize(window, width, height); }
void (glfwSetWindowSizeLimits)(GLFWwindow * window, int minwidth, int minheight, int maxwidth, int maxheight) { stub_funcs.ptr_glfwSetWindowSizeLimits(window, minwidth, minheight, maxwidth, maxheight); }
void (glfwSetWindowAspectRatio)(GLFWwindow * window, int numer, int denom) { stub_funcs.ptr_glfwSetWindowAspectRatio(window, numer, denom); }
void (glfwSetWindowSize)(GLFWwindow * window, int width, int height) { stub_funcs.ptr_glfwSetWindowSize(window, width, height); }
void (glfwGetFramebufferSize)(GLFWwindow * window, int * width, int * height) { stub_funcs.ptr_glfwGetFramebufferSize(window, width, height); }
void (glfwGetWindowFrameSize)(GLFWwindow * window, int * left, int * top, int * right, int * bottom) { stub_funcs.ptr_glfwGetWindowFrameSize(window, left, top, right, bottom); }
void (glfwGetWindowContentScale)(GLFWwindow * window, float * xscale, float * yscale) { stub_funcs.ptr_glfwGetWindowContentScale(window, xscale, yscale); }
float (glfwGetWindowOpacity)(GLFWwindow * window) { return stub_funcs.ptr_glfwGetWindowOpacity(window); }
void (glfwSetWindowOpacity)(GLFWwindow * window, float opacity) { stub_funcs.ptr_glfwSetWindowOpacity(window, opacity); }
void (glfwIconifyWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwIconifyWindow(window); }
void (glfwRestoreWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwRestoreWindow(window); }
void (glfwMaximizeWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwMaximizeWindow(window); }
void (glfwShowWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwShowWindow(window); }
void (glfwHideWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwHideWindow(window); }
void (glfwFocusWindow)(GLFWwindow * window) { stub_funcs.ptr_glfwFocusWindow(window); }
void (glfwRequestWindowAttention)(GLFWwindow * window) { stub_funcs.ptr_glfwRequestWindowAttention(window); }
GLFWmonitor * (glfwGetWindowMonitor)(GLFWwindow * window) { return stub_funcs.ptr_glfwGetWindowMonitor(window); }
void (glfwSetWindowMonitor)(GLFWwindow * window, GLFWmonitor * monitor, int xpos, int ypos, int width, int height, int refreshRate) { stub_funcs.ptr_glfwSetWindowMonitor(window, monitor, xpos, ypos, width, height, refreshRate); }
int (glfwGetWindowAttrib)(GLFWwindow * window, int attrib) { return stub_funcs.ptr_glfwGetWindowAttrib(window, attrib); }
void (glfwSetWindowAttrib)(GLFWwindow * window, int attrib, int value) { stub_funcs.ptr_glfwSetWindowAttrib(window, attrib, value); }
void (glfwSetWindowUserPointer)(GLFWwindow * window, void * pointer) { stub_funcs.ptr_glfwSetWindowUserPointer(window, pointer); }
void * (glfwGetWindowUserPointer)(GLFWwindow * window) { return stub_funcs.ptr_glfwGetWindowUserPointer(window); }
GLFWwindowposfun (glfwSetWindowPosCallback)(GLFWwindow * window, GLFWwindowposfun callback) { return stub_funcs.ptr_glfwSetWindowPosCallback(window, callback); }
GLFWwindowsizefun (glfwSetWindowSizeCallback)(GLFWwindow * window, GLFWwindowsizefun callback) { return stub_funcs.ptr_glfwSetWindowSizeCallback(window, callback); }
GLFWwindowclosefun (glfwSetWindowCloseCallback)(GLFWwindow * window, GLFWwindowclosefun callback) { return stub_funcs.ptr_glfwSetWindowCloseCallback(window, callback); }
GLFWwindowrefreshfun (glfwSetWindowRefreshCallback)(GLFWwindow * window, GLFWwindowrefreshfun callback) { return stub_funcs.ptr_glfwSetWindowRefreshCallback(window, callback); }
GLFWwindowfocusfun (glfwSetWindowFocusCallback)(GLFWwindow * window, GLFWwindowfocusfun callback) { return stub_funcs.ptr_glfwSetWindowFocusCallback(window, callback); }
GLFWwindowiconifyfun (glfwSetWindowIconifyCallback)(GLFWwindow * window, GLFWwindowiconifyfun callback) { return stub_funcs.ptr_glfwSetWindowIconifyCallback(window, callback); }
GLFWwindowmaximizefun (glfwSetWindowMaximizeCallback)(GLFWwindow * window, GLFWwindowmaximizefun callback) { return stub_funcs.ptr_glfwSetWindowMaximizeCallback(window, callback); }
GLFWframebuffersizefun (glfwSetFramebufferSizeCallback)(GLFWwindow * window, GLFWframebuffersizefun callback) { return stub_funcs.ptr_glfwSetFramebufferSizeCallback(window, callback); }
GLFWwindowcontentscalefun (glfwSetWindowContentScaleCallback)(GLFWwindow * window, GLFWwindowcontentscalefun callback) { return stub_funcs.ptr_glfwSetWindowContentScaleCallback(window, callback); }
void (glfwPollEvents)(void) { stub_funcs.ptr_glfwPollEvents(); }
void (glfwWaitEvents)(void) { stub_funcs.ptr_glfwWaitEvents(); }
void (glfwWaitEventsTimeout)(double timeout) { stub_funcs.ptr_glfwWaitEventsTimeout(timeout); }
void (glfwPostEmptyEvent)(void) { stub_funcs.ptr_glfwPostEmptyEvent(); }
int (glfwGetInputMode)(GLFWwindow * window, int mode) { return stub_funcs.ptr_glfwGetInputMode(window, mode); }
void (glfwSetInputMode)(GLFWwindow * window, int mode, int value) { stub_funcs.ptr_glfwSetInputMode(window, mode, value); }
int (glfwRawMouseMotionSupported)(void) { return stub_funcs.ptr_glfwRawMouseMotionSupported(); }
const char * (glfwGetKeyName)(int key, int scancode) { return stub_funcs.ptr_glfwGetKeyName(key, scancode); }
int (glfwGetKeyScancode)(int key) { return stub_funcs.ptr_glfwGetKeyScancode(key); }
int (glfwGetKey)(GLFWwindow * window, int key) { return stub_funcs.ptr_glfwGetKey(window, key); }
int (glfwGetMouseButton)(GLFWwindow * window, int button) { return stub_funcs.ptr_glfwGetMouseButton(window, button); }
void (glfwGetCursorPos)(GLFWwindow * window, double * xpos, double * ypos) { stub_funcs.ptr_glfwGetCursorPos(window, xpos, ypos); }
void (glfwSetCursorPos)(GLFWwindow * window, double xpos, double ypos) { stub_funcs.ptr_glfwSetCursorPos(window, xpos, ypos); }
GLFWcursor * (glfwCreateCursor)(const GLFWimage * image, int xhot, int yhot) { return stub_funcs.ptr_glfwCreateCursor(image, xhot, yhot); }
GLFWcursor * (glfwCreateStandardCursor)(int shape) { return stub_funcs.ptr_glfwCreateStandardCursor(shape); }
void (glfwDestroyCursor)(GLFWcursor * cursor) { stub_funcs.ptr_glfwDestroyCursor(cursor); }
void (glfwSetCursor)(GLFWwindow * window, GLFWcursor * cursor) { stub_funcs.ptr_glfwSetCursor(window, cursor); }
GLFWkeyfun (glfwSetKeyCallback)(GLFWwindow * window, GLFWkeyfun callback) { return stub_funcs.ptr_glfwSetKeyCallback(window, callback); }
GLFWcharfun (glfwSetCharCallback)(GLFWwindow * window, GLFWcharfun callback) { return stub_funcs.ptr_glfwSetCharCallback(window, callback); }
GLFWcharmodsfun (glfwSetCharModsCallback)(GLFWwindow * window, GLFWcharmodsfun callback) { return stub_funcs.ptr_glfwSetCharModsCallback(window, callback); }
GLFWmousebuttonfun (glfwSetMouseButtonCallback)(GLFWwindow * window, GLFWmousebuttonfun callback) { return stub_funcs.ptr_glfwSetMouseButtonCallback(window, callback); }
GLFWcursorposfun (glfwSetCursorPosCallback)(GLFWwindow * window, GLFWcursorposfun callback) { return stub_funcs.ptr_glfwSetCursorPosCallback(window, callback); }
GLFWcursorenterfun (glfwSetCursorEnterCallback)(GLFWwindow * window, GLFWcursorenterfun callback) { return stub_funcs.ptr_glfwSetCursorEnterCallback(window, callback); }
GLFWscrollfun (glfwSetScrollCallback)(GLFWwindow * window, GLFWscrollfun callback) { return stub_funcs.ptr_glfwSetScrollCallback(window, callback); }
GLFWdropfun (glfwSetDropCallback)(GLFWwindow * window, GLFWdropfun callback) { return stub_funcs.ptr_glfwSetDropCallback(window, callback); }
int (glfwJoystickPresent)(int jid) { return stub_funcs.ptr_glfwJoystickPresent(jid); }
const float * (glfwGetJoystickAxes)(int jid, int * count) { return stub_funcs.ptr_glfwGetJoystickAxes(jid, count); }
const unsigned char * (glfwGetJoystickButtons)(int jid, int * count) { return stub_funcs.ptr_glfwGetJoystickButtons(jid, count); }
const unsigned char * (glfwGetJoystickHats)(int jid, int * count) { return stub_funcs.ptr_glfwGetJoystickHats(jid, count); }
const char * (glfwGetJoystickName)(int jid) { return stub_funcs.ptr_glfwGetJoystickName(jid); }
const char * (glfwGetJoystickGUID)(int jid) { return stub_funcs.ptr_glfwGetJoystickGUID(jid); }
void (glfwSetJoystickUserPointer)(int jid, void * pointer) { stub_funcs.ptr_glfwSetJoystickUserPointer(jid, pointer); }
void * (glfwGetJoystickUserPointer)(int jid) { return stub_funcs.ptr_glfwGetJoystickUserPointer(jid); }
int (glfwJoystickIsGamepad)(int jid) { return stub_funcs.ptr_glfwJoystickIsGamepad(jid); }
GLFWjoystickfun (glfwSetJoystickCallback)(GLFWjoystickfun callback) { return stub_funcs.ptr_glfwSetJoystickCallback(callback); }
int (glfwUpdateGamepadMappings)(const char * string) { return stub_funcs.ptr_glfwUpdateGamepadMappings(string); }
const char * (glfwGetGamepadName)(int jid) { return stub_funcs.ptr_glfwGetGamepadName(jid); }
int (glfwGetGamepadState)(int jid, GLFWgamepadstate * state) { return stub_funcs.ptr_glfwGetGamepadState(jid, state); }
void (glfwSetClipboardString)(GLFWwindow * window, const char * string) { stub_funcs.ptr_glfwSetClipboardString(window, string); }
const char * (glfwGetClipboardString)(GLFWwindow * window) { return stub_funcs.ptr_glfwGetClipboardString(window); }
double (glfwGetTime)(void) { return stub_funcs.ptr_glfwGetTime(); }
void (glfwSetTime)(double time) { stub_funcs.ptr_glfwSetTime(time); }
uint64_t (glfwGetTimerValue)(void) { return stub_funcs.ptr_glfwGetTimerValue(); }
uint64_t (glfwGetTimerFrequency)(void) { return stub_funcs.ptr_glfwGetTimerFrequency(); }
void (glfwMakeContextCurrent)(GLFWwindow * window) { stub_funcs.ptr_glfwMakeContextCurrent(window); }
GLFWwindow * (glfwGetCurrentContext)(void) { return stub_funcs.ptr_glfwGetCurrentContext(); }
void (glfwSwapBuffers)(GLFWwindow * window) { stub_funcs.ptr_glfwSwapBuffers(window); }
void (glfwSwapInterval)(int interval) { stub_funcs.ptr_glfwSwapInterval(interval); }
int (glfwExtensionSupported)(const char * extension) { return stub_funcs.ptr_glfwExtensionSupported(extension); }
GLFWglproc (glfwGetProcAddress)(const char * procname) { return stub_funcs.ptr_glfwGetProcAddress(procname); }
int (glfwVulkanSupported)(void) { return stub_funcs.ptr_glfwVulkanSupported(); }
const char * * (glfwGetRequiredInstanceExtensions)(uint32_t * count) { return stub_funcs.ptr_glfwGetRequiredInstanceExtensions(count); }

void close_glfw(void) {
    cosmo_dlclose(glfw);
}