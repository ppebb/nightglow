#include "sdl2_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct sdl2Funcs {
    const char * (*ptr_SDL_GetPlatform)(void);
    void * (*ptr_SDL_malloc)(size_t size);
    void * (*ptr_SDL_calloc)(size_t nmemb, size_t size);
    void * (*ptr_SDL_realloc)(void * mem, size_t size);
    void (*ptr_SDL_free)(void * mem);
    void (*ptr_SDL_GetOriginalMemoryFunctions)(SDL_malloc_func * malloc_func, SDL_calloc_func * calloc_func, SDL_realloc_func * realloc_func, SDL_free_func * free_func);
    void (*ptr_SDL_GetMemoryFunctions)(SDL_malloc_func * malloc_func, SDL_calloc_func * calloc_func, SDL_realloc_func * realloc_func, SDL_free_func * free_func);
    int (*ptr_SDL_SetMemoryFunctions)(SDL_malloc_func malloc_func, SDL_calloc_func calloc_func, SDL_realloc_func realloc_func, SDL_free_func free_func);
    int (*ptr_SDL_GetNumAllocations)(void);
    char * (*ptr_SDL_getenv)(const char * name);
    int (*ptr_SDL_setenv)(const char * name, const char * value, int overwrite);
    void (*ptr_SDL_qsort)(void * base, size_t nmemb, size_t size, int (*compare)(const void * , const void * ));
    void * (*ptr_SDL_bsearch)(const void * key, const void * base, size_t nmemb, size_t size, int (*compare)(const void * , const void * ));
    int (*ptr_SDL_abs)(int x);
    int (*ptr_SDL_isalpha)(int x);
    int (*ptr_SDL_isalnum)(int x);
    int (*ptr_SDL_isblank)(int x);
    int (*ptr_SDL_iscntrl)(int x);
    int (*ptr_SDL_isdigit)(int x);
    int (*ptr_SDL_isxdigit)(int x);
    int (*ptr_SDL_ispunct)(int x);
    int (*ptr_SDL_isspace)(int x);
    int (*ptr_SDL_isupper)(int x);
    int (*ptr_SDL_islower)(int x);
    int (*ptr_SDL_isprint)(int x);
    int (*ptr_SDL_isgraph)(int x);
    int (*ptr_SDL_toupper)(int x);
    int (*ptr_SDL_tolower)(int x);
    Uint16 (*ptr_SDL_crc16)(Uint16 crc, const void * data, size_t len);
    Uint32 (*ptr_SDL_crc32)(Uint32 crc, const void * data, size_t len);
    void * (*ptr_SDL_memset)(void * dst, int c, size_t len);
    void * (*ptr_SDL_memcpy)(void * dst, const void * src, size_t len);
    void * (*ptr_SDL_memmove)(void * dst, const void * src, size_t len);
    int (*ptr_SDL_memcmp)(const void * s1, const void * s2, size_t len);
    size_t (*ptr_SDL_wcslen)(const wchar_t * wstr);
    size_t (*ptr_SDL_wcslcpy)(wchar_t * dst, const wchar_t * src, size_t maxlen);
    size_t (*ptr_SDL_wcslcat)(wchar_t * dst, const wchar_t * src, size_t maxlen);
    wchar_t * (*ptr_SDL_wcsdup)(const wchar_t * wstr);
    wchar_t * (*ptr_SDL_wcsstr)(const wchar_t * haystack, const wchar_t * needle);
    int (*ptr_SDL_wcscmp)(const wchar_t * str1, const wchar_t * str2);
    int (*ptr_SDL_wcsncmp)(const wchar_t * str1, const wchar_t * str2, size_t maxlen);
    int (*ptr_SDL_wcscasecmp)(const wchar_t * str1, const wchar_t * str2);
    int (*ptr_SDL_wcsncasecmp)(const wchar_t * str1, const wchar_t * str2, size_t len);
    size_t (*ptr_SDL_strlen)(const char * str);
    size_t (*ptr_SDL_strlcpy)(char * dst, const char * src, size_t maxlen);
    size_t (*ptr_SDL_utf8strlcpy)(char * dst, const char * src, size_t dst_bytes);
    size_t (*ptr_SDL_strlcat)(char * dst, const char * src, size_t maxlen);
    char * (*ptr_SDL_strdup)(const char * str);
    char * (*ptr_SDL_strrev)(char * str);
    char * (*ptr_SDL_strupr)(char * str);
    char * (*ptr_SDL_strlwr)(char * str);
    char * (*ptr_SDL_strchr)(const char * str, int c);
    char * (*ptr_SDL_strrchr)(const char * str, int c);
    char * (*ptr_SDL_strstr)(const char * haystack, const char * needle);
    char * (*ptr_SDL_strcasestr)(const char * haystack, const char * needle);
    char * (*ptr_SDL_strtokr)(char * s1, const char * s2, char * * saveptr);
    size_t (*ptr_SDL_utf8strlen)(const char * str);
    size_t (*ptr_SDL_utf8strnlen)(const char * str, size_t bytes);
    char * (*ptr_SDL_itoa)(int value, char * str, int radix);
    char * (*ptr_SDL_uitoa)(unsigned int value, char * str, int radix);
    char * (*ptr_SDL_ltoa)(long value, char * str, int radix);
    char * (*ptr_SDL_ultoa)(unsigned long value, char * str, int radix);
    char * (*ptr_SDL_lltoa)(Sint64 value, char * str, int radix);
    char * (*ptr_SDL_ulltoa)(Uint64 value, char * str, int radix);
    int (*ptr_SDL_atoi)(const char * str);
    double (*ptr_SDL_atof)(const char * str);
    long (*ptr_SDL_strtol)(const char * str, char * * endp, int base);
    unsigned long (*ptr_SDL_strtoul)(const char * str, char * * endp, int base);
    Sint64 (*ptr_SDL_strtoll)(const char * str, char * * endp, int base);
    Uint64 (*ptr_SDL_strtoull)(const char * str, char * * endp, int base);
    double (*ptr_SDL_strtod)(const char * str, char * * endp);
    int (*ptr_SDL_strcmp)(const char * str1, const char * str2);
    int (*ptr_SDL_strncmp)(const char * str1, const char * str2, size_t maxlen);
    int (*ptr_SDL_strcasecmp)(const char * str1, const char * str2);
    int (*ptr_SDL_strncasecmp)(const char * str1, const char * str2, size_t len);
    int (*ptr_SDL_sscanf)(const char * text, const char * fmt, ...);
    int (*ptr_SDL_vsscanf)(const char * text, const char * fmt, va_list ap);
    int (*ptr_SDL_snprintf)(char * text, size_t maxlen, const char * fmt, ...);
    int (*ptr_SDL_vsnprintf)(char * text, size_t maxlen, const char * fmt, va_list ap);
    int (*ptr_SDL_asprintf)(char * * strp, const char * fmt, ...);
    int (*ptr_SDL_vasprintf)(char * * strp, const char * fmt, va_list ap);
    double (*ptr_SDL_acos)(double x);
    float (*ptr_SDL_acosf)(float x);
    double (*ptr_SDL_asin)(double x);
    float (*ptr_SDL_asinf)(float x);
    double (*ptr_SDL_atan)(double x);
    float (*ptr_SDL_atanf)(float x);
    double (*ptr_SDL_atan2)(double y, double x);
    float (*ptr_SDL_atan2f)(float y, float x);
    double (*ptr_SDL_ceil)(double x);
    float (*ptr_SDL_ceilf)(float x);
    double (*ptr_SDL_copysign)(double x, double y);
    float (*ptr_SDL_copysignf)(float x, float y);
    double (*ptr_SDL_cos)(double x);
    float (*ptr_SDL_cosf)(float x);
    double (*ptr_SDL_exp)(double x);
    float (*ptr_SDL_expf)(float x);
    double (*ptr_SDL_fabs)(double x);
    float (*ptr_SDL_fabsf)(float x);
    double (*ptr_SDL_floor)(double x);
    float (*ptr_SDL_floorf)(float x);
    double (*ptr_SDL_trunc)(double x);
    float (*ptr_SDL_truncf)(float x);
    double (*ptr_SDL_fmod)(double x, double y);
    float (*ptr_SDL_fmodf)(float x, float y);
    double (*ptr_SDL_log)(double x);
    float (*ptr_SDL_logf)(float x);
    double (*ptr_SDL_log10)(double x);
    float (*ptr_SDL_log10f)(float x);
    double (*ptr_SDL_pow)(double x, double y);
    float (*ptr_SDL_powf)(float x, float y);
    double (*ptr_SDL_round)(double x);
    float (*ptr_SDL_roundf)(float x);
    long (*ptr_SDL_lround)(double x);
    long (*ptr_SDL_lroundf)(float x);
    double (*ptr_SDL_scalbn)(double x, int n);
    float (*ptr_SDL_scalbnf)(float x, int n);
    double (*ptr_SDL_sin)(double x);
    float (*ptr_SDL_sinf)(float x);
    double (*ptr_SDL_sqrt)(double x);
    float (*ptr_SDL_sqrtf)(float x);
    double (*ptr_SDL_tan)(double x);
    float (*ptr_SDL_tanf)(float x);
    SDL_iconv_t (*ptr_SDL_iconv_open)(const char * tocode, const char * fromcode);
    int (*ptr_SDL_iconv_close)(SDL_iconv_t cd);
    size_t (*ptr_SDL_iconv)(SDL_iconv_t cd, const char * * inbuf, size_t * inbytesleft, char * * outbuf, size_t * outbytesleft);
    char * (*ptr_SDL_iconv_string)(const char * tocode, const char * fromcode, const char * inbuf, size_t inbytesleft);
    int (*ptr_SDL_main)(int argc, char * argv[]);
    void (*ptr_SDL_SetMainReady)(void);
    SDL_AssertState (*ptr_SDL_ReportAssertion)(SDL_AssertData * _1, const char * _2, const char * _3, int _4);
    void (*ptr_SDL_SetAssertionHandler)(SDL_AssertionHandler handler, void * userdata);
    SDL_AssertionHandler (*ptr_SDL_GetDefaultAssertionHandler)(void);
    SDL_AssertionHandler (*ptr_SDL_GetAssertionHandler)(void * * puserdata);
    const SDL_AssertData * (*ptr_SDL_GetAssertionReport)(void);
    void (*ptr_SDL_ResetAssertionReport)(void);
    SDL_bool (*ptr_SDL_AtomicTryLock)(SDL_SpinLock * lock);
    void (*ptr_SDL_AtomicLock)(SDL_SpinLock * lock);
    void (*ptr_SDL_AtomicUnlock)(SDL_SpinLock * lock);
    void (*ptr_SDL_MemoryBarrierReleaseFunction)(void);
    void (*ptr_SDL_MemoryBarrierAcquireFunction)(void);
    SDL_bool (*ptr_SDL_AtomicCAS)(SDL_atomic_t * a, int oldval, int newval);
    int (*ptr_SDL_AtomicSet)(SDL_atomic_t * a, int v);
    int (*ptr_SDL_AtomicGet)(SDL_atomic_t * a);
    int (*ptr_SDL_AtomicAdd)(SDL_atomic_t * a, int v);
    SDL_bool (*ptr_SDL_AtomicCASPtr)(void * * a, void * oldval, void * newval);
    void * (*ptr_SDL_AtomicSetPtr)(void * * a, void * v);
    void * (*ptr_SDL_AtomicGetPtr)(void * * a);
    const char * (*ptr_SDL_GetError)(void);
    char * (*ptr_SDL_GetErrorMsg)(char * errstr, int maxlen);
    void (*ptr_SDL_ClearError)(void);
    int (*ptr_SDL_Error)(SDL_errorcode code);
    SDL_mutex * (*ptr_SDL_CreateMutex)(void);
    int (*ptr_SDL_LockMutex)(SDL_mutex * mutex);
    int (*ptr_SDL_TryLockMutex)(SDL_mutex * mutex);
    int (*ptr_SDL_UnlockMutex)(SDL_mutex * mutex);
    void (*ptr_SDL_DestroyMutex)(SDL_mutex * mutex);
    SDL_sem * (*ptr_SDL_CreateSemaphore)(Uint32 initial_value);
    void (*ptr_SDL_DestroySemaphore)(SDL_sem * sem);
    int (*ptr_SDL_SemWait)(SDL_sem * sem);
    int (*ptr_SDL_SemTryWait)(SDL_sem * sem);
    int (*ptr_SDL_SemWaitTimeout)(SDL_sem * sem, Uint32 timeout);
    int (*ptr_SDL_SemPost)(SDL_sem * sem);
    Uint32 (*ptr_SDL_SemValue)(SDL_sem * sem);
    SDL_cond * (*ptr_SDL_CreateCond)(void);
    void (*ptr_SDL_DestroyCond)(SDL_cond * cond);
    int (*ptr_SDL_CondSignal)(SDL_cond * cond);
    int (*ptr_SDL_CondBroadcast)(SDL_cond * cond);
    int (*ptr_SDL_CondWait)(SDL_cond * cond, SDL_mutex * mutex);
    int (*ptr_SDL_CondWaitTimeout)(SDL_cond * cond, SDL_mutex * mutex, Uint32 ms);
    SDL_Thread * (*ptr_SDL_CreateThread)(SDL_ThreadFunction fn, const char * name, void * data);
    SDL_Thread * (*ptr_SDL_CreateThreadWithStackSize)(SDL_ThreadFunction fn, const char * name, const size_t stacksize, void * data);
    const char * (*ptr_SDL_GetThreadName)(SDL_Thread * thread);
    SDL_threadID (*ptr_SDL_ThreadID)(void);
    SDL_threadID (*ptr_SDL_GetThreadID)(SDL_Thread * thread);
    int (*ptr_SDL_SetThreadPriority)(SDL_ThreadPriority priority);
    void (*ptr_SDL_WaitThread)(SDL_Thread * thread, int * status);
    void (*ptr_SDL_DetachThread)(SDL_Thread * thread);
    SDL_TLSID (*ptr_SDL_TLSCreate)(void);
    void * (*ptr_SDL_TLSGet)(SDL_TLSID id);
    int (*ptr_SDL_TLSSet)(SDL_TLSID id, const void * value, void (*destructor)(void * ));
    void (*ptr_SDL_TLSCleanup)(void);
    SDL_RWops * (*ptr_SDL_RWFromFile)(const char * file, const char * mode);
    SDL_RWops * (*ptr_SDL_RWFromFP)(FILE * fp, SDL_bool autoclose);
    SDL_RWops * (*ptr_SDL_RWFromMem)(void * mem, int size);
    SDL_RWops * (*ptr_SDL_RWFromConstMem)(const void * mem, int size);
    SDL_RWops * (*ptr_SDL_AllocRW)(void);
    void (*ptr_SDL_FreeRW)(SDL_RWops * area);
    Sint64 (*ptr_SDL_RWsize)(SDL_RWops * context);
    Sint64 (*ptr_SDL_RWseek)(SDL_RWops * context, Sint64 offset, int whence);
    Sint64 (*ptr_SDL_RWtell)(SDL_RWops * context);
    size_t (*ptr_SDL_RWread)(SDL_RWops * context, void * ptr, size_t size, size_t maxnum);
    size_t (*ptr_SDL_RWwrite)(SDL_RWops * context, const void * ptr, size_t size, size_t num);
    int (*ptr_SDL_RWclose)(SDL_RWops * context);
    void * (*ptr_SDL_LoadFile_RW)(SDL_RWops * src, size_t * datasize, int freesrc);
    void * (*ptr_SDL_LoadFile)(const char * file, size_t * datasize);
    Uint8 (*ptr_SDL_ReadU8)(SDL_RWops * src);
    Uint16 (*ptr_SDL_ReadLE16)(SDL_RWops * src);
    Uint16 (*ptr_SDL_ReadBE16)(SDL_RWops * src);
    Uint32 (*ptr_SDL_ReadLE32)(SDL_RWops * src);
    Uint32 (*ptr_SDL_ReadBE32)(SDL_RWops * src);
    Uint64 (*ptr_SDL_ReadLE64)(SDL_RWops * src);
    Uint64 (*ptr_SDL_ReadBE64)(SDL_RWops * src);
    size_t (*ptr_SDL_WriteU8)(SDL_RWops * dst, Uint8 value);
    size_t (*ptr_SDL_WriteLE16)(SDL_RWops * dst, Uint16 value);
    size_t (*ptr_SDL_WriteBE16)(SDL_RWops * dst, Uint16 value);
    size_t (*ptr_SDL_WriteLE32)(SDL_RWops * dst, Uint32 value);
    size_t (*ptr_SDL_WriteBE32)(SDL_RWops * dst, Uint32 value);
    size_t (*ptr_SDL_WriteLE64)(SDL_RWops * dst, Uint64 value);
    size_t (*ptr_SDL_WriteBE64)(SDL_RWops * dst, Uint64 value);
    int (*ptr_SDL_GetNumAudioDrivers)(void);
    const char * (*ptr_SDL_GetAudioDriver)(int index);
    int (*ptr_SDL_AudioInit)(const char * driver_name);
    void (*ptr_SDL_AudioQuit)(void);
    const char * (*ptr_SDL_GetCurrentAudioDriver)(void);
    int (*ptr_SDL_OpenAudio)(SDL_AudioSpec * desired, SDL_AudioSpec * obtained);
    int (*ptr_SDL_GetNumAudioDevices)(int iscapture);
    const char * (*ptr_SDL_GetAudioDeviceName)(int index, int iscapture);
    int (*ptr_SDL_GetAudioDeviceSpec)(int index, int iscapture, SDL_AudioSpec * spec);
    int (*ptr_SDL_GetDefaultAudioInfo)(char * * name, SDL_AudioSpec * spec, int iscapture);
    SDL_AudioDeviceID (*ptr_SDL_OpenAudioDevice)(const char * device, int iscapture, const SDL_AudioSpec * desired, SDL_AudioSpec * obtained, int allowed_changes);
    SDL_AudioStatus (*ptr_SDL_GetAudioStatus)(void);
    SDL_AudioStatus (*ptr_SDL_GetAudioDeviceStatus)(SDL_AudioDeviceID dev);
    void (*ptr_SDL_PauseAudio)(int pause_on);
    void (*ptr_SDL_PauseAudioDevice)(SDL_AudioDeviceID dev, int pause_on);
    SDL_AudioSpec * (*ptr_SDL_LoadWAV_RW)(SDL_RWops * src, int freesrc, SDL_AudioSpec * spec, Uint8 * * audio_buf, Uint32 * audio_len);
    void (*ptr_SDL_FreeWAV)(Uint8 * audio_buf);
    int (*ptr_SDL_BuildAudioCVT)(SDL_AudioCVT * cvt, SDL_AudioFormat src_format, Uint8 src_channels, int src_rate, SDL_AudioFormat dst_format, Uint8 dst_channels, int dst_rate);
    int (*ptr_SDL_ConvertAudio)(SDL_AudioCVT * cvt);
    SDL_AudioStream * (*ptr_SDL_NewAudioStream)(const SDL_AudioFormat src_format, const Uint8 src_channels, const int src_rate, const SDL_AudioFormat dst_format, const Uint8 dst_channels, const int dst_rate);
    int (*ptr_SDL_AudioStreamPut)(SDL_AudioStream * stream, const void * buf, int len);
    int (*ptr_SDL_AudioStreamGet)(SDL_AudioStream * stream, void * buf, int len);
    int (*ptr_SDL_AudioStreamAvailable)(SDL_AudioStream * stream);
    int (*ptr_SDL_AudioStreamFlush)(SDL_AudioStream * stream);
    void (*ptr_SDL_AudioStreamClear)(SDL_AudioStream * stream);
    void (*ptr_SDL_FreeAudioStream)(SDL_AudioStream * stream);
    void (*ptr_SDL_MixAudio)(Uint8 * dst, const Uint8 * src, Uint32 len, int volume);
    void (*ptr_SDL_MixAudioFormat)(Uint8 * dst, const Uint8 * src, SDL_AudioFormat format, Uint32 len, int volume);
    int (*ptr_SDL_QueueAudio)(SDL_AudioDeviceID dev, const void * data, Uint32 len);
    Uint32 (*ptr_SDL_DequeueAudio)(SDL_AudioDeviceID dev, void * data, Uint32 len);
    Uint32 (*ptr_SDL_GetQueuedAudioSize)(SDL_AudioDeviceID dev);
    void (*ptr_SDL_ClearQueuedAudio)(SDL_AudioDeviceID dev);
    void (*ptr_SDL_LockAudio)(void);
    void (*ptr_SDL_LockAudioDevice)(SDL_AudioDeviceID dev);
    void (*ptr_SDL_UnlockAudio)(void);
    void (*ptr_SDL_UnlockAudioDevice)(SDL_AudioDeviceID dev);
    void (*ptr_SDL_CloseAudio)(void);
    void (*ptr_SDL_CloseAudioDevice)(SDL_AudioDeviceID dev);
    int (*ptr_SDL_SetClipboardText)(const char * text);
    char * (*ptr_SDL_GetClipboardText)(void);
    SDL_bool (*ptr_SDL_HasClipboardText)(void);
    int (*ptr_SDL_SetPrimarySelectionText)(const char * text);
    char * (*ptr_SDL_GetPrimarySelectionText)(void);
    SDL_bool (*ptr_SDL_HasPrimarySelectionText)(void);
    int (*ptr_SDL_GetCPUCount)(void);
    int (*ptr_SDL_GetCPUCacheLineSize)(void);
    SDL_bool (*ptr_SDL_HasRDTSC)(void);
    SDL_bool (*ptr_SDL_HasAltiVec)(void);
    SDL_bool (*ptr_SDL_HasMMX)(void);
    SDL_bool (*ptr_SDL_Has3DNow)(void);
    SDL_bool (*ptr_SDL_HasSSE)(void);
    SDL_bool (*ptr_SDL_HasSSE2)(void);
    SDL_bool (*ptr_SDL_HasSSE3)(void);
    SDL_bool (*ptr_SDL_HasSSE41)(void);
    SDL_bool (*ptr_SDL_HasSSE42)(void);
    SDL_bool (*ptr_SDL_HasAVX)(void);
    SDL_bool (*ptr_SDL_HasAVX2)(void);
    SDL_bool (*ptr_SDL_HasAVX512F)(void);
    SDL_bool (*ptr_SDL_HasARMSIMD)(void);
    SDL_bool (*ptr_SDL_HasNEON)(void);
    SDL_bool (*ptr_SDL_HasLSX)(void);
    SDL_bool (*ptr_SDL_HasLASX)(void);
    int (*ptr_SDL_GetSystemRAM)(void);
    size_t (*ptr_SDL_SIMDGetAlignment)(void);
    void * (*ptr_SDL_SIMDAlloc)(const size_t len);
    void * (*ptr_SDL_SIMDRealloc)(void * mem, const size_t len);
    void (*ptr_SDL_SIMDFree)(void * ptr);
    const char * (*ptr_SDL_GetPixelFormatName)(Uint32 format);
    SDL_bool (*ptr_SDL_PixelFormatEnumToMasks)(Uint32 format, int * bpp, Uint32 * Rmask, Uint32 * Gmask, Uint32 * Bmask, Uint32 * Amask);
    Uint32 (*ptr_SDL_MasksToPixelFormatEnum)(int bpp, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
    SDL_PixelFormat * (*ptr_SDL_AllocFormat)(Uint32 pixel_format);
    void (*ptr_SDL_FreeFormat)(SDL_PixelFormat * format);
    SDL_Palette * (*ptr_SDL_AllocPalette)(int ncolors);
    int (*ptr_SDL_SetPixelFormatPalette)(SDL_PixelFormat * format, SDL_Palette * palette);
    int (*ptr_SDL_SetPaletteColors)(SDL_Palette * palette, const SDL_Color * colors, int firstcolor, int ncolors);
    void (*ptr_SDL_FreePalette)(SDL_Palette * palette);
    Uint32 (*ptr_SDL_MapRGB)(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b);
    Uint32 (*ptr_SDL_MapRGBA)(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
    void (*ptr_SDL_GetRGB)(Uint32 pixel, const SDL_PixelFormat * format, Uint8 * r, Uint8 * g, Uint8 * b);
    void (*ptr_SDL_GetRGBA)(Uint32 pixel, const SDL_PixelFormat * format, Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a);
    void (*ptr_SDL_CalculateGammaRamp)(float gamma, Uint16 * ramp);
    SDL_bool (*ptr_SDL_HasIntersection)(const SDL_Rect * A, const SDL_Rect * B);
    SDL_bool (*ptr_SDL_IntersectRect)(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result);
    void (*ptr_SDL_UnionRect)(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result);
    SDL_bool (*ptr_SDL_EnclosePoints)(const SDL_Point * points, int count, const SDL_Rect * clip, SDL_Rect * result);
    SDL_bool (*ptr_SDL_IntersectRectAndLine)(const SDL_Rect * rect, int * X1, int * Y1, int * X2, int * Y2);
    SDL_bool (*ptr_SDL_HasIntersectionF)(const SDL_FRect * A, const SDL_FRect * B);
    SDL_bool (*ptr_SDL_IntersectFRect)(const SDL_FRect * A, const SDL_FRect * B, SDL_FRect * result);
    void (*ptr_SDL_UnionFRect)(const SDL_FRect * A, const SDL_FRect * B, SDL_FRect * result);
    SDL_bool (*ptr_SDL_EncloseFPoints)(const SDL_FPoint * points, int count, const SDL_FRect * clip, SDL_FRect * result);
    SDL_bool (*ptr_SDL_IntersectFRectAndLine)(const SDL_FRect * rect, float * X1, float * Y1, float * X2, float * Y2);
    SDL_BlendMode (*ptr_SDL_ComposeCustomBlendMode)(SDL_BlendFactor srcColorFactor, SDL_BlendFactor dstColorFactor, SDL_BlendOperation colorOperation, SDL_BlendFactor srcAlphaFactor, SDL_BlendFactor dstAlphaFactor, SDL_BlendOperation alphaOperation);
    SDL_Surface * (*ptr_SDL_CreateRGBSurface)(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
    SDL_Surface * (*ptr_SDL_CreateRGBSurfaceWithFormat)(Uint32 flags, int width, int height, int depth, Uint32 format);
    SDL_Surface * (*ptr_SDL_CreateRGBSurfaceFrom)(void * pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask);
    SDL_Surface * (*ptr_SDL_CreateRGBSurfaceWithFormatFrom)(void * pixels, int width, int height, int depth, int pitch, Uint32 format);
    void (*ptr_SDL_FreeSurface)(SDL_Surface * surface);
    int (*ptr_SDL_SetSurfacePalette)(SDL_Surface * surface, SDL_Palette * palette);
    int (*ptr_SDL_LockSurface)(SDL_Surface * surface);
    void (*ptr_SDL_UnlockSurface)(SDL_Surface * surface);
    SDL_Surface * (*ptr_SDL_LoadBMP_RW)(SDL_RWops * src, int freesrc);
    int (*ptr_SDL_SaveBMP_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst);
    int (*ptr_SDL_SetSurfaceRLE)(SDL_Surface * surface, int flag);
    SDL_bool (*ptr_SDL_HasSurfaceRLE)(SDL_Surface * surface);
    int (*ptr_SDL_SetColorKey)(SDL_Surface * surface, int flag, Uint32 key);
    SDL_bool (*ptr_SDL_HasColorKey)(SDL_Surface * surface);
    int (*ptr_SDL_GetColorKey)(SDL_Surface * surface, Uint32 * key);
    int (*ptr_SDL_SetSurfaceColorMod)(SDL_Surface * surface, Uint8 r, Uint8 g, Uint8 b);
    int (*ptr_SDL_GetSurfaceColorMod)(SDL_Surface * surface, Uint8 * r, Uint8 * g, Uint8 * b);
    int (*ptr_SDL_SetSurfaceAlphaMod)(SDL_Surface * surface, Uint8 alpha);
    int (*ptr_SDL_GetSurfaceAlphaMod)(SDL_Surface * surface, Uint8 * alpha);
    int (*ptr_SDL_SetSurfaceBlendMode)(SDL_Surface * surface, SDL_BlendMode blendMode);
    int (*ptr_SDL_GetSurfaceBlendMode)(SDL_Surface * surface, SDL_BlendMode * blendMode);
    SDL_bool (*ptr_SDL_SetClipRect)(SDL_Surface * surface, const SDL_Rect * rect);
    void (*ptr_SDL_GetClipRect)(SDL_Surface * surface, SDL_Rect * rect);
    SDL_Surface * (*ptr_SDL_DuplicateSurface)(SDL_Surface * surface);
    SDL_Surface * (*ptr_SDL_ConvertSurface)(SDL_Surface * src, const SDL_PixelFormat * fmt, Uint32 flags);
    SDL_Surface * (*ptr_SDL_ConvertSurfaceFormat)(SDL_Surface * src, Uint32 pixel_format, Uint32 flags);
    int (*ptr_SDL_ConvertPixels)(int width, int height, Uint32 src_format, const void * src, int src_pitch, Uint32 dst_format, void * dst, int dst_pitch);
    int (*ptr_SDL_PremultiplyAlpha)(int width, int height, Uint32 src_format, const void * src, int src_pitch, Uint32 dst_format, void * dst, int dst_pitch);
    int (*ptr_SDL_FillRect)(SDL_Surface * dst, const SDL_Rect * rect, Uint32 color);
    int (*ptr_SDL_FillRects)(SDL_Surface * dst, const SDL_Rect * rects, int count, Uint32 color);
    int (*ptr_SDL_UpperBlit)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect);
    int (*ptr_SDL_LowerBlit)(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect);
    int (*ptr_SDL_SoftStretch)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, const SDL_Rect * dstrect);
    int (*ptr_SDL_SoftStretchLinear)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, const SDL_Rect * dstrect);
    int (*ptr_SDL_UpperBlitScaled)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect);
    int (*ptr_SDL_LowerBlitScaled)(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect);
    void (*ptr_SDL_SetYUVConversionMode)(SDL_YUV_CONVERSION_MODE mode);
    SDL_YUV_CONVERSION_MODE (*ptr_SDL_GetYUVConversionMode)(void);
    SDL_YUV_CONVERSION_MODE (*ptr_SDL_GetYUVConversionModeForResolution)(int width, int height);
    int (*ptr_SDL_GetNumVideoDrivers)(void);
    const char * (*ptr_SDL_GetVideoDriver)(int index);
    int (*ptr_SDL_VideoInit)(const char * driver_name);
    void (*ptr_SDL_VideoQuit)(void);
    const char * (*ptr_SDL_GetCurrentVideoDriver)(void);
    int (*ptr_SDL_GetNumVideoDisplays)(void);
    const char * (*ptr_SDL_GetDisplayName)(int displayIndex);
    int (*ptr_SDL_GetDisplayBounds)(int displayIndex, SDL_Rect * rect);
    int (*ptr_SDL_GetDisplayUsableBounds)(int displayIndex, SDL_Rect * rect);
    int (*ptr_SDL_GetDisplayDPI)(int displayIndex, float * ddpi, float * hdpi, float * vdpi);
    SDL_DisplayOrientation (*ptr_SDL_GetDisplayOrientation)(int displayIndex);
    int (*ptr_SDL_GetNumDisplayModes)(int displayIndex);
    int (*ptr_SDL_GetDisplayMode)(int displayIndex, int modeIndex, SDL_DisplayMode * mode);
    int (*ptr_SDL_GetDesktopDisplayMode)(int displayIndex, SDL_DisplayMode * mode);
    int (*ptr_SDL_GetCurrentDisplayMode)(int displayIndex, SDL_DisplayMode * mode);
    SDL_DisplayMode * (*ptr_SDL_GetClosestDisplayMode)(int displayIndex, const SDL_DisplayMode * mode, SDL_DisplayMode * closest);
    int (*ptr_SDL_GetPointDisplayIndex)(const SDL_Point * point);
    int (*ptr_SDL_GetRectDisplayIndex)(const SDL_Rect * rect);
    int (*ptr_SDL_GetWindowDisplayIndex)(SDL_Window * window);
    int (*ptr_SDL_SetWindowDisplayMode)(SDL_Window * window, const SDL_DisplayMode * mode);
    int (*ptr_SDL_GetWindowDisplayMode)(SDL_Window * window, SDL_DisplayMode * mode);
    void * (*ptr_SDL_GetWindowICCProfile)(SDL_Window * window, size_t * size);
    Uint32 (*ptr_SDL_GetWindowPixelFormat)(SDL_Window * window);
    SDL_Window * (*ptr_SDL_CreateWindow)(const char * title, int x, int y, int w, int h, Uint32 flags);
    SDL_Window * (*ptr_SDL_CreateWindowFrom)(const void * data);
    Uint32 (*ptr_SDL_GetWindowID)(SDL_Window * window);
    SDL_Window * (*ptr_SDL_GetWindowFromID)(Uint32 id);
    Uint32 (*ptr_SDL_GetWindowFlags)(SDL_Window * window);
    void (*ptr_SDL_SetWindowTitle)(SDL_Window * window, const char * title);
    const char * (*ptr_SDL_GetWindowTitle)(SDL_Window * window);
    void (*ptr_SDL_SetWindowIcon)(SDL_Window * window, SDL_Surface * icon);
    void * (*ptr_SDL_SetWindowData)(SDL_Window * window, const char * name, void * userdata);
    void * (*ptr_SDL_GetWindowData)(SDL_Window * window, const char * name);
    void (*ptr_SDL_SetWindowPosition)(SDL_Window * window, int x, int y);
    void (*ptr_SDL_GetWindowPosition)(SDL_Window * window, int * x, int * y);
    void (*ptr_SDL_SetWindowSize)(SDL_Window * window, int w, int h);
    void (*ptr_SDL_GetWindowSize)(SDL_Window * window, int * w, int * h);
    int (*ptr_SDL_GetWindowBordersSize)(SDL_Window * window, int * top, int * left, int * bottom, int * right);
    void (*ptr_SDL_GetWindowSizeInPixels)(SDL_Window * window, int * w, int * h);
    void (*ptr_SDL_SetWindowMinimumSize)(SDL_Window * window, int min_w, int min_h);
    void (*ptr_SDL_GetWindowMinimumSize)(SDL_Window * window, int * w, int * h);
    void (*ptr_SDL_SetWindowMaximumSize)(SDL_Window * window, int max_w, int max_h);
    void (*ptr_SDL_GetWindowMaximumSize)(SDL_Window * window, int * w, int * h);
    void (*ptr_SDL_SetWindowBordered)(SDL_Window * window, SDL_bool bordered);
    void (*ptr_SDL_SetWindowResizable)(SDL_Window * window, SDL_bool resizable);
    void (*ptr_SDL_SetWindowAlwaysOnTop)(SDL_Window * window, SDL_bool on_top);
    void (*ptr_SDL_ShowWindow)(SDL_Window * window);
    void (*ptr_SDL_HideWindow)(SDL_Window * window);
    void (*ptr_SDL_RaiseWindow)(SDL_Window * window);
    void (*ptr_SDL_MaximizeWindow)(SDL_Window * window);
    void (*ptr_SDL_MinimizeWindow)(SDL_Window * window);
    void (*ptr_SDL_RestoreWindow)(SDL_Window * window);
    int (*ptr_SDL_SetWindowFullscreen)(SDL_Window * window, Uint32 flags);
    SDL_bool (*ptr_SDL_HasWindowSurface)(SDL_Window * window);
    SDL_Surface * (*ptr_SDL_GetWindowSurface)(SDL_Window * window);
    int (*ptr_SDL_UpdateWindowSurface)(SDL_Window * window);
    int (*ptr_SDL_UpdateWindowSurfaceRects)(SDL_Window * window, const SDL_Rect * rects, int numrects);
    int (*ptr_SDL_DestroyWindowSurface)(SDL_Window * window);
    void (*ptr_SDL_SetWindowGrab)(SDL_Window * window, SDL_bool grabbed);
    void (*ptr_SDL_SetWindowKeyboardGrab)(SDL_Window * window, SDL_bool grabbed);
    void (*ptr_SDL_SetWindowMouseGrab)(SDL_Window * window, SDL_bool grabbed);
    SDL_bool (*ptr_SDL_GetWindowGrab)(SDL_Window * window);
    SDL_bool (*ptr_SDL_GetWindowKeyboardGrab)(SDL_Window * window);
    SDL_bool (*ptr_SDL_GetWindowMouseGrab)(SDL_Window * window);
    SDL_Window * (*ptr_SDL_GetGrabbedWindow)(void);
    int (*ptr_SDL_SetWindowMouseRect)(SDL_Window * window, const SDL_Rect * rect);
    const SDL_Rect * (*ptr_SDL_GetWindowMouseRect)(SDL_Window * window);
    int (*ptr_SDL_SetWindowBrightness)(SDL_Window * window, float brightness);
    float (*ptr_SDL_GetWindowBrightness)(SDL_Window * window);
    int (*ptr_SDL_SetWindowOpacity)(SDL_Window * window, float opacity);
    int (*ptr_SDL_GetWindowOpacity)(SDL_Window * window, float * out_opacity);
    int (*ptr_SDL_SetWindowModalFor)(SDL_Window * modal_window, SDL_Window * parent_window);
    int (*ptr_SDL_SetWindowInputFocus)(SDL_Window * window);
    int (*ptr_SDL_SetWindowGammaRamp)(SDL_Window * window, const Uint16 * red, const Uint16 * green, const Uint16 * blue);
    int (*ptr_SDL_GetWindowGammaRamp)(SDL_Window * window, Uint16 * red, Uint16 * green, Uint16 * blue);
    int (*ptr_SDL_SetWindowHitTest)(SDL_Window * window, SDL_HitTest callback, void * callback_data);
    int (*ptr_SDL_FlashWindow)(SDL_Window * window, SDL_FlashOperation operation);
    void (*ptr_SDL_DestroyWindow)(SDL_Window * window);
    SDL_bool (*ptr_SDL_IsScreenSaverEnabled)(void);
    void (*ptr_SDL_EnableScreenSaver)(void);
    void (*ptr_SDL_DisableScreenSaver)(void);
    int (*ptr_SDL_GL_LoadLibrary)(const char * path);
    void * (*ptr_SDL_GL_GetProcAddress)(const char * proc);
    void (*ptr_SDL_GL_UnloadLibrary)(void);
    SDL_bool (*ptr_SDL_GL_ExtensionSupported)(const char * extension);
    void (*ptr_SDL_GL_ResetAttributes)(void);
    int (*ptr_SDL_GL_SetAttribute)(SDL_GLattr attr, int value);
    int (*ptr_SDL_GL_GetAttribute)(SDL_GLattr attr, int * value);
    SDL_GLContext (*ptr_SDL_GL_CreateContext)(SDL_Window * window);
    int (*ptr_SDL_GL_MakeCurrent)(SDL_Window * window, SDL_GLContext context);
    SDL_Window * (*ptr_SDL_GL_GetCurrentWindow)(void);
    SDL_GLContext (*ptr_SDL_GL_GetCurrentContext)(void);
    void (*ptr_SDL_GL_GetDrawableSize)(SDL_Window * window, int * w, int * h);
    int (*ptr_SDL_GL_SetSwapInterval)(int interval);
    int (*ptr_SDL_GL_GetSwapInterval)(void);
    void (*ptr_SDL_GL_SwapWindow)(SDL_Window * window);
    void (*ptr_SDL_GL_DeleteContext)(SDL_GLContext context);
    SDL_Window * (*ptr_SDL_GetKeyboardFocus)(void);
    const Uint8 * (*ptr_SDL_GetKeyboardState)(int * numkeys);
    void (*ptr_SDL_ResetKeyboard)(void);
    SDL_Keymod (*ptr_SDL_GetModState)(void);
    void (*ptr_SDL_SetModState)(SDL_Keymod modstate);
    SDL_Keycode (*ptr_SDL_GetKeyFromScancode)(SDL_Scancode scancode);
    SDL_Scancode (*ptr_SDL_GetScancodeFromKey)(SDL_Keycode key);
    const char * (*ptr_SDL_GetScancodeName)(SDL_Scancode scancode);
    SDL_Scancode (*ptr_SDL_GetScancodeFromName)(const char * name);
    const char * (*ptr_SDL_GetKeyName)(SDL_Keycode key);
    SDL_Keycode (*ptr_SDL_GetKeyFromName)(const char * name);
    void (*ptr_SDL_StartTextInput)(void);
    SDL_bool (*ptr_SDL_IsTextInputActive)(void);
    void (*ptr_SDL_StopTextInput)(void);
    void (*ptr_SDL_ClearComposition)(void);
    SDL_bool (*ptr_SDL_IsTextInputShown)(void);
    void (*ptr_SDL_SetTextInputRect)(const SDL_Rect * rect);
    SDL_bool (*ptr_SDL_HasScreenKeyboardSupport)(void);
    SDL_bool (*ptr_SDL_IsScreenKeyboardShown)(SDL_Window * window);
    SDL_Window * (*ptr_SDL_GetMouseFocus)(void);
    Uint32 (*ptr_SDL_GetMouseState)(int * x, int * y);
    Uint32 (*ptr_SDL_GetGlobalMouseState)(int * x, int * y);
    Uint32 (*ptr_SDL_GetRelativeMouseState)(int * x, int * y);
    void (*ptr_SDL_WarpMouseInWindow)(SDL_Window * window, int x, int y);
    int (*ptr_SDL_WarpMouseGlobal)(int x, int y);
    int (*ptr_SDL_SetRelativeMouseMode)(SDL_bool enabled);
    int (*ptr_SDL_CaptureMouse)(SDL_bool enabled);
    SDL_bool (*ptr_SDL_GetRelativeMouseMode)(void);
    SDL_Cursor * (*ptr_SDL_CreateCursor)(const Uint8 * data, const Uint8 * mask, int w, int h, int hot_x, int hot_y);
    SDL_Cursor * (*ptr_SDL_CreateColorCursor)(SDL_Surface * surface, int hot_x, int hot_y);
    SDL_Cursor * (*ptr_SDL_CreateSystemCursor)(SDL_SystemCursor id);
    void (*ptr_SDL_SetCursor)(SDL_Cursor * cursor);
    SDL_Cursor * (*ptr_SDL_GetCursor)(void);
    SDL_Cursor * (*ptr_SDL_GetDefaultCursor)(void);
    void (*ptr_SDL_FreeCursor)(SDL_Cursor * cursor);
    int (*ptr_SDL_ShowCursor)(int toggle);
    void (*ptr_SDL_GUIDToString)(SDL_GUID guid, char * pszGUID, int cbGUID);
    SDL_GUID (*ptr_SDL_GUIDFromString)(const char * pchGUID);
    void (*ptr_SDL_LockJoysticks)(void);
    void (*ptr_SDL_UnlockJoysticks)(void);
    int (*ptr_SDL_NumJoysticks)(void);
    const char * (*ptr_SDL_JoystickNameForIndex)(int device_index);
    const char * (*ptr_SDL_JoystickPathForIndex)(int device_index);
    int (*ptr_SDL_JoystickGetDevicePlayerIndex)(int device_index);
    SDL_JoystickGUID (*ptr_SDL_JoystickGetDeviceGUID)(int device_index);
    Uint16 (*ptr_SDL_JoystickGetDeviceVendor)(int device_index);
    Uint16 (*ptr_SDL_JoystickGetDeviceProduct)(int device_index);
    Uint16 (*ptr_SDL_JoystickGetDeviceProductVersion)(int device_index);
    SDL_JoystickType (*ptr_SDL_JoystickGetDeviceType)(int device_index);
    SDL_JoystickID (*ptr_SDL_JoystickGetDeviceInstanceID)(int device_index);
    SDL_Joystick * (*ptr_SDL_JoystickOpen)(int device_index);
    SDL_Joystick * (*ptr_SDL_JoystickFromInstanceID)(SDL_JoystickID instance_id);
    SDL_Joystick * (*ptr_SDL_JoystickFromPlayerIndex)(int player_index);
    int (*ptr_SDL_JoystickAttachVirtual)(SDL_JoystickType type, int naxes, int nbuttons, int nhats);
    int (*ptr_SDL_JoystickAttachVirtualEx)(const SDL_VirtualJoystickDesc * desc);
    int (*ptr_SDL_JoystickDetachVirtual)(int device_index);
    SDL_bool (*ptr_SDL_JoystickIsVirtual)(int device_index);
    int (*ptr_SDL_JoystickSetVirtualAxis)(SDL_Joystick * joystick, int axis, Sint16 value);
    int (*ptr_SDL_JoystickSetVirtualButton)(SDL_Joystick * joystick, int button, Uint8 value);
    int (*ptr_SDL_JoystickSetVirtualHat)(SDL_Joystick * joystick, int hat, Uint8 value);
    const char * (*ptr_SDL_JoystickName)(SDL_Joystick * joystick);
    const char * (*ptr_SDL_JoystickPath)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickGetPlayerIndex)(SDL_Joystick * joystick);
    void (*ptr_SDL_JoystickSetPlayerIndex)(SDL_Joystick * joystick, int player_index);
    SDL_JoystickGUID (*ptr_SDL_JoystickGetGUID)(SDL_Joystick * joystick);
    Uint16 (*ptr_SDL_JoystickGetVendor)(SDL_Joystick * joystick);
    Uint16 (*ptr_SDL_JoystickGetProduct)(SDL_Joystick * joystick);
    Uint16 (*ptr_SDL_JoystickGetProductVersion)(SDL_Joystick * joystick);
    Uint16 (*ptr_SDL_JoystickGetFirmwareVersion)(SDL_Joystick * joystick);
    const char * (*ptr_SDL_JoystickGetSerial)(SDL_Joystick * joystick);
    SDL_JoystickType (*ptr_SDL_JoystickGetType)(SDL_Joystick * joystick);
    void (*ptr_SDL_JoystickGetGUIDString)(SDL_JoystickGUID guid, char * pszGUID, int cbGUID);
    SDL_JoystickGUID (*ptr_SDL_JoystickGetGUIDFromString)(const char * pchGUID);
    void (*ptr_SDL_GetJoystickGUIDInfo)(SDL_JoystickGUID guid, Uint16 * vendor, Uint16 * product, Uint16 * version, Uint16 * crc16);
    SDL_bool (*ptr_SDL_JoystickGetAttached)(SDL_Joystick * joystick);
    SDL_JoystickID (*ptr_SDL_JoystickInstanceID)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickNumAxes)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickNumBalls)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickNumHats)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickNumButtons)(SDL_Joystick * joystick);
    void (*ptr_SDL_JoystickUpdate)(void);
    int (*ptr_SDL_JoystickEventState)(int state);
    Sint16 (*ptr_SDL_JoystickGetAxis)(SDL_Joystick * joystick, int axis);
    SDL_bool (*ptr_SDL_JoystickGetAxisInitialState)(SDL_Joystick * joystick, int axis, Sint16 * state);
    Uint8 (*ptr_SDL_JoystickGetHat)(SDL_Joystick * joystick, int hat);
    int (*ptr_SDL_JoystickGetBall)(SDL_Joystick * joystick, int ball, int * dx, int * dy);
    Uint8 (*ptr_SDL_JoystickGetButton)(SDL_Joystick * joystick, int button);
    int (*ptr_SDL_JoystickRumble)(SDL_Joystick * joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);
    int (*ptr_SDL_JoystickRumbleTriggers)(SDL_Joystick * joystick, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);
    SDL_bool (*ptr_SDL_JoystickHasLED)(SDL_Joystick * joystick);
    SDL_bool (*ptr_SDL_JoystickHasRumble)(SDL_Joystick * joystick);
    SDL_bool (*ptr_SDL_JoystickHasRumbleTriggers)(SDL_Joystick * joystick);
    int (*ptr_SDL_JoystickSetLED)(SDL_Joystick * joystick, Uint8 red, Uint8 green, Uint8 blue);
    int (*ptr_SDL_JoystickSendEffect)(SDL_Joystick * joystick, const void * data, int size);
    void (*ptr_SDL_JoystickClose)(SDL_Joystick * joystick);
    SDL_JoystickPowerLevel (*ptr_SDL_JoystickCurrentPowerLevel)(SDL_Joystick * joystick);
    void (*ptr_SDL_LockSensors)(void);
    void (*ptr_SDL_UnlockSensors)(void);
    int (*ptr_SDL_NumSensors)(void);
    const char * (*ptr_SDL_SensorGetDeviceName)(int device_index);
    SDL_SensorType (*ptr_SDL_SensorGetDeviceType)(int device_index);
    int (*ptr_SDL_SensorGetDeviceNonPortableType)(int device_index);
    SDL_SensorID (*ptr_SDL_SensorGetDeviceInstanceID)(int device_index);
    SDL_Sensor * (*ptr_SDL_SensorOpen)(int device_index);
    SDL_Sensor * (*ptr_SDL_SensorFromInstanceID)(SDL_SensorID instance_id);
    const char * (*ptr_SDL_SensorGetName)(SDL_Sensor * sensor);
    SDL_SensorType (*ptr_SDL_SensorGetType)(SDL_Sensor * sensor);
    int (*ptr_SDL_SensorGetNonPortableType)(SDL_Sensor * sensor);
    SDL_SensorID (*ptr_SDL_SensorGetInstanceID)(SDL_Sensor * sensor);
    int (*ptr_SDL_SensorGetData)(SDL_Sensor * sensor, float * data, int num_values);
    int (*ptr_SDL_SensorGetDataWithTimestamp)(SDL_Sensor * sensor, Uint64 * timestamp, float * data, int num_values);
    void (*ptr_SDL_SensorClose)(SDL_Sensor * sensor);
    void (*ptr_SDL_SensorUpdate)(void);
    int (*ptr_SDL_GameControllerAddMappingsFromRW)(SDL_RWops * rw, int freerw);
    int (*ptr_SDL_GameControllerAddMapping)(const char * mappingString);
    int (*ptr_SDL_GameControllerNumMappings)(void);
    char * (*ptr_SDL_GameControllerMappingForIndex)(int mapping_index);
    char * (*ptr_SDL_GameControllerMappingForGUID)(SDL_JoystickGUID guid);
    char * (*ptr_SDL_GameControllerMapping)(SDL_GameController * gamecontroller);
    SDL_bool (*ptr_SDL_IsGameController)(int joystick_index);
    const char * (*ptr_SDL_GameControllerNameForIndex)(int joystick_index);
    const char * (*ptr_SDL_GameControllerPathForIndex)(int joystick_index);
    SDL_GameControllerType (*ptr_SDL_GameControllerTypeForIndex)(int joystick_index);
    char * (*ptr_SDL_GameControllerMappingForDeviceIndex)(int joystick_index);
    SDL_GameController * (*ptr_SDL_GameControllerOpen)(int joystick_index);
    SDL_GameController * (*ptr_SDL_GameControllerFromInstanceID)(SDL_JoystickID joyid);
    SDL_GameController * (*ptr_SDL_GameControllerFromPlayerIndex)(int player_index);
    const char * (*ptr_SDL_GameControllerName)(SDL_GameController * gamecontroller);
    const char * (*ptr_SDL_GameControllerPath)(SDL_GameController * gamecontroller);
    SDL_GameControllerType (*ptr_SDL_GameControllerGetType)(SDL_GameController * gamecontroller);
    int (*ptr_SDL_GameControllerGetPlayerIndex)(SDL_GameController * gamecontroller);
    void (*ptr_SDL_GameControllerSetPlayerIndex)(SDL_GameController * gamecontroller, int player_index);
    Uint16 (*ptr_SDL_GameControllerGetVendor)(SDL_GameController * gamecontroller);
    Uint16 (*ptr_SDL_GameControllerGetProduct)(SDL_GameController * gamecontroller);
    Uint16 (*ptr_SDL_GameControllerGetProductVersion)(SDL_GameController * gamecontroller);
    Uint16 (*ptr_SDL_GameControllerGetFirmwareVersion)(SDL_GameController * gamecontroller);
    const char * (*ptr_SDL_GameControllerGetSerial)(SDL_GameController * gamecontroller);
    Uint64 (*ptr_SDL_GameControllerGetSteamHandle)(SDL_GameController * gamecontroller);
    SDL_bool (*ptr_SDL_GameControllerGetAttached)(SDL_GameController * gamecontroller);
    SDL_Joystick * (*ptr_SDL_GameControllerGetJoystick)(SDL_GameController * gamecontroller);
    int (*ptr_SDL_GameControllerEventState)(int state);
    void (*ptr_SDL_GameControllerUpdate)(void);
    SDL_GameControllerAxis (*ptr_SDL_GameControllerGetAxisFromString)(const char * str);
    const char * (*ptr_SDL_GameControllerGetStringForAxis)(SDL_GameControllerAxis axis);
    SDL_GameControllerButtonBind (*ptr_SDL_GameControllerGetBindForAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis);
    SDL_bool (*ptr_SDL_GameControllerHasAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis);
    Sint16 (*ptr_SDL_GameControllerGetAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis);
    SDL_GameControllerButton (*ptr_SDL_GameControllerGetButtonFromString)(const char * str);
    const char * (*ptr_SDL_GameControllerGetStringForButton)(SDL_GameControllerButton button);
    SDL_GameControllerButtonBind (*ptr_SDL_GameControllerGetBindForButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button);
    SDL_bool (*ptr_SDL_GameControllerHasButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button);
    Uint8 (*ptr_SDL_GameControllerGetButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button);
    int (*ptr_SDL_GameControllerGetNumTouchpads)(SDL_GameController * gamecontroller);
    int (*ptr_SDL_GameControllerGetNumTouchpadFingers)(SDL_GameController * gamecontroller, int touchpad);
    int (*ptr_SDL_GameControllerGetTouchpadFinger)(SDL_GameController * gamecontroller, int touchpad, int finger, Uint8 * state, float * x, float * y, float * pressure);
    SDL_bool (*ptr_SDL_GameControllerHasSensor)(SDL_GameController * gamecontroller, SDL_SensorType type);
    int (*ptr_SDL_GameControllerSetSensorEnabled)(SDL_GameController * gamecontroller, SDL_SensorType type, SDL_bool enabled);
    SDL_bool (*ptr_SDL_GameControllerIsSensorEnabled)(SDL_GameController * gamecontroller, SDL_SensorType type);
    float (*ptr_SDL_GameControllerGetSensorDataRate)(SDL_GameController * gamecontroller, SDL_SensorType type);
    int (*ptr_SDL_GameControllerGetSensorData)(SDL_GameController * gamecontroller, SDL_SensorType type, float * data, int num_values);
    int (*ptr_SDL_GameControllerGetSensorDataWithTimestamp)(SDL_GameController * gamecontroller, SDL_SensorType type, Uint64 * timestamp, float * data, int num_values);
    int (*ptr_SDL_GameControllerRumble)(SDL_GameController * gamecontroller, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms);
    int (*ptr_SDL_GameControllerRumbleTriggers)(SDL_GameController * gamecontroller, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms);
    SDL_bool (*ptr_SDL_GameControllerHasLED)(SDL_GameController * gamecontroller);
    SDL_bool (*ptr_SDL_GameControllerHasRumble)(SDL_GameController * gamecontroller);
    SDL_bool (*ptr_SDL_GameControllerHasRumbleTriggers)(SDL_GameController * gamecontroller);
    int (*ptr_SDL_GameControllerSetLED)(SDL_GameController * gamecontroller, Uint8 red, Uint8 green, Uint8 blue);
    int (*ptr_SDL_GameControllerSendEffect)(SDL_GameController * gamecontroller, const void * data, int size);
    void (*ptr_SDL_GameControllerClose)(SDL_GameController * gamecontroller);
    const char * (*ptr_SDL_GameControllerGetAppleSFSymbolsNameForButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button);
    const char * (*ptr_SDL_GameControllerGetAppleSFSymbolsNameForAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis);
    int (*ptr_SDL_GetNumTouchDevices)(void);
    SDL_TouchID (*ptr_SDL_GetTouchDevice)(int index);
    const char * (*ptr_SDL_GetTouchName)(int index);
    SDL_TouchDeviceType (*ptr_SDL_GetTouchDeviceType)(SDL_TouchID touchID);
    int (*ptr_SDL_GetNumTouchFingers)(SDL_TouchID touchID);
    SDL_Finger * (*ptr_SDL_GetTouchFinger)(SDL_TouchID touchID, int index);
    int (*ptr_SDL_RecordGesture)(SDL_TouchID touchId);
    int (*ptr_SDL_SaveAllDollarTemplates)(SDL_RWops * dst);
    int (*ptr_SDL_SaveDollarTemplate)(SDL_GestureID gestureId, SDL_RWops * dst);
    int (*ptr_SDL_LoadDollarTemplates)(SDL_TouchID touchId, SDL_RWops * src);
    void (*ptr_SDL_PumpEvents)(void);
    int (*ptr_SDL_PeepEvents)(SDL_Event * events, int numevents, SDL_eventaction action, Uint32 minType, Uint32 maxType);
    SDL_bool (*ptr_SDL_HasEvent)(Uint32 type);
    SDL_bool (*ptr_SDL_HasEvents)(Uint32 minType, Uint32 maxType);
    void (*ptr_SDL_FlushEvent)(Uint32 type);
    void (*ptr_SDL_FlushEvents)(Uint32 minType, Uint32 maxType);
    int (*ptr_SDL_PollEvent)(SDL_Event * event);
    int (*ptr_SDL_WaitEvent)(SDL_Event * event);
    int (*ptr_SDL_WaitEventTimeout)(SDL_Event * event, int timeout);
    int (*ptr_SDL_PushEvent)(SDL_Event * event);
    void (*ptr_SDL_SetEventFilter)(SDL_EventFilter filter, void * userdata);
    SDL_bool (*ptr_SDL_GetEventFilter)(SDL_EventFilter * filter, void * * userdata);
    void (*ptr_SDL_AddEventWatch)(SDL_EventFilter filter, void * userdata);
    void (*ptr_SDL_DelEventWatch)(SDL_EventFilter filter, void * userdata);
    void (*ptr_SDL_FilterEvents)(SDL_EventFilter filter, void * userdata);
    Uint8 (*ptr_SDL_EventState)(Uint32 type, int state);
    Uint32 (*ptr_SDL_RegisterEvents)(int numevents);
    char * (*ptr_SDL_GetBasePath)(void);
    char * (*ptr_SDL_GetPrefPath)(const char * org, const char * app);
    int (*ptr_SDL_NumHaptics)(void);
    const char * (*ptr_SDL_HapticName)(int device_index);
    SDL_Haptic * (*ptr_SDL_HapticOpen)(int device_index);
    int (*ptr_SDL_HapticOpened)(int device_index);
    int (*ptr_SDL_HapticIndex)(SDL_Haptic * haptic);
    int (*ptr_SDL_MouseIsHaptic)(void);
    SDL_Haptic * (*ptr_SDL_HapticOpenFromMouse)(void);
    int (*ptr_SDL_JoystickIsHaptic)(SDL_Joystick * joystick);
    SDL_Haptic * (*ptr_SDL_HapticOpenFromJoystick)(SDL_Joystick * joystick);
    void (*ptr_SDL_HapticClose)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticNumEffects)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticNumEffectsPlaying)(SDL_Haptic * haptic);
    unsigned int (*ptr_SDL_HapticQuery)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticNumAxes)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticEffectSupported)(SDL_Haptic * haptic, SDL_HapticEffect * effect);
    int (*ptr_SDL_HapticNewEffect)(SDL_Haptic * haptic, SDL_HapticEffect * effect);
    int (*ptr_SDL_HapticUpdateEffect)(SDL_Haptic * haptic, int effect, SDL_HapticEffect * data);
    int (*ptr_SDL_HapticRunEffect)(SDL_Haptic * haptic, int effect, Uint32 iterations);
    int (*ptr_SDL_HapticStopEffect)(SDL_Haptic * haptic, int effect);
    void (*ptr_SDL_HapticDestroyEffect)(SDL_Haptic * haptic, int effect);
    int (*ptr_SDL_HapticGetEffectStatus)(SDL_Haptic * haptic, int effect);
    int (*ptr_SDL_HapticSetGain)(SDL_Haptic * haptic, int gain);
    int (*ptr_SDL_HapticSetAutocenter)(SDL_Haptic * haptic, int autocenter);
    int (*ptr_SDL_HapticPause)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticUnpause)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticStopAll)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticRumbleSupported)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticRumbleInit)(SDL_Haptic * haptic);
    int (*ptr_SDL_HapticRumblePlay)(SDL_Haptic * haptic, float strength, Uint32 length);
    int (*ptr_SDL_HapticRumbleStop)(SDL_Haptic * haptic);
    int (*ptr_SDL_hid_init)(void);
    int (*ptr_SDL_hid_exit)(void);
    Uint32 (*ptr_SDL_hid_device_change_count)(void);
    SDL_hid_device_info * (*ptr_SDL_hid_enumerate)(unsigned short vendor_id, unsigned short product_id);
    void (*ptr_SDL_hid_free_enumeration)(SDL_hid_device_info * devs);
    SDL_hid_device * (*ptr_SDL_hid_open)(unsigned short vendor_id, unsigned short product_id, const wchar_t * serial_number);
    SDL_hid_device * (*ptr_SDL_hid_open_path)(const char * path, int bExclusive);
    int (*ptr_SDL_hid_write)(SDL_hid_device * dev, const unsigned char * data, size_t length);
    int (*ptr_SDL_hid_read_timeout)(SDL_hid_device * dev, unsigned char * data, size_t length, int milliseconds);
    int (*ptr_SDL_hid_read)(SDL_hid_device * dev, unsigned char * data, size_t length);
    int (*ptr_SDL_hid_set_nonblocking)(SDL_hid_device * dev, int nonblock);
    int (*ptr_SDL_hid_send_feature_report)(SDL_hid_device * dev, const unsigned char * data, size_t length);
    int (*ptr_SDL_hid_get_feature_report)(SDL_hid_device * dev, unsigned char * data, size_t length);
    void (*ptr_SDL_hid_close)(SDL_hid_device * dev);
    int (*ptr_SDL_hid_get_manufacturer_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen);
    int (*ptr_SDL_hid_get_product_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen);
    int (*ptr_SDL_hid_get_serial_number_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen);
    int (*ptr_SDL_hid_get_indexed_string)(SDL_hid_device * dev, int string_index, wchar_t * string, size_t maxlen);
    void (*ptr_SDL_hid_ble_scan)(SDL_bool active);
    SDL_bool (*ptr_SDL_SetHintWithPriority)(const char * name, const char * value, SDL_HintPriority priority);
    SDL_bool (*ptr_SDL_SetHint)(const char * name, const char * value);
    SDL_bool (*ptr_SDL_ResetHint)(const char * name);
    void (*ptr_SDL_ResetHints)(void);
    const char * (*ptr_SDL_GetHint)(const char * name);
    SDL_bool (*ptr_SDL_GetHintBoolean)(const char * name, SDL_bool default_value);
    void (*ptr_SDL_AddHintCallback)(const char * name, SDL_HintCallback callback, void * userdata);
    void (*ptr_SDL_DelHintCallback)(const char * name, SDL_HintCallback callback, void * userdata);
    void (*ptr_SDL_ClearHints)(void);
    void * (*ptr_SDL_LoadObject)(const char * sofile);
    void * (*ptr_SDL_LoadFunction)(void * handle, const char * name);
    void (*ptr_SDL_UnloadObject)(void * handle);
    void (*ptr_SDL_LogSetAllPriority)(SDL_LogPriority priority);
    void (*ptr_SDL_LogSetPriority)(int category, SDL_LogPriority priority);
    SDL_LogPriority (*ptr_SDL_LogGetPriority)(int category);
    void (*ptr_SDL_LogResetPriorities)(void);
    void (*ptr_SDL_LogMessageV)(int category, SDL_LogPriority priority, const char * fmt, va_list ap);
    void (*ptr_SDL_LogGetOutputFunction)(SDL_LogOutputFunction * callback, void * * userdata);
    void (*ptr_SDL_LogSetOutputFunction)(SDL_LogOutputFunction callback, void * userdata);
    int (*ptr_SDL_ShowMessageBox)(const SDL_MessageBoxData * messageboxdata, int * buttonid);
    int (*ptr_SDL_ShowSimpleMessageBox)(Uint32 flags, const char * title, const char * message, SDL_Window * window);
    SDL_MetalView (*ptr_SDL_Metal_CreateView)(SDL_Window * window);
    void (*ptr_SDL_Metal_DestroyView)(SDL_MetalView view);
    void * (*ptr_SDL_Metal_GetLayer)(SDL_MetalView view);
    void (*ptr_SDL_Metal_GetDrawableSize)(SDL_Window * window, int * w, int * h);
    SDL_PowerState (*ptr_SDL_GetPowerInfo)(int * seconds, int * percent);
    int (*ptr_SDL_GetNumRenderDrivers)(void);
    int (*ptr_SDL_GetRenderDriverInfo)(int index, SDL_RendererInfo * info);
    int (*ptr_SDL_CreateWindowAndRenderer)(int width, int height, Uint32 window_flags, SDL_Window * * window, SDL_Renderer * * renderer);
    SDL_Renderer * (*ptr_SDL_CreateRenderer)(SDL_Window * window, int index, Uint32 flags);
    SDL_Renderer * (*ptr_SDL_CreateSoftwareRenderer)(SDL_Surface * surface);
    SDL_Renderer * (*ptr_SDL_GetRenderer)(SDL_Window * window);
    SDL_Window * (*ptr_SDL_RenderGetWindow)(SDL_Renderer * renderer);
    int (*ptr_SDL_GetRendererInfo)(SDL_Renderer * renderer, SDL_RendererInfo * info);
    int (*ptr_SDL_GetRendererOutputSize)(SDL_Renderer * renderer, int * w, int * h);
    SDL_Texture * (*ptr_SDL_CreateTexture)(SDL_Renderer * renderer, Uint32 format, int access, int w, int h);
    SDL_Texture * (*ptr_SDL_CreateTextureFromSurface)(SDL_Renderer * renderer, SDL_Surface * surface);
    int (*ptr_SDL_QueryTexture)(SDL_Texture * texture, Uint32 * format, int * access, int * w, int * h);
    int (*ptr_SDL_SetTextureColorMod)(SDL_Texture * texture, Uint8 r, Uint8 g, Uint8 b);
    int (*ptr_SDL_GetTextureColorMod)(SDL_Texture * texture, Uint8 * r, Uint8 * g, Uint8 * b);
    int (*ptr_SDL_SetTextureAlphaMod)(SDL_Texture * texture, Uint8 alpha);
    int (*ptr_SDL_GetTextureAlphaMod)(SDL_Texture * texture, Uint8 * alpha);
    int (*ptr_SDL_SetTextureBlendMode)(SDL_Texture * texture, SDL_BlendMode blendMode);
    int (*ptr_SDL_GetTextureBlendMode)(SDL_Texture * texture, SDL_BlendMode * blendMode);
    int (*ptr_SDL_SetTextureScaleMode)(SDL_Texture * texture, SDL_ScaleMode scaleMode);
    int (*ptr_SDL_GetTextureScaleMode)(SDL_Texture * texture, SDL_ScaleMode * scaleMode);
    int (*ptr_SDL_SetTextureUserData)(SDL_Texture * texture, void * userdata);
    void * (*ptr_SDL_GetTextureUserData)(SDL_Texture * texture);
    int (*ptr_SDL_UpdateTexture)(SDL_Texture * texture, const SDL_Rect * rect, const void * pixels, int pitch);
    int (*ptr_SDL_UpdateYUVTexture)(SDL_Texture * texture, const SDL_Rect * rect, const Uint8 * Yplane, int Ypitch, const Uint8 * Uplane, int Upitch, const Uint8 * Vplane, int Vpitch);
    int (*ptr_SDL_UpdateNVTexture)(SDL_Texture * texture, const SDL_Rect * rect, const Uint8 * Yplane, int Ypitch, const Uint8 * UVplane, int UVpitch);
    int (*ptr_SDL_LockTexture)(SDL_Texture * texture, const SDL_Rect * rect, void * * pixels, int * pitch);
    int (*ptr_SDL_LockTextureToSurface)(SDL_Texture * texture, const SDL_Rect * rect, SDL_Surface * * surface);
    void (*ptr_SDL_UnlockTexture)(SDL_Texture * texture);
    SDL_bool (*ptr_SDL_RenderTargetSupported)(SDL_Renderer * renderer);
    int (*ptr_SDL_SetRenderTarget)(SDL_Renderer * renderer, SDL_Texture * texture);
    SDL_Texture * (*ptr_SDL_GetRenderTarget)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderSetLogicalSize)(SDL_Renderer * renderer, int w, int h);
    void (*ptr_SDL_RenderGetLogicalSize)(SDL_Renderer * renderer, int * w, int * h);
    int (*ptr_SDL_RenderSetIntegerScale)(SDL_Renderer * renderer, SDL_bool enable);
    SDL_bool (*ptr_SDL_RenderGetIntegerScale)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderSetViewport)(SDL_Renderer * renderer, const SDL_Rect * rect);
    void (*ptr_SDL_RenderGetViewport)(SDL_Renderer * renderer, SDL_Rect * rect);
    int (*ptr_SDL_RenderSetClipRect)(SDL_Renderer * renderer, const SDL_Rect * rect);
    void (*ptr_SDL_RenderGetClipRect)(SDL_Renderer * renderer, SDL_Rect * rect);
    SDL_bool (*ptr_SDL_RenderIsClipEnabled)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderSetScale)(SDL_Renderer * renderer, float scaleX, float scaleY);
    void (*ptr_SDL_RenderGetScale)(SDL_Renderer * renderer, float * scaleX, float * scaleY);
    void (*ptr_SDL_RenderWindowToLogical)(SDL_Renderer * renderer, int windowX, int windowY, float * logicalX, float * logicalY);
    void (*ptr_SDL_RenderLogicalToWindow)(SDL_Renderer * renderer, float logicalX, float logicalY, int * windowX, int * windowY);
    int (*ptr_SDL_SetRenderDrawColor)(SDL_Renderer * renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
    int (*ptr_SDL_GetRenderDrawColor)(SDL_Renderer * renderer, Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a);
    int (*ptr_SDL_SetRenderDrawBlendMode)(SDL_Renderer * renderer, SDL_BlendMode blendMode);
    int (*ptr_SDL_GetRenderDrawBlendMode)(SDL_Renderer * renderer, SDL_BlendMode * blendMode);
    int (*ptr_SDL_RenderClear)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderDrawPoint)(SDL_Renderer * renderer, int x, int y);
    int (*ptr_SDL_RenderDrawPoints)(SDL_Renderer * renderer, const SDL_Point * points, int count);
    int (*ptr_SDL_RenderDrawLine)(SDL_Renderer * renderer, int x1, int y1, int x2, int y2);
    int (*ptr_SDL_RenderDrawLines)(SDL_Renderer * renderer, const SDL_Point * points, int count);
    int (*ptr_SDL_RenderDrawRect)(SDL_Renderer * renderer, const SDL_Rect * rect);
    int (*ptr_SDL_RenderDrawRects)(SDL_Renderer * renderer, const SDL_Rect * rects, int count);
    int (*ptr_SDL_RenderFillRect)(SDL_Renderer * renderer, const SDL_Rect * rect);
    int (*ptr_SDL_RenderFillRects)(SDL_Renderer * renderer, const SDL_Rect * rects, int count);
    int (*ptr_SDL_RenderCopy)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect);
    int (*ptr_SDL_RenderCopyEx)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect, const double angle, const SDL_Point * center, const SDL_RendererFlip flip);
    int (*ptr_SDL_RenderDrawPointF)(SDL_Renderer * renderer, float x, float y);
    int (*ptr_SDL_RenderDrawPointsF)(SDL_Renderer * renderer, const SDL_FPoint * points, int count);
    int (*ptr_SDL_RenderDrawLineF)(SDL_Renderer * renderer, float x1, float y1, float x2, float y2);
    int (*ptr_SDL_RenderDrawLinesF)(SDL_Renderer * renderer, const SDL_FPoint * points, int count);
    int (*ptr_SDL_RenderDrawRectF)(SDL_Renderer * renderer, const SDL_FRect * rect);
    int (*ptr_SDL_RenderDrawRectsF)(SDL_Renderer * renderer, const SDL_FRect * rects, int count);
    int (*ptr_SDL_RenderFillRectF)(SDL_Renderer * renderer, const SDL_FRect * rect);
    int (*ptr_SDL_RenderFillRectsF)(SDL_Renderer * renderer, const SDL_FRect * rects, int count);
    int (*ptr_SDL_RenderCopyF)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_FRect * dstrect);
    int (*ptr_SDL_RenderCopyExF)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_FRect * dstrect, const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip);
    int (*ptr_SDL_RenderGeometry)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Vertex * vertices, int num_vertices, const int * indices, int num_indices);
    int (*ptr_SDL_RenderGeometryRaw)(SDL_Renderer * renderer, SDL_Texture * texture, const float * xy, int xy_stride, const SDL_Color * color, int color_stride, const float * uv, int uv_stride, int num_vertices, const void * indices, int num_indices, int size_indices);
    int (*ptr_SDL_RenderReadPixels)(SDL_Renderer * renderer, const SDL_Rect * rect, Uint32 format, void * pixels, int pitch);
    void (*ptr_SDL_RenderPresent)(SDL_Renderer * renderer);
    void (*ptr_SDL_DestroyTexture)(SDL_Texture * texture);
    void (*ptr_SDL_DestroyRenderer)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderFlush)(SDL_Renderer * renderer);
    int (*ptr_SDL_GL_BindTexture)(SDL_Texture * texture, float * texw, float * texh);
    int (*ptr_SDL_GL_UnbindTexture)(SDL_Texture * texture);
    void * (*ptr_SDL_RenderGetMetalLayer)(SDL_Renderer * renderer);
    void * (*ptr_SDL_RenderGetMetalCommandEncoder)(SDL_Renderer * renderer);
    int (*ptr_SDL_RenderSetVSync)(SDL_Renderer * renderer, int vsync);
    SDL_Window * (*ptr_SDL_CreateShapedWindow)(const char * title, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Uint32 flags);
    SDL_bool (*ptr_SDL_IsShapedWindow)(const SDL_Window * window);
    int (*ptr_SDL_SetWindowShape)(SDL_Window * window, SDL_Surface * shape, SDL_WindowShapeMode * shape_mode);
    int (*ptr_SDL_GetShapedWindowMode)(SDL_Window * window, SDL_WindowShapeMode * shape_mode);
    int (*ptr_SDL_LinuxSetThreadPriority)(Sint64 threadID, int priority);
    int (*ptr_SDL_LinuxSetThreadPriorityAndPolicy)(Sint64 threadID, int sdlPriority, int schedPolicy);
    SDL_bool (*ptr_SDL_IsTablet)(void);
    void (*ptr_SDL_OnApplicationWillTerminate)(void);
    void (*ptr_SDL_OnApplicationDidReceiveMemoryWarning)(void);
    void (*ptr_SDL_OnApplicationWillResignActive)(void);
    void (*ptr_SDL_OnApplicationDidEnterBackground)(void);
    void (*ptr_SDL_OnApplicationWillEnterForeground)(void);
    void (*ptr_SDL_OnApplicationDidBecomeActive)(void);
    Uint32 (*ptr_SDL_GetTicks)(void);
    Uint64 (*ptr_SDL_GetTicks64)(void);
    Uint64 (*ptr_SDL_GetPerformanceCounter)(void);
    Uint64 (*ptr_SDL_GetPerformanceFrequency)(void);
    void (*ptr_SDL_Delay)(Uint32 ms);
    SDL_TimerID (*ptr_SDL_AddTimer)(Uint32 interval, SDL_TimerCallback callback, void * param);
    SDL_bool (*ptr_SDL_RemoveTimer)(SDL_TimerID id);
    void (*ptr_SDL_GetVersion)(SDL_version * ver);
    const char * (*ptr_SDL_GetRevision)(void);
    int (*ptr_SDL_GetRevisionNumber)(void);
    SDL_Locale * (*ptr_SDL_GetPreferredLocales)(void);
    int (*ptr_SDL_OpenURL)(const char * url);
    int (*ptr_SDL_Init)(Uint32 flags);
    int (*ptr_SDL_InitSubSystem)(Uint32 flags);
    void (*ptr_SDL_QuitSubSystem)(Uint32 flags);
    Uint32 (*ptr_SDL_WasInit)(Uint32 flags);
    void (*ptr_SDL_Quit)(void);
} stub_funcs;

void *sdl2;

void initialize_sdl2(void) {
    char *candidates_sdl2[] = { "libSDL2-2.0.so", "sdl2.dll" };
    sdl2 = try_find_lib(candidates_sdl2, 2);

    if (!sdl2) {
        fprintf(stderr, "Unable to locate sdl2, exiting!");
        exit(1);
    }

    stub_funcs.ptr_SDL_GetPlatform = try_find_sym(sdl2, "SDL_GetPlatform");
    stub_funcs.ptr_SDL_malloc = try_find_sym(sdl2, "SDL_malloc");
    stub_funcs.ptr_SDL_calloc = try_find_sym(sdl2, "SDL_calloc");
    stub_funcs.ptr_SDL_realloc = try_find_sym(sdl2, "SDL_realloc");
    stub_funcs.ptr_SDL_free = try_find_sym(sdl2, "SDL_free");
    stub_funcs.ptr_SDL_GetOriginalMemoryFunctions = try_find_sym(sdl2, "SDL_GetOriginalMemoryFunctions");
    stub_funcs.ptr_SDL_GetMemoryFunctions = try_find_sym(sdl2, "SDL_GetMemoryFunctions");
    stub_funcs.ptr_SDL_SetMemoryFunctions = try_find_sym(sdl2, "SDL_SetMemoryFunctions");
    stub_funcs.ptr_SDL_GetNumAllocations = try_find_sym(sdl2, "SDL_GetNumAllocations");
    stub_funcs.ptr_SDL_getenv = try_find_sym(sdl2, "SDL_getenv");
    stub_funcs.ptr_SDL_setenv = try_find_sym(sdl2, "SDL_setenv");
    stub_funcs.ptr_SDL_qsort = try_find_sym(sdl2, "SDL_qsort");
    stub_funcs.ptr_SDL_bsearch = try_find_sym(sdl2, "SDL_bsearch");
    stub_funcs.ptr_SDL_abs = try_find_sym(sdl2, "SDL_abs");
    stub_funcs.ptr_SDL_isalpha = try_find_sym(sdl2, "SDL_isalpha");
    stub_funcs.ptr_SDL_isalnum = try_find_sym(sdl2, "SDL_isalnum");
    stub_funcs.ptr_SDL_isblank = try_find_sym(sdl2, "SDL_isblank");
    stub_funcs.ptr_SDL_iscntrl = try_find_sym(sdl2, "SDL_iscntrl");
    stub_funcs.ptr_SDL_isdigit = try_find_sym(sdl2, "SDL_isdigit");
    stub_funcs.ptr_SDL_isxdigit = try_find_sym(sdl2, "SDL_isxdigit");
    stub_funcs.ptr_SDL_ispunct = try_find_sym(sdl2, "SDL_ispunct");
    stub_funcs.ptr_SDL_isspace = try_find_sym(sdl2, "SDL_isspace");
    stub_funcs.ptr_SDL_isupper = try_find_sym(sdl2, "SDL_isupper");
    stub_funcs.ptr_SDL_islower = try_find_sym(sdl2, "SDL_islower");
    stub_funcs.ptr_SDL_isprint = try_find_sym(sdl2, "SDL_isprint");
    stub_funcs.ptr_SDL_isgraph = try_find_sym(sdl2, "SDL_isgraph");
    stub_funcs.ptr_SDL_toupper = try_find_sym(sdl2, "SDL_toupper");
    stub_funcs.ptr_SDL_tolower = try_find_sym(sdl2, "SDL_tolower");
    stub_funcs.ptr_SDL_crc16 = try_find_sym(sdl2, "SDL_crc16");
    stub_funcs.ptr_SDL_crc32 = try_find_sym(sdl2, "SDL_crc32");
    stub_funcs.ptr_SDL_memset = try_find_sym(sdl2, "SDL_memset");
    stub_funcs.ptr_SDL_memcpy = try_find_sym(sdl2, "SDL_memcpy");
    stub_funcs.ptr_SDL_memmove = try_find_sym(sdl2, "SDL_memmove");
    stub_funcs.ptr_SDL_memcmp = try_find_sym(sdl2, "SDL_memcmp");
    stub_funcs.ptr_SDL_wcslen = try_find_sym(sdl2, "SDL_wcslen");
    stub_funcs.ptr_SDL_wcslcpy = try_find_sym(sdl2, "SDL_wcslcpy");
    stub_funcs.ptr_SDL_wcslcat = try_find_sym(sdl2, "SDL_wcslcat");
    stub_funcs.ptr_SDL_wcsdup = try_find_sym(sdl2, "SDL_wcsdup");
    stub_funcs.ptr_SDL_wcsstr = try_find_sym(sdl2, "SDL_wcsstr");
    stub_funcs.ptr_SDL_wcscmp = try_find_sym(sdl2, "SDL_wcscmp");
    stub_funcs.ptr_SDL_wcsncmp = try_find_sym(sdl2, "SDL_wcsncmp");
    stub_funcs.ptr_SDL_wcscasecmp = try_find_sym(sdl2, "SDL_wcscasecmp");
    stub_funcs.ptr_SDL_wcsncasecmp = try_find_sym(sdl2, "SDL_wcsncasecmp");
    stub_funcs.ptr_SDL_strlen = try_find_sym(sdl2, "SDL_strlen");
    stub_funcs.ptr_SDL_strlcpy = try_find_sym(sdl2, "SDL_strlcpy");
    stub_funcs.ptr_SDL_utf8strlcpy = try_find_sym(sdl2, "SDL_utf8strlcpy");
    stub_funcs.ptr_SDL_strlcat = try_find_sym(sdl2, "SDL_strlcat");
    stub_funcs.ptr_SDL_strdup = try_find_sym(sdl2, "SDL_strdup");
    stub_funcs.ptr_SDL_strrev = try_find_sym(sdl2, "SDL_strrev");
    stub_funcs.ptr_SDL_strupr = try_find_sym(sdl2, "SDL_strupr");
    stub_funcs.ptr_SDL_strlwr = try_find_sym(sdl2, "SDL_strlwr");
    stub_funcs.ptr_SDL_strchr = try_find_sym(sdl2, "SDL_strchr");
    stub_funcs.ptr_SDL_strrchr = try_find_sym(sdl2, "SDL_strrchr");
    stub_funcs.ptr_SDL_strstr = try_find_sym(sdl2, "SDL_strstr");
    stub_funcs.ptr_SDL_strcasestr = try_find_sym(sdl2, "SDL_strcasestr");
    stub_funcs.ptr_SDL_strtokr = try_find_sym(sdl2, "SDL_strtokr");
    stub_funcs.ptr_SDL_utf8strlen = try_find_sym(sdl2, "SDL_utf8strlen");
    stub_funcs.ptr_SDL_utf8strnlen = try_find_sym(sdl2, "SDL_utf8strnlen");
    stub_funcs.ptr_SDL_itoa = try_find_sym(sdl2, "SDL_itoa");
    stub_funcs.ptr_SDL_uitoa = try_find_sym(sdl2, "SDL_uitoa");
    stub_funcs.ptr_SDL_ltoa = try_find_sym(sdl2, "SDL_ltoa");
    stub_funcs.ptr_SDL_ultoa = try_find_sym(sdl2, "SDL_ultoa");
    stub_funcs.ptr_SDL_lltoa = try_find_sym(sdl2, "SDL_lltoa");
    stub_funcs.ptr_SDL_ulltoa = try_find_sym(sdl2, "SDL_ulltoa");
    stub_funcs.ptr_SDL_atoi = try_find_sym(sdl2, "SDL_atoi");
    stub_funcs.ptr_SDL_atof = try_find_sym(sdl2, "SDL_atof");
    stub_funcs.ptr_SDL_strtol = try_find_sym(sdl2, "SDL_strtol");
    stub_funcs.ptr_SDL_strtoul = try_find_sym(sdl2, "SDL_strtoul");
    stub_funcs.ptr_SDL_strtoll = try_find_sym(sdl2, "SDL_strtoll");
    stub_funcs.ptr_SDL_strtoull = try_find_sym(sdl2, "SDL_strtoull");
    stub_funcs.ptr_SDL_strtod = try_find_sym(sdl2, "SDL_strtod");
    stub_funcs.ptr_SDL_strcmp = try_find_sym(sdl2, "SDL_strcmp");
    stub_funcs.ptr_SDL_strncmp = try_find_sym(sdl2, "SDL_strncmp");
    stub_funcs.ptr_SDL_strcasecmp = try_find_sym(sdl2, "SDL_strcasecmp");
    stub_funcs.ptr_SDL_strncasecmp = try_find_sym(sdl2, "SDL_strncasecmp");
    stub_funcs.ptr_SDL_sscanf = try_find_sym(sdl2, "SDL_sscanf");
    stub_funcs.ptr_SDL_vsscanf = try_find_sym(sdl2, "SDL_vsscanf");
    stub_funcs.ptr_SDL_snprintf = try_find_sym(sdl2, "SDL_snprintf");
    stub_funcs.ptr_SDL_vsnprintf = try_find_sym(sdl2, "SDL_vsnprintf");
    stub_funcs.ptr_SDL_asprintf = try_find_sym(sdl2, "SDL_asprintf");
    stub_funcs.ptr_SDL_vasprintf = try_find_sym(sdl2, "SDL_vasprintf");
    stub_funcs.ptr_SDL_acos = try_find_sym(sdl2, "SDL_acos");
    stub_funcs.ptr_SDL_acosf = try_find_sym(sdl2, "SDL_acosf");
    stub_funcs.ptr_SDL_asin = try_find_sym(sdl2, "SDL_asin");
    stub_funcs.ptr_SDL_asinf = try_find_sym(sdl2, "SDL_asinf");
    stub_funcs.ptr_SDL_atan = try_find_sym(sdl2, "SDL_atan");
    stub_funcs.ptr_SDL_atanf = try_find_sym(sdl2, "SDL_atanf");
    stub_funcs.ptr_SDL_atan2 = try_find_sym(sdl2, "SDL_atan2");
    stub_funcs.ptr_SDL_atan2f = try_find_sym(sdl2, "SDL_atan2f");
    stub_funcs.ptr_SDL_ceil = try_find_sym(sdl2, "SDL_ceil");
    stub_funcs.ptr_SDL_ceilf = try_find_sym(sdl2, "SDL_ceilf");
    stub_funcs.ptr_SDL_copysign = try_find_sym(sdl2, "SDL_copysign");
    stub_funcs.ptr_SDL_copysignf = try_find_sym(sdl2, "SDL_copysignf");
    stub_funcs.ptr_SDL_cos = try_find_sym(sdl2, "SDL_cos");
    stub_funcs.ptr_SDL_cosf = try_find_sym(sdl2, "SDL_cosf");
    stub_funcs.ptr_SDL_exp = try_find_sym(sdl2, "SDL_exp");
    stub_funcs.ptr_SDL_expf = try_find_sym(sdl2, "SDL_expf");
    stub_funcs.ptr_SDL_fabs = try_find_sym(sdl2, "SDL_fabs");
    stub_funcs.ptr_SDL_fabsf = try_find_sym(sdl2, "SDL_fabsf");
    stub_funcs.ptr_SDL_floor = try_find_sym(sdl2, "SDL_floor");
    stub_funcs.ptr_SDL_floorf = try_find_sym(sdl2, "SDL_floorf");
    stub_funcs.ptr_SDL_trunc = try_find_sym(sdl2, "SDL_trunc");
    stub_funcs.ptr_SDL_truncf = try_find_sym(sdl2, "SDL_truncf");
    stub_funcs.ptr_SDL_fmod = try_find_sym(sdl2, "SDL_fmod");
    stub_funcs.ptr_SDL_fmodf = try_find_sym(sdl2, "SDL_fmodf");
    stub_funcs.ptr_SDL_log = try_find_sym(sdl2, "SDL_log");
    stub_funcs.ptr_SDL_logf = try_find_sym(sdl2, "SDL_logf");
    stub_funcs.ptr_SDL_log10 = try_find_sym(sdl2, "SDL_log10");
    stub_funcs.ptr_SDL_log10f = try_find_sym(sdl2, "SDL_log10f");
    stub_funcs.ptr_SDL_pow = try_find_sym(sdl2, "SDL_pow");
    stub_funcs.ptr_SDL_powf = try_find_sym(sdl2, "SDL_powf");
    stub_funcs.ptr_SDL_round = try_find_sym(sdl2, "SDL_round");
    stub_funcs.ptr_SDL_roundf = try_find_sym(sdl2, "SDL_roundf");
    stub_funcs.ptr_SDL_lround = try_find_sym(sdl2, "SDL_lround");
    stub_funcs.ptr_SDL_lroundf = try_find_sym(sdl2, "SDL_lroundf");
    stub_funcs.ptr_SDL_scalbn = try_find_sym(sdl2, "SDL_scalbn");
    stub_funcs.ptr_SDL_scalbnf = try_find_sym(sdl2, "SDL_scalbnf");
    stub_funcs.ptr_SDL_sin = try_find_sym(sdl2, "SDL_sin");
    stub_funcs.ptr_SDL_sinf = try_find_sym(sdl2, "SDL_sinf");
    stub_funcs.ptr_SDL_sqrt = try_find_sym(sdl2, "SDL_sqrt");
    stub_funcs.ptr_SDL_sqrtf = try_find_sym(sdl2, "SDL_sqrtf");
    stub_funcs.ptr_SDL_tan = try_find_sym(sdl2, "SDL_tan");
    stub_funcs.ptr_SDL_tanf = try_find_sym(sdl2, "SDL_tanf");
    stub_funcs.ptr_SDL_iconv_open = try_find_sym(sdl2, "SDL_iconv_open");
    stub_funcs.ptr_SDL_iconv_close = try_find_sym(sdl2, "SDL_iconv_close");
    stub_funcs.ptr_SDL_iconv = try_find_sym(sdl2, "SDL_iconv");
    stub_funcs.ptr_SDL_iconv_string = try_find_sym(sdl2, "SDL_iconv_string");
    stub_funcs.ptr_SDL_main = try_find_sym(sdl2, "SDL_main");
    stub_funcs.ptr_SDL_SetMainReady = try_find_sym(sdl2, "SDL_SetMainReady");
    stub_funcs.ptr_SDL_ReportAssertion = try_find_sym(sdl2, "SDL_ReportAssertion");
    stub_funcs.ptr_SDL_SetAssertionHandler = try_find_sym(sdl2, "SDL_SetAssertionHandler");
    stub_funcs.ptr_SDL_GetDefaultAssertionHandler = try_find_sym(sdl2, "SDL_GetDefaultAssertionHandler");
    stub_funcs.ptr_SDL_GetAssertionHandler = try_find_sym(sdl2, "SDL_GetAssertionHandler");
    stub_funcs.ptr_SDL_GetAssertionReport = try_find_sym(sdl2, "SDL_GetAssertionReport");
    stub_funcs.ptr_SDL_ResetAssertionReport = try_find_sym(sdl2, "SDL_ResetAssertionReport");
    stub_funcs.ptr_SDL_AtomicTryLock = try_find_sym(sdl2, "SDL_AtomicTryLock");
    stub_funcs.ptr_SDL_AtomicLock = try_find_sym(sdl2, "SDL_AtomicLock");
    stub_funcs.ptr_SDL_AtomicUnlock = try_find_sym(sdl2, "SDL_AtomicUnlock");
    stub_funcs.ptr_SDL_MemoryBarrierReleaseFunction = try_find_sym(sdl2, "SDL_MemoryBarrierReleaseFunction");
    stub_funcs.ptr_SDL_MemoryBarrierAcquireFunction = try_find_sym(sdl2, "SDL_MemoryBarrierAcquireFunction");
    stub_funcs.ptr_SDL_AtomicCAS = try_find_sym(sdl2, "SDL_AtomicCAS");
    stub_funcs.ptr_SDL_AtomicSet = try_find_sym(sdl2, "SDL_AtomicSet");
    stub_funcs.ptr_SDL_AtomicGet = try_find_sym(sdl2, "SDL_AtomicGet");
    stub_funcs.ptr_SDL_AtomicAdd = try_find_sym(sdl2, "SDL_AtomicAdd");
    stub_funcs.ptr_SDL_AtomicCASPtr = try_find_sym(sdl2, "SDL_AtomicCASPtr");
    stub_funcs.ptr_SDL_AtomicSetPtr = try_find_sym(sdl2, "SDL_AtomicSetPtr");
    stub_funcs.ptr_SDL_AtomicGetPtr = try_find_sym(sdl2, "SDL_AtomicGetPtr");
    stub_funcs.ptr_SDL_GetError = try_find_sym(sdl2, "SDL_GetError");
    stub_funcs.ptr_SDL_GetErrorMsg = try_find_sym(sdl2, "SDL_GetErrorMsg");
    stub_funcs.ptr_SDL_ClearError = try_find_sym(sdl2, "SDL_ClearError");
    stub_funcs.ptr_SDL_Error = try_find_sym(sdl2, "SDL_Error");
    stub_funcs.ptr_SDL_CreateMutex = try_find_sym(sdl2, "SDL_CreateMutex");
    stub_funcs.ptr_SDL_LockMutex = try_find_sym(sdl2, "SDL_LockMutex");
    stub_funcs.ptr_SDL_TryLockMutex = try_find_sym(sdl2, "SDL_TryLockMutex");
    stub_funcs.ptr_SDL_UnlockMutex = try_find_sym(sdl2, "SDL_UnlockMutex");
    stub_funcs.ptr_SDL_DestroyMutex = try_find_sym(sdl2, "SDL_DestroyMutex");
    stub_funcs.ptr_SDL_CreateSemaphore = try_find_sym(sdl2, "SDL_CreateSemaphore");
    stub_funcs.ptr_SDL_DestroySemaphore = try_find_sym(sdl2, "SDL_DestroySemaphore");
    stub_funcs.ptr_SDL_SemWait = try_find_sym(sdl2, "SDL_SemWait");
    stub_funcs.ptr_SDL_SemTryWait = try_find_sym(sdl2, "SDL_SemTryWait");
    stub_funcs.ptr_SDL_SemWaitTimeout = try_find_sym(sdl2, "SDL_SemWaitTimeout");
    stub_funcs.ptr_SDL_SemPost = try_find_sym(sdl2, "SDL_SemPost");
    stub_funcs.ptr_SDL_SemValue = try_find_sym(sdl2, "SDL_SemValue");
    stub_funcs.ptr_SDL_CreateCond = try_find_sym(sdl2, "SDL_CreateCond");
    stub_funcs.ptr_SDL_DestroyCond = try_find_sym(sdl2, "SDL_DestroyCond");
    stub_funcs.ptr_SDL_CondSignal = try_find_sym(sdl2, "SDL_CondSignal");
    stub_funcs.ptr_SDL_CondBroadcast = try_find_sym(sdl2, "SDL_CondBroadcast");
    stub_funcs.ptr_SDL_CondWait = try_find_sym(sdl2, "SDL_CondWait");
    stub_funcs.ptr_SDL_CondWaitTimeout = try_find_sym(sdl2, "SDL_CondWaitTimeout");
    stub_funcs.ptr_SDL_CreateThread = try_find_sym(sdl2, "SDL_CreateThread");
    stub_funcs.ptr_SDL_CreateThreadWithStackSize = try_find_sym(sdl2, "SDL_CreateThreadWithStackSize");
    stub_funcs.ptr_SDL_GetThreadName = try_find_sym(sdl2, "SDL_GetThreadName");
    stub_funcs.ptr_SDL_ThreadID = try_find_sym(sdl2, "SDL_ThreadID");
    stub_funcs.ptr_SDL_GetThreadID = try_find_sym(sdl2, "SDL_GetThreadID");
    stub_funcs.ptr_SDL_SetThreadPriority = try_find_sym(sdl2, "SDL_SetThreadPriority");
    stub_funcs.ptr_SDL_WaitThread = try_find_sym(sdl2, "SDL_WaitThread");
    stub_funcs.ptr_SDL_DetachThread = try_find_sym(sdl2, "SDL_DetachThread");
    stub_funcs.ptr_SDL_TLSCreate = try_find_sym(sdl2, "SDL_TLSCreate");
    stub_funcs.ptr_SDL_TLSGet = try_find_sym(sdl2, "SDL_TLSGet");
    stub_funcs.ptr_SDL_TLSSet = try_find_sym(sdl2, "SDL_TLSSet");
    stub_funcs.ptr_SDL_TLSCleanup = try_find_sym(sdl2, "SDL_TLSCleanup");
    stub_funcs.ptr_SDL_RWFromFile = try_find_sym(sdl2, "SDL_RWFromFile");
    stub_funcs.ptr_SDL_RWFromFP = try_find_sym(sdl2, "SDL_RWFromFP");
    stub_funcs.ptr_SDL_RWFromMem = try_find_sym(sdl2, "SDL_RWFromMem");
    stub_funcs.ptr_SDL_RWFromConstMem = try_find_sym(sdl2, "SDL_RWFromConstMem");
    stub_funcs.ptr_SDL_AllocRW = try_find_sym(sdl2, "SDL_AllocRW");
    stub_funcs.ptr_SDL_FreeRW = try_find_sym(sdl2, "SDL_FreeRW");
    stub_funcs.ptr_SDL_RWsize = try_find_sym(sdl2, "SDL_RWsize");
    stub_funcs.ptr_SDL_RWseek = try_find_sym(sdl2, "SDL_RWseek");
    stub_funcs.ptr_SDL_RWtell = try_find_sym(sdl2, "SDL_RWtell");
    stub_funcs.ptr_SDL_RWread = try_find_sym(sdl2, "SDL_RWread");
    stub_funcs.ptr_SDL_RWwrite = try_find_sym(sdl2, "SDL_RWwrite");
    stub_funcs.ptr_SDL_RWclose = try_find_sym(sdl2, "SDL_RWclose");
    stub_funcs.ptr_SDL_LoadFile_RW = try_find_sym(sdl2, "SDL_LoadFile_RW");
    stub_funcs.ptr_SDL_LoadFile = try_find_sym(sdl2, "SDL_LoadFile");
    stub_funcs.ptr_SDL_ReadU8 = try_find_sym(sdl2, "SDL_ReadU8");
    stub_funcs.ptr_SDL_ReadLE16 = try_find_sym(sdl2, "SDL_ReadLE16");
    stub_funcs.ptr_SDL_ReadBE16 = try_find_sym(sdl2, "SDL_ReadBE16");
    stub_funcs.ptr_SDL_ReadLE32 = try_find_sym(sdl2, "SDL_ReadLE32");
    stub_funcs.ptr_SDL_ReadBE32 = try_find_sym(sdl2, "SDL_ReadBE32");
    stub_funcs.ptr_SDL_ReadLE64 = try_find_sym(sdl2, "SDL_ReadLE64");
    stub_funcs.ptr_SDL_ReadBE64 = try_find_sym(sdl2, "SDL_ReadBE64");
    stub_funcs.ptr_SDL_WriteU8 = try_find_sym(sdl2, "SDL_WriteU8");
    stub_funcs.ptr_SDL_WriteLE16 = try_find_sym(sdl2, "SDL_WriteLE16");
    stub_funcs.ptr_SDL_WriteBE16 = try_find_sym(sdl2, "SDL_WriteBE16");
    stub_funcs.ptr_SDL_WriteLE32 = try_find_sym(sdl2, "SDL_WriteLE32");
    stub_funcs.ptr_SDL_WriteBE32 = try_find_sym(sdl2, "SDL_WriteBE32");
    stub_funcs.ptr_SDL_WriteLE64 = try_find_sym(sdl2, "SDL_WriteLE64");
    stub_funcs.ptr_SDL_WriteBE64 = try_find_sym(sdl2, "SDL_WriteBE64");
    stub_funcs.ptr_SDL_GetNumAudioDrivers = try_find_sym(sdl2, "SDL_GetNumAudioDrivers");
    stub_funcs.ptr_SDL_GetAudioDriver = try_find_sym(sdl2, "SDL_GetAudioDriver");
    stub_funcs.ptr_SDL_AudioInit = try_find_sym(sdl2, "SDL_AudioInit");
    stub_funcs.ptr_SDL_AudioQuit = try_find_sym(sdl2, "SDL_AudioQuit");
    stub_funcs.ptr_SDL_GetCurrentAudioDriver = try_find_sym(sdl2, "SDL_GetCurrentAudioDriver");
    stub_funcs.ptr_SDL_OpenAudio = try_find_sym(sdl2, "SDL_OpenAudio");
    stub_funcs.ptr_SDL_GetNumAudioDevices = try_find_sym(sdl2, "SDL_GetNumAudioDevices");
    stub_funcs.ptr_SDL_GetAudioDeviceName = try_find_sym(sdl2, "SDL_GetAudioDeviceName");
    stub_funcs.ptr_SDL_GetAudioDeviceSpec = try_find_sym(sdl2, "SDL_GetAudioDeviceSpec");
    stub_funcs.ptr_SDL_GetDefaultAudioInfo = try_find_sym(sdl2, "SDL_GetDefaultAudioInfo");
    stub_funcs.ptr_SDL_OpenAudioDevice = try_find_sym(sdl2, "SDL_OpenAudioDevice");
    stub_funcs.ptr_SDL_GetAudioStatus = try_find_sym(sdl2, "SDL_GetAudioStatus");
    stub_funcs.ptr_SDL_GetAudioDeviceStatus = try_find_sym(sdl2, "SDL_GetAudioDeviceStatus");
    stub_funcs.ptr_SDL_PauseAudio = try_find_sym(sdl2, "SDL_PauseAudio");
    stub_funcs.ptr_SDL_PauseAudioDevice = try_find_sym(sdl2, "SDL_PauseAudioDevice");
    stub_funcs.ptr_SDL_LoadWAV_RW = try_find_sym(sdl2, "SDL_LoadWAV_RW");
    stub_funcs.ptr_SDL_FreeWAV = try_find_sym(sdl2, "SDL_FreeWAV");
    stub_funcs.ptr_SDL_BuildAudioCVT = try_find_sym(sdl2, "SDL_BuildAudioCVT");
    stub_funcs.ptr_SDL_ConvertAudio = try_find_sym(sdl2, "SDL_ConvertAudio");
    stub_funcs.ptr_SDL_NewAudioStream = try_find_sym(sdl2, "SDL_NewAudioStream");
    stub_funcs.ptr_SDL_AudioStreamPut = try_find_sym(sdl2, "SDL_AudioStreamPut");
    stub_funcs.ptr_SDL_AudioStreamGet = try_find_sym(sdl2, "SDL_AudioStreamGet");
    stub_funcs.ptr_SDL_AudioStreamAvailable = try_find_sym(sdl2, "SDL_AudioStreamAvailable");
    stub_funcs.ptr_SDL_AudioStreamFlush = try_find_sym(sdl2, "SDL_AudioStreamFlush");
    stub_funcs.ptr_SDL_AudioStreamClear = try_find_sym(sdl2, "SDL_AudioStreamClear");
    stub_funcs.ptr_SDL_FreeAudioStream = try_find_sym(sdl2, "SDL_FreeAudioStream");
    stub_funcs.ptr_SDL_MixAudio = try_find_sym(sdl2, "SDL_MixAudio");
    stub_funcs.ptr_SDL_MixAudioFormat = try_find_sym(sdl2, "SDL_MixAudioFormat");
    stub_funcs.ptr_SDL_QueueAudio = try_find_sym(sdl2, "SDL_QueueAudio");
    stub_funcs.ptr_SDL_DequeueAudio = try_find_sym(sdl2, "SDL_DequeueAudio");
    stub_funcs.ptr_SDL_GetQueuedAudioSize = try_find_sym(sdl2, "SDL_GetQueuedAudioSize");
    stub_funcs.ptr_SDL_ClearQueuedAudio = try_find_sym(sdl2, "SDL_ClearQueuedAudio");
    stub_funcs.ptr_SDL_LockAudio = try_find_sym(sdl2, "SDL_LockAudio");
    stub_funcs.ptr_SDL_LockAudioDevice = try_find_sym(sdl2, "SDL_LockAudioDevice");
    stub_funcs.ptr_SDL_UnlockAudio = try_find_sym(sdl2, "SDL_UnlockAudio");
    stub_funcs.ptr_SDL_UnlockAudioDevice = try_find_sym(sdl2, "SDL_UnlockAudioDevice");
    stub_funcs.ptr_SDL_CloseAudio = try_find_sym(sdl2, "SDL_CloseAudio");
    stub_funcs.ptr_SDL_CloseAudioDevice = try_find_sym(sdl2, "SDL_CloseAudioDevice");
    stub_funcs.ptr_SDL_SetClipboardText = try_find_sym(sdl2, "SDL_SetClipboardText");
    stub_funcs.ptr_SDL_GetClipboardText = try_find_sym(sdl2, "SDL_GetClipboardText");
    stub_funcs.ptr_SDL_HasClipboardText = try_find_sym(sdl2, "SDL_HasClipboardText");
    stub_funcs.ptr_SDL_SetPrimarySelectionText = try_find_sym(sdl2, "SDL_SetPrimarySelectionText");
    stub_funcs.ptr_SDL_GetPrimarySelectionText = try_find_sym(sdl2, "SDL_GetPrimarySelectionText");
    stub_funcs.ptr_SDL_HasPrimarySelectionText = try_find_sym(sdl2, "SDL_HasPrimarySelectionText");
    stub_funcs.ptr_SDL_GetCPUCount = try_find_sym(sdl2, "SDL_GetCPUCount");
    stub_funcs.ptr_SDL_GetCPUCacheLineSize = try_find_sym(sdl2, "SDL_GetCPUCacheLineSize");
    stub_funcs.ptr_SDL_HasRDTSC = try_find_sym(sdl2, "SDL_HasRDTSC");
    stub_funcs.ptr_SDL_HasAltiVec = try_find_sym(sdl2, "SDL_HasAltiVec");
    stub_funcs.ptr_SDL_HasMMX = try_find_sym(sdl2, "SDL_HasMMX");
    stub_funcs.ptr_SDL_Has3DNow = try_find_sym(sdl2, "SDL_Has3DNow");
    stub_funcs.ptr_SDL_HasSSE = try_find_sym(sdl2, "SDL_HasSSE");
    stub_funcs.ptr_SDL_HasSSE2 = try_find_sym(sdl2, "SDL_HasSSE2");
    stub_funcs.ptr_SDL_HasSSE3 = try_find_sym(sdl2, "SDL_HasSSE3");
    stub_funcs.ptr_SDL_HasSSE41 = try_find_sym(sdl2, "SDL_HasSSE41");
    stub_funcs.ptr_SDL_HasSSE42 = try_find_sym(sdl2, "SDL_HasSSE42");
    stub_funcs.ptr_SDL_HasAVX = try_find_sym(sdl2, "SDL_HasAVX");
    stub_funcs.ptr_SDL_HasAVX2 = try_find_sym(sdl2, "SDL_HasAVX2");
    stub_funcs.ptr_SDL_HasAVX512F = try_find_sym(sdl2, "SDL_HasAVX512F");
    stub_funcs.ptr_SDL_HasARMSIMD = try_find_sym(sdl2, "SDL_HasARMSIMD");
    stub_funcs.ptr_SDL_HasNEON = try_find_sym(sdl2, "SDL_HasNEON");
    stub_funcs.ptr_SDL_HasLSX = try_find_sym(sdl2, "SDL_HasLSX");
    stub_funcs.ptr_SDL_HasLASX = try_find_sym(sdl2, "SDL_HasLASX");
    stub_funcs.ptr_SDL_GetSystemRAM = try_find_sym(sdl2, "SDL_GetSystemRAM");
    stub_funcs.ptr_SDL_SIMDGetAlignment = try_find_sym(sdl2, "SDL_SIMDGetAlignment");
    stub_funcs.ptr_SDL_SIMDAlloc = try_find_sym(sdl2, "SDL_SIMDAlloc");
    stub_funcs.ptr_SDL_SIMDRealloc = try_find_sym(sdl2, "SDL_SIMDRealloc");
    stub_funcs.ptr_SDL_SIMDFree = try_find_sym(sdl2, "SDL_SIMDFree");
    stub_funcs.ptr_SDL_GetPixelFormatName = try_find_sym(sdl2, "SDL_GetPixelFormatName");
    stub_funcs.ptr_SDL_PixelFormatEnumToMasks = try_find_sym(sdl2, "SDL_PixelFormatEnumToMasks");
    stub_funcs.ptr_SDL_MasksToPixelFormatEnum = try_find_sym(sdl2, "SDL_MasksToPixelFormatEnum");
    stub_funcs.ptr_SDL_AllocFormat = try_find_sym(sdl2, "SDL_AllocFormat");
    stub_funcs.ptr_SDL_FreeFormat = try_find_sym(sdl2, "SDL_FreeFormat");
    stub_funcs.ptr_SDL_AllocPalette = try_find_sym(sdl2, "SDL_AllocPalette");
    stub_funcs.ptr_SDL_SetPixelFormatPalette = try_find_sym(sdl2, "SDL_SetPixelFormatPalette");
    stub_funcs.ptr_SDL_SetPaletteColors = try_find_sym(sdl2, "SDL_SetPaletteColors");
    stub_funcs.ptr_SDL_FreePalette = try_find_sym(sdl2, "SDL_FreePalette");
    stub_funcs.ptr_SDL_MapRGB = try_find_sym(sdl2, "SDL_MapRGB");
    stub_funcs.ptr_SDL_MapRGBA = try_find_sym(sdl2, "SDL_MapRGBA");
    stub_funcs.ptr_SDL_GetRGB = try_find_sym(sdl2, "SDL_GetRGB");
    stub_funcs.ptr_SDL_GetRGBA = try_find_sym(sdl2, "SDL_GetRGBA");
    stub_funcs.ptr_SDL_CalculateGammaRamp = try_find_sym(sdl2, "SDL_CalculateGammaRamp");
    stub_funcs.ptr_SDL_HasIntersection = try_find_sym(sdl2, "SDL_HasIntersection");
    stub_funcs.ptr_SDL_IntersectRect = try_find_sym(sdl2, "SDL_IntersectRect");
    stub_funcs.ptr_SDL_UnionRect = try_find_sym(sdl2, "SDL_UnionRect");
    stub_funcs.ptr_SDL_EnclosePoints = try_find_sym(sdl2, "SDL_EnclosePoints");
    stub_funcs.ptr_SDL_IntersectRectAndLine = try_find_sym(sdl2, "SDL_IntersectRectAndLine");
    stub_funcs.ptr_SDL_HasIntersectionF = try_find_sym(sdl2, "SDL_HasIntersectionF");
    stub_funcs.ptr_SDL_IntersectFRect = try_find_sym(sdl2, "SDL_IntersectFRect");
    stub_funcs.ptr_SDL_UnionFRect = try_find_sym(sdl2, "SDL_UnionFRect");
    stub_funcs.ptr_SDL_EncloseFPoints = try_find_sym(sdl2, "SDL_EncloseFPoints");
    stub_funcs.ptr_SDL_IntersectFRectAndLine = try_find_sym(sdl2, "SDL_IntersectFRectAndLine");
    stub_funcs.ptr_SDL_ComposeCustomBlendMode = try_find_sym(sdl2, "SDL_ComposeCustomBlendMode");
    stub_funcs.ptr_SDL_CreateRGBSurface = try_find_sym(sdl2, "SDL_CreateRGBSurface");
    stub_funcs.ptr_SDL_CreateRGBSurfaceWithFormat = try_find_sym(sdl2, "SDL_CreateRGBSurfaceWithFormat");
    stub_funcs.ptr_SDL_CreateRGBSurfaceFrom = try_find_sym(sdl2, "SDL_CreateRGBSurfaceFrom");
    stub_funcs.ptr_SDL_CreateRGBSurfaceWithFormatFrom = try_find_sym(sdl2, "SDL_CreateRGBSurfaceWithFormatFrom");
    stub_funcs.ptr_SDL_FreeSurface = try_find_sym(sdl2, "SDL_FreeSurface");
    stub_funcs.ptr_SDL_SetSurfacePalette = try_find_sym(sdl2, "SDL_SetSurfacePalette");
    stub_funcs.ptr_SDL_LockSurface = try_find_sym(sdl2, "SDL_LockSurface");
    stub_funcs.ptr_SDL_UnlockSurface = try_find_sym(sdl2, "SDL_UnlockSurface");
    stub_funcs.ptr_SDL_LoadBMP_RW = try_find_sym(sdl2, "SDL_LoadBMP_RW");
    stub_funcs.ptr_SDL_SaveBMP_RW = try_find_sym(sdl2, "SDL_SaveBMP_RW");
    stub_funcs.ptr_SDL_SetSurfaceRLE = try_find_sym(sdl2, "SDL_SetSurfaceRLE");
    stub_funcs.ptr_SDL_HasSurfaceRLE = try_find_sym(sdl2, "SDL_HasSurfaceRLE");
    stub_funcs.ptr_SDL_SetColorKey = try_find_sym(sdl2, "SDL_SetColorKey");
    stub_funcs.ptr_SDL_HasColorKey = try_find_sym(sdl2, "SDL_HasColorKey");
    stub_funcs.ptr_SDL_GetColorKey = try_find_sym(sdl2, "SDL_GetColorKey");
    stub_funcs.ptr_SDL_SetSurfaceColorMod = try_find_sym(sdl2, "SDL_SetSurfaceColorMod");
    stub_funcs.ptr_SDL_GetSurfaceColorMod = try_find_sym(sdl2, "SDL_GetSurfaceColorMod");
    stub_funcs.ptr_SDL_SetSurfaceAlphaMod = try_find_sym(sdl2, "SDL_SetSurfaceAlphaMod");
    stub_funcs.ptr_SDL_GetSurfaceAlphaMod = try_find_sym(sdl2, "SDL_GetSurfaceAlphaMod");
    stub_funcs.ptr_SDL_SetSurfaceBlendMode = try_find_sym(sdl2, "SDL_SetSurfaceBlendMode");
    stub_funcs.ptr_SDL_GetSurfaceBlendMode = try_find_sym(sdl2, "SDL_GetSurfaceBlendMode");
    stub_funcs.ptr_SDL_SetClipRect = try_find_sym(sdl2, "SDL_SetClipRect");
    stub_funcs.ptr_SDL_GetClipRect = try_find_sym(sdl2, "SDL_GetClipRect");
    stub_funcs.ptr_SDL_DuplicateSurface = try_find_sym(sdl2, "SDL_DuplicateSurface");
    stub_funcs.ptr_SDL_ConvertSurface = try_find_sym(sdl2, "SDL_ConvertSurface");
    stub_funcs.ptr_SDL_ConvertSurfaceFormat = try_find_sym(sdl2, "SDL_ConvertSurfaceFormat");
    stub_funcs.ptr_SDL_ConvertPixels = try_find_sym(sdl2, "SDL_ConvertPixels");
    stub_funcs.ptr_SDL_PremultiplyAlpha = try_find_sym(sdl2, "SDL_PremultiplyAlpha");
    stub_funcs.ptr_SDL_FillRect = try_find_sym(sdl2, "SDL_FillRect");
    stub_funcs.ptr_SDL_FillRects = try_find_sym(sdl2, "SDL_FillRects");
    stub_funcs.ptr_SDL_UpperBlit = try_find_sym(sdl2, "SDL_UpperBlit");
    stub_funcs.ptr_SDL_LowerBlit = try_find_sym(sdl2, "SDL_LowerBlit");
    stub_funcs.ptr_SDL_SoftStretch = try_find_sym(sdl2, "SDL_SoftStretch");
    stub_funcs.ptr_SDL_SoftStretchLinear = try_find_sym(sdl2, "SDL_SoftStretchLinear");
    stub_funcs.ptr_SDL_UpperBlitScaled = try_find_sym(sdl2, "SDL_UpperBlitScaled");
    stub_funcs.ptr_SDL_LowerBlitScaled = try_find_sym(sdl2, "SDL_LowerBlitScaled");
    stub_funcs.ptr_SDL_SetYUVConversionMode = try_find_sym(sdl2, "SDL_SetYUVConversionMode");
    stub_funcs.ptr_SDL_GetYUVConversionMode = try_find_sym(sdl2, "SDL_GetYUVConversionMode");
    stub_funcs.ptr_SDL_GetYUVConversionModeForResolution = try_find_sym(sdl2, "SDL_GetYUVConversionModeForResolution");
    stub_funcs.ptr_SDL_GetNumVideoDrivers = try_find_sym(sdl2, "SDL_GetNumVideoDrivers");
    stub_funcs.ptr_SDL_GetVideoDriver = try_find_sym(sdl2, "SDL_GetVideoDriver");
    stub_funcs.ptr_SDL_VideoInit = try_find_sym(sdl2, "SDL_VideoInit");
    stub_funcs.ptr_SDL_VideoQuit = try_find_sym(sdl2, "SDL_VideoQuit");
    stub_funcs.ptr_SDL_GetCurrentVideoDriver = try_find_sym(sdl2, "SDL_GetCurrentVideoDriver");
    stub_funcs.ptr_SDL_GetNumVideoDisplays = try_find_sym(sdl2, "SDL_GetNumVideoDisplays");
    stub_funcs.ptr_SDL_GetDisplayName = try_find_sym(sdl2, "SDL_GetDisplayName");
    stub_funcs.ptr_SDL_GetDisplayBounds = try_find_sym(sdl2, "SDL_GetDisplayBounds");
    stub_funcs.ptr_SDL_GetDisplayUsableBounds = try_find_sym(sdl2, "SDL_GetDisplayUsableBounds");
    stub_funcs.ptr_SDL_GetDisplayDPI = try_find_sym(sdl2, "SDL_GetDisplayDPI");
    stub_funcs.ptr_SDL_GetDisplayOrientation = try_find_sym(sdl2, "SDL_GetDisplayOrientation");
    stub_funcs.ptr_SDL_GetNumDisplayModes = try_find_sym(sdl2, "SDL_GetNumDisplayModes");
    stub_funcs.ptr_SDL_GetDisplayMode = try_find_sym(sdl2, "SDL_GetDisplayMode");
    stub_funcs.ptr_SDL_GetDesktopDisplayMode = try_find_sym(sdl2, "SDL_GetDesktopDisplayMode");
    stub_funcs.ptr_SDL_GetCurrentDisplayMode = try_find_sym(sdl2, "SDL_GetCurrentDisplayMode");
    stub_funcs.ptr_SDL_GetClosestDisplayMode = try_find_sym(sdl2, "SDL_GetClosestDisplayMode");
    stub_funcs.ptr_SDL_GetPointDisplayIndex = try_find_sym(sdl2, "SDL_GetPointDisplayIndex");
    stub_funcs.ptr_SDL_GetRectDisplayIndex = try_find_sym(sdl2, "SDL_GetRectDisplayIndex");
    stub_funcs.ptr_SDL_GetWindowDisplayIndex = try_find_sym(sdl2, "SDL_GetWindowDisplayIndex");
    stub_funcs.ptr_SDL_SetWindowDisplayMode = try_find_sym(sdl2, "SDL_SetWindowDisplayMode");
    stub_funcs.ptr_SDL_GetWindowDisplayMode = try_find_sym(sdl2, "SDL_GetWindowDisplayMode");
    stub_funcs.ptr_SDL_GetWindowICCProfile = try_find_sym(sdl2, "SDL_GetWindowICCProfile");
    stub_funcs.ptr_SDL_GetWindowPixelFormat = try_find_sym(sdl2, "SDL_GetWindowPixelFormat");
    stub_funcs.ptr_SDL_CreateWindow = try_find_sym(sdl2, "SDL_CreateWindow");
    stub_funcs.ptr_SDL_CreateWindowFrom = try_find_sym(sdl2, "SDL_CreateWindowFrom");
    stub_funcs.ptr_SDL_GetWindowID = try_find_sym(sdl2, "SDL_GetWindowID");
    stub_funcs.ptr_SDL_GetWindowFromID = try_find_sym(sdl2, "SDL_GetWindowFromID");
    stub_funcs.ptr_SDL_GetWindowFlags = try_find_sym(sdl2, "SDL_GetWindowFlags");
    stub_funcs.ptr_SDL_SetWindowTitle = try_find_sym(sdl2, "SDL_SetWindowTitle");
    stub_funcs.ptr_SDL_GetWindowTitle = try_find_sym(sdl2, "SDL_GetWindowTitle");
    stub_funcs.ptr_SDL_SetWindowIcon = try_find_sym(sdl2, "SDL_SetWindowIcon");
    stub_funcs.ptr_SDL_SetWindowData = try_find_sym(sdl2, "SDL_SetWindowData");
    stub_funcs.ptr_SDL_GetWindowData = try_find_sym(sdl2, "SDL_GetWindowData");
    stub_funcs.ptr_SDL_SetWindowPosition = try_find_sym(sdl2, "SDL_SetWindowPosition");
    stub_funcs.ptr_SDL_GetWindowPosition = try_find_sym(sdl2, "SDL_GetWindowPosition");
    stub_funcs.ptr_SDL_SetWindowSize = try_find_sym(sdl2, "SDL_SetWindowSize");
    stub_funcs.ptr_SDL_GetWindowSize = try_find_sym(sdl2, "SDL_GetWindowSize");
    stub_funcs.ptr_SDL_GetWindowBordersSize = try_find_sym(sdl2, "SDL_GetWindowBordersSize");
    stub_funcs.ptr_SDL_GetWindowSizeInPixels = try_find_sym(sdl2, "SDL_GetWindowSizeInPixels");
    stub_funcs.ptr_SDL_SetWindowMinimumSize = try_find_sym(sdl2, "SDL_SetWindowMinimumSize");
    stub_funcs.ptr_SDL_GetWindowMinimumSize = try_find_sym(sdl2, "SDL_GetWindowMinimumSize");
    stub_funcs.ptr_SDL_SetWindowMaximumSize = try_find_sym(sdl2, "SDL_SetWindowMaximumSize");
    stub_funcs.ptr_SDL_GetWindowMaximumSize = try_find_sym(sdl2, "SDL_GetWindowMaximumSize");
    stub_funcs.ptr_SDL_SetWindowBordered = try_find_sym(sdl2, "SDL_SetWindowBordered");
    stub_funcs.ptr_SDL_SetWindowResizable = try_find_sym(sdl2, "SDL_SetWindowResizable");
    stub_funcs.ptr_SDL_SetWindowAlwaysOnTop = try_find_sym(sdl2, "SDL_SetWindowAlwaysOnTop");
    stub_funcs.ptr_SDL_ShowWindow = try_find_sym(sdl2, "SDL_ShowWindow");
    stub_funcs.ptr_SDL_HideWindow = try_find_sym(sdl2, "SDL_HideWindow");
    stub_funcs.ptr_SDL_RaiseWindow = try_find_sym(sdl2, "SDL_RaiseWindow");
    stub_funcs.ptr_SDL_MaximizeWindow = try_find_sym(sdl2, "SDL_MaximizeWindow");
    stub_funcs.ptr_SDL_MinimizeWindow = try_find_sym(sdl2, "SDL_MinimizeWindow");
    stub_funcs.ptr_SDL_RestoreWindow = try_find_sym(sdl2, "SDL_RestoreWindow");
    stub_funcs.ptr_SDL_SetWindowFullscreen = try_find_sym(sdl2, "SDL_SetWindowFullscreen");
    stub_funcs.ptr_SDL_HasWindowSurface = try_find_sym(sdl2, "SDL_HasWindowSurface");
    stub_funcs.ptr_SDL_GetWindowSurface = try_find_sym(sdl2, "SDL_GetWindowSurface");
    stub_funcs.ptr_SDL_UpdateWindowSurface = try_find_sym(sdl2, "SDL_UpdateWindowSurface");
    stub_funcs.ptr_SDL_UpdateWindowSurfaceRects = try_find_sym(sdl2, "SDL_UpdateWindowSurfaceRects");
    stub_funcs.ptr_SDL_DestroyWindowSurface = try_find_sym(sdl2, "SDL_DestroyWindowSurface");
    stub_funcs.ptr_SDL_SetWindowGrab = try_find_sym(sdl2, "SDL_SetWindowGrab");
    stub_funcs.ptr_SDL_SetWindowKeyboardGrab = try_find_sym(sdl2, "SDL_SetWindowKeyboardGrab");
    stub_funcs.ptr_SDL_SetWindowMouseGrab = try_find_sym(sdl2, "SDL_SetWindowMouseGrab");
    stub_funcs.ptr_SDL_GetWindowGrab = try_find_sym(sdl2, "SDL_GetWindowGrab");
    stub_funcs.ptr_SDL_GetWindowKeyboardGrab = try_find_sym(sdl2, "SDL_GetWindowKeyboardGrab");
    stub_funcs.ptr_SDL_GetWindowMouseGrab = try_find_sym(sdl2, "SDL_GetWindowMouseGrab");
    stub_funcs.ptr_SDL_GetGrabbedWindow = try_find_sym(sdl2, "SDL_GetGrabbedWindow");
    stub_funcs.ptr_SDL_SetWindowMouseRect = try_find_sym(sdl2, "SDL_SetWindowMouseRect");
    stub_funcs.ptr_SDL_GetWindowMouseRect = try_find_sym(sdl2, "SDL_GetWindowMouseRect");
    stub_funcs.ptr_SDL_SetWindowBrightness = try_find_sym(sdl2, "SDL_SetWindowBrightness");
    stub_funcs.ptr_SDL_GetWindowBrightness = try_find_sym(sdl2, "SDL_GetWindowBrightness");
    stub_funcs.ptr_SDL_SetWindowOpacity = try_find_sym(sdl2, "SDL_SetWindowOpacity");
    stub_funcs.ptr_SDL_GetWindowOpacity = try_find_sym(sdl2, "SDL_GetWindowOpacity");
    stub_funcs.ptr_SDL_SetWindowModalFor = try_find_sym(sdl2, "SDL_SetWindowModalFor");
    stub_funcs.ptr_SDL_SetWindowInputFocus = try_find_sym(sdl2, "SDL_SetWindowInputFocus");
    stub_funcs.ptr_SDL_SetWindowGammaRamp = try_find_sym(sdl2, "SDL_SetWindowGammaRamp");
    stub_funcs.ptr_SDL_GetWindowGammaRamp = try_find_sym(sdl2, "SDL_GetWindowGammaRamp");
    stub_funcs.ptr_SDL_SetWindowHitTest = try_find_sym(sdl2, "SDL_SetWindowHitTest");
    stub_funcs.ptr_SDL_FlashWindow = try_find_sym(sdl2, "SDL_FlashWindow");
    stub_funcs.ptr_SDL_DestroyWindow = try_find_sym(sdl2, "SDL_DestroyWindow");
    stub_funcs.ptr_SDL_IsScreenSaverEnabled = try_find_sym(sdl2, "SDL_IsScreenSaverEnabled");
    stub_funcs.ptr_SDL_EnableScreenSaver = try_find_sym(sdl2, "SDL_EnableScreenSaver");
    stub_funcs.ptr_SDL_DisableScreenSaver = try_find_sym(sdl2, "SDL_DisableScreenSaver");
    stub_funcs.ptr_SDL_GL_LoadLibrary = try_find_sym(sdl2, "SDL_GL_LoadLibrary");
    stub_funcs.ptr_SDL_GL_GetProcAddress = try_find_sym(sdl2, "SDL_GL_GetProcAddress");
    stub_funcs.ptr_SDL_GL_UnloadLibrary = try_find_sym(sdl2, "SDL_GL_UnloadLibrary");
    stub_funcs.ptr_SDL_GL_ExtensionSupported = try_find_sym(sdl2, "SDL_GL_ExtensionSupported");
    stub_funcs.ptr_SDL_GL_ResetAttributes = try_find_sym(sdl2, "SDL_GL_ResetAttributes");
    stub_funcs.ptr_SDL_GL_SetAttribute = try_find_sym(sdl2, "SDL_GL_SetAttribute");
    stub_funcs.ptr_SDL_GL_GetAttribute = try_find_sym(sdl2, "SDL_GL_GetAttribute");
    stub_funcs.ptr_SDL_GL_CreateContext = try_find_sym(sdl2, "SDL_GL_CreateContext");
    stub_funcs.ptr_SDL_GL_MakeCurrent = try_find_sym(sdl2, "SDL_GL_MakeCurrent");
    stub_funcs.ptr_SDL_GL_GetCurrentWindow = try_find_sym(sdl2, "SDL_GL_GetCurrentWindow");
    stub_funcs.ptr_SDL_GL_GetCurrentContext = try_find_sym(sdl2, "SDL_GL_GetCurrentContext");
    stub_funcs.ptr_SDL_GL_GetDrawableSize = try_find_sym(sdl2, "SDL_GL_GetDrawableSize");
    stub_funcs.ptr_SDL_GL_SetSwapInterval = try_find_sym(sdl2, "SDL_GL_SetSwapInterval");
    stub_funcs.ptr_SDL_GL_GetSwapInterval = try_find_sym(sdl2, "SDL_GL_GetSwapInterval");
    stub_funcs.ptr_SDL_GL_SwapWindow = try_find_sym(sdl2, "SDL_GL_SwapWindow");
    stub_funcs.ptr_SDL_GL_DeleteContext = try_find_sym(sdl2, "SDL_GL_DeleteContext");
    stub_funcs.ptr_SDL_GetKeyboardFocus = try_find_sym(sdl2, "SDL_GetKeyboardFocus");
    stub_funcs.ptr_SDL_GetKeyboardState = try_find_sym(sdl2, "SDL_GetKeyboardState");
    stub_funcs.ptr_SDL_ResetKeyboard = try_find_sym(sdl2, "SDL_ResetKeyboard");
    stub_funcs.ptr_SDL_GetModState = try_find_sym(sdl2, "SDL_GetModState");
    stub_funcs.ptr_SDL_SetModState = try_find_sym(sdl2, "SDL_SetModState");
    stub_funcs.ptr_SDL_GetKeyFromScancode = try_find_sym(sdl2, "SDL_GetKeyFromScancode");
    stub_funcs.ptr_SDL_GetScancodeFromKey = try_find_sym(sdl2, "SDL_GetScancodeFromKey");
    stub_funcs.ptr_SDL_GetScancodeName = try_find_sym(sdl2, "SDL_GetScancodeName");
    stub_funcs.ptr_SDL_GetScancodeFromName = try_find_sym(sdl2, "SDL_GetScancodeFromName");
    stub_funcs.ptr_SDL_GetKeyName = try_find_sym(sdl2, "SDL_GetKeyName");
    stub_funcs.ptr_SDL_GetKeyFromName = try_find_sym(sdl2, "SDL_GetKeyFromName");
    stub_funcs.ptr_SDL_StartTextInput = try_find_sym(sdl2, "SDL_StartTextInput");
    stub_funcs.ptr_SDL_IsTextInputActive = try_find_sym(sdl2, "SDL_IsTextInputActive");
    stub_funcs.ptr_SDL_StopTextInput = try_find_sym(sdl2, "SDL_StopTextInput");
    stub_funcs.ptr_SDL_ClearComposition = try_find_sym(sdl2, "SDL_ClearComposition");
    stub_funcs.ptr_SDL_IsTextInputShown = try_find_sym(sdl2, "SDL_IsTextInputShown");
    stub_funcs.ptr_SDL_SetTextInputRect = try_find_sym(sdl2, "SDL_SetTextInputRect");
    stub_funcs.ptr_SDL_HasScreenKeyboardSupport = try_find_sym(sdl2, "SDL_HasScreenKeyboardSupport");
    stub_funcs.ptr_SDL_IsScreenKeyboardShown = try_find_sym(sdl2, "SDL_IsScreenKeyboardShown");
    stub_funcs.ptr_SDL_GetMouseFocus = try_find_sym(sdl2, "SDL_GetMouseFocus");
    stub_funcs.ptr_SDL_GetMouseState = try_find_sym(sdl2, "SDL_GetMouseState");
    stub_funcs.ptr_SDL_GetGlobalMouseState = try_find_sym(sdl2, "SDL_GetGlobalMouseState");
    stub_funcs.ptr_SDL_GetRelativeMouseState = try_find_sym(sdl2, "SDL_GetRelativeMouseState");
    stub_funcs.ptr_SDL_WarpMouseInWindow = try_find_sym(sdl2, "SDL_WarpMouseInWindow");
    stub_funcs.ptr_SDL_WarpMouseGlobal = try_find_sym(sdl2, "SDL_WarpMouseGlobal");
    stub_funcs.ptr_SDL_SetRelativeMouseMode = try_find_sym(sdl2, "SDL_SetRelativeMouseMode");
    stub_funcs.ptr_SDL_CaptureMouse = try_find_sym(sdl2, "SDL_CaptureMouse");
    stub_funcs.ptr_SDL_GetRelativeMouseMode = try_find_sym(sdl2, "SDL_GetRelativeMouseMode");
    stub_funcs.ptr_SDL_CreateCursor = try_find_sym(sdl2, "SDL_CreateCursor");
    stub_funcs.ptr_SDL_CreateColorCursor = try_find_sym(sdl2, "SDL_CreateColorCursor");
    stub_funcs.ptr_SDL_CreateSystemCursor = try_find_sym(sdl2, "SDL_CreateSystemCursor");
    stub_funcs.ptr_SDL_SetCursor = try_find_sym(sdl2, "SDL_SetCursor");
    stub_funcs.ptr_SDL_GetCursor = try_find_sym(sdl2, "SDL_GetCursor");
    stub_funcs.ptr_SDL_GetDefaultCursor = try_find_sym(sdl2, "SDL_GetDefaultCursor");
    stub_funcs.ptr_SDL_FreeCursor = try_find_sym(sdl2, "SDL_FreeCursor");
    stub_funcs.ptr_SDL_ShowCursor = try_find_sym(sdl2, "SDL_ShowCursor");
    stub_funcs.ptr_SDL_GUIDToString = try_find_sym(sdl2, "SDL_GUIDToString");
    stub_funcs.ptr_SDL_GUIDFromString = try_find_sym(sdl2, "SDL_GUIDFromString");
    stub_funcs.ptr_SDL_LockJoysticks = try_find_sym(sdl2, "SDL_LockJoysticks");
    stub_funcs.ptr_SDL_UnlockJoysticks = try_find_sym(sdl2, "SDL_UnlockJoysticks");
    stub_funcs.ptr_SDL_NumJoysticks = try_find_sym(sdl2, "SDL_NumJoysticks");
    stub_funcs.ptr_SDL_JoystickNameForIndex = try_find_sym(sdl2, "SDL_JoystickNameForIndex");
    stub_funcs.ptr_SDL_JoystickPathForIndex = try_find_sym(sdl2, "SDL_JoystickPathForIndex");
    stub_funcs.ptr_SDL_JoystickGetDevicePlayerIndex = try_find_sym(sdl2, "SDL_JoystickGetDevicePlayerIndex");
    stub_funcs.ptr_SDL_JoystickGetDeviceGUID = try_find_sym(sdl2, "SDL_JoystickGetDeviceGUID");
    stub_funcs.ptr_SDL_JoystickGetDeviceVendor = try_find_sym(sdl2, "SDL_JoystickGetDeviceVendor");
    stub_funcs.ptr_SDL_JoystickGetDeviceProduct = try_find_sym(sdl2, "SDL_JoystickGetDeviceProduct");
    stub_funcs.ptr_SDL_JoystickGetDeviceProductVersion = try_find_sym(sdl2, "SDL_JoystickGetDeviceProductVersion");
    stub_funcs.ptr_SDL_JoystickGetDeviceType = try_find_sym(sdl2, "SDL_JoystickGetDeviceType");
    stub_funcs.ptr_SDL_JoystickGetDeviceInstanceID = try_find_sym(sdl2, "SDL_JoystickGetDeviceInstanceID");
    stub_funcs.ptr_SDL_JoystickOpen = try_find_sym(sdl2, "SDL_JoystickOpen");
    stub_funcs.ptr_SDL_JoystickFromInstanceID = try_find_sym(sdl2, "SDL_JoystickFromInstanceID");
    stub_funcs.ptr_SDL_JoystickFromPlayerIndex = try_find_sym(sdl2, "SDL_JoystickFromPlayerIndex");
    stub_funcs.ptr_SDL_JoystickAttachVirtual = try_find_sym(sdl2, "SDL_JoystickAttachVirtual");
    stub_funcs.ptr_SDL_JoystickAttachVirtualEx = try_find_sym(sdl2, "SDL_JoystickAttachVirtualEx");
    stub_funcs.ptr_SDL_JoystickDetachVirtual = try_find_sym(sdl2, "SDL_JoystickDetachVirtual");
    stub_funcs.ptr_SDL_JoystickIsVirtual = try_find_sym(sdl2, "SDL_JoystickIsVirtual");
    stub_funcs.ptr_SDL_JoystickSetVirtualAxis = try_find_sym(sdl2, "SDL_JoystickSetVirtualAxis");
    stub_funcs.ptr_SDL_JoystickSetVirtualButton = try_find_sym(sdl2, "SDL_JoystickSetVirtualButton");
    stub_funcs.ptr_SDL_JoystickSetVirtualHat = try_find_sym(sdl2, "SDL_JoystickSetVirtualHat");
    stub_funcs.ptr_SDL_JoystickName = try_find_sym(sdl2, "SDL_JoystickName");
    stub_funcs.ptr_SDL_JoystickPath = try_find_sym(sdl2, "SDL_JoystickPath");
    stub_funcs.ptr_SDL_JoystickGetPlayerIndex = try_find_sym(sdl2, "SDL_JoystickGetPlayerIndex");
    stub_funcs.ptr_SDL_JoystickSetPlayerIndex = try_find_sym(sdl2, "SDL_JoystickSetPlayerIndex");
    stub_funcs.ptr_SDL_JoystickGetGUID = try_find_sym(sdl2, "SDL_JoystickGetGUID");
    stub_funcs.ptr_SDL_JoystickGetVendor = try_find_sym(sdl2, "SDL_JoystickGetVendor");
    stub_funcs.ptr_SDL_JoystickGetProduct = try_find_sym(sdl2, "SDL_JoystickGetProduct");
    stub_funcs.ptr_SDL_JoystickGetProductVersion = try_find_sym(sdl2, "SDL_JoystickGetProductVersion");
    stub_funcs.ptr_SDL_JoystickGetFirmwareVersion = try_find_sym(sdl2, "SDL_JoystickGetFirmwareVersion");
    stub_funcs.ptr_SDL_JoystickGetSerial = try_find_sym(sdl2, "SDL_JoystickGetSerial");
    stub_funcs.ptr_SDL_JoystickGetType = try_find_sym(sdl2, "SDL_JoystickGetType");
    stub_funcs.ptr_SDL_JoystickGetGUIDString = try_find_sym(sdl2, "SDL_JoystickGetGUIDString");
    stub_funcs.ptr_SDL_JoystickGetGUIDFromString = try_find_sym(sdl2, "SDL_JoystickGetGUIDFromString");
    stub_funcs.ptr_SDL_GetJoystickGUIDInfo = try_find_sym(sdl2, "SDL_GetJoystickGUIDInfo");
    stub_funcs.ptr_SDL_JoystickGetAttached = try_find_sym(sdl2, "SDL_JoystickGetAttached");
    stub_funcs.ptr_SDL_JoystickInstanceID = try_find_sym(sdl2, "SDL_JoystickInstanceID");
    stub_funcs.ptr_SDL_JoystickNumAxes = try_find_sym(sdl2, "SDL_JoystickNumAxes");
    stub_funcs.ptr_SDL_JoystickNumBalls = try_find_sym(sdl2, "SDL_JoystickNumBalls");
    stub_funcs.ptr_SDL_JoystickNumHats = try_find_sym(sdl2, "SDL_JoystickNumHats");
    stub_funcs.ptr_SDL_JoystickNumButtons = try_find_sym(sdl2, "SDL_JoystickNumButtons");
    stub_funcs.ptr_SDL_JoystickUpdate = try_find_sym(sdl2, "SDL_JoystickUpdate");
    stub_funcs.ptr_SDL_JoystickEventState = try_find_sym(sdl2, "SDL_JoystickEventState");
    stub_funcs.ptr_SDL_JoystickGetAxis = try_find_sym(sdl2, "SDL_JoystickGetAxis");
    stub_funcs.ptr_SDL_JoystickGetAxisInitialState = try_find_sym(sdl2, "SDL_JoystickGetAxisInitialState");
    stub_funcs.ptr_SDL_JoystickGetHat = try_find_sym(sdl2, "SDL_JoystickGetHat");
    stub_funcs.ptr_SDL_JoystickGetBall = try_find_sym(sdl2, "SDL_JoystickGetBall");
    stub_funcs.ptr_SDL_JoystickGetButton = try_find_sym(sdl2, "SDL_JoystickGetButton");
    stub_funcs.ptr_SDL_JoystickRumble = try_find_sym(sdl2, "SDL_JoystickRumble");
    stub_funcs.ptr_SDL_JoystickRumbleTriggers = try_find_sym(sdl2, "SDL_JoystickRumbleTriggers");
    stub_funcs.ptr_SDL_JoystickHasLED = try_find_sym(sdl2, "SDL_JoystickHasLED");
    stub_funcs.ptr_SDL_JoystickHasRumble = try_find_sym(sdl2, "SDL_JoystickHasRumble");
    stub_funcs.ptr_SDL_JoystickHasRumbleTriggers = try_find_sym(sdl2, "SDL_JoystickHasRumbleTriggers");
    stub_funcs.ptr_SDL_JoystickSetLED = try_find_sym(sdl2, "SDL_JoystickSetLED");
    stub_funcs.ptr_SDL_JoystickSendEffect = try_find_sym(sdl2, "SDL_JoystickSendEffect");
    stub_funcs.ptr_SDL_JoystickClose = try_find_sym(sdl2, "SDL_JoystickClose");
    stub_funcs.ptr_SDL_JoystickCurrentPowerLevel = try_find_sym(sdl2, "SDL_JoystickCurrentPowerLevel");
    stub_funcs.ptr_SDL_LockSensors = try_find_sym(sdl2, "SDL_LockSensors");
    stub_funcs.ptr_SDL_UnlockSensors = try_find_sym(sdl2, "SDL_UnlockSensors");
    stub_funcs.ptr_SDL_NumSensors = try_find_sym(sdl2, "SDL_NumSensors");
    stub_funcs.ptr_SDL_SensorGetDeviceName = try_find_sym(sdl2, "SDL_SensorGetDeviceName");
    stub_funcs.ptr_SDL_SensorGetDeviceType = try_find_sym(sdl2, "SDL_SensorGetDeviceType");
    stub_funcs.ptr_SDL_SensorGetDeviceNonPortableType = try_find_sym(sdl2, "SDL_SensorGetDeviceNonPortableType");
    stub_funcs.ptr_SDL_SensorGetDeviceInstanceID = try_find_sym(sdl2, "SDL_SensorGetDeviceInstanceID");
    stub_funcs.ptr_SDL_SensorOpen = try_find_sym(sdl2, "SDL_SensorOpen");
    stub_funcs.ptr_SDL_SensorFromInstanceID = try_find_sym(sdl2, "SDL_SensorFromInstanceID");
    stub_funcs.ptr_SDL_SensorGetName = try_find_sym(sdl2, "SDL_SensorGetName");
    stub_funcs.ptr_SDL_SensorGetType = try_find_sym(sdl2, "SDL_SensorGetType");
    stub_funcs.ptr_SDL_SensorGetNonPortableType = try_find_sym(sdl2, "SDL_SensorGetNonPortableType");
    stub_funcs.ptr_SDL_SensorGetInstanceID = try_find_sym(sdl2, "SDL_SensorGetInstanceID");
    stub_funcs.ptr_SDL_SensorGetData = try_find_sym(sdl2, "SDL_SensorGetData");
    stub_funcs.ptr_SDL_SensorGetDataWithTimestamp = try_find_sym(sdl2, "SDL_SensorGetDataWithTimestamp");
    stub_funcs.ptr_SDL_SensorClose = try_find_sym(sdl2, "SDL_SensorClose");
    stub_funcs.ptr_SDL_SensorUpdate = try_find_sym(sdl2, "SDL_SensorUpdate");
    stub_funcs.ptr_SDL_GameControllerAddMappingsFromRW = try_find_sym(sdl2, "SDL_GameControllerAddMappingsFromRW");
    stub_funcs.ptr_SDL_GameControllerAddMapping = try_find_sym(sdl2, "SDL_GameControllerAddMapping");
    stub_funcs.ptr_SDL_GameControllerNumMappings = try_find_sym(sdl2, "SDL_GameControllerNumMappings");
    stub_funcs.ptr_SDL_GameControllerMappingForIndex = try_find_sym(sdl2, "SDL_GameControllerMappingForIndex");
    stub_funcs.ptr_SDL_GameControllerMappingForGUID = try_find_sym(sdl2, "SDL_GameControllerMappingForGUID");
    stub_funcs.ptr_SDL_GameControllerMapping = try_find_sym(sdl2, "SDL_GameControllerMapping");
    stub_funcs.ptr_SDL_IsGameController = try_find_sym(sdl2, "SDL_IsGameController");
    stub_funcs.ptr_SDL_GameControllerNameForIndex = try_find_sym(sdl2, "SDL_GameControllerNameForIndex");
    stub_funcs.ptr_SDL_GameControllerPathForIndex = try_find_sym(sdl2, "SDL_GameControllerPathForIndex");
    stub_funcs.ptr_SDL_GameControllerTypeForIndex = try_find_sym(sdl2, "SDL_GameControllerTypeForIndex");
    stub_funcs.ptr_SDL_GameControllerMappingForDeviceIndex = try_find_sym(sdl2, "SDL_GameControllerMappingForDeviceIndex");
    stub_funcs.ptr_SDL_GameControllerOpen = try_find_sym(sdl2, "SDL_GameControllerOpen");
    stub_funcs.ptr_SDL_GameControllerFromInstanceID = try_find_sym(sdl2, "SDL_GameControllerFromInstanceID");
    stub_funcs.ptr_SDL_GameControllerFromPlayerIndex = try_find_sym(sdl2, "SDL_GameControllerFromPlayerIndex");
    stub_funcs.ptr_SDL_GameControllerName = try_find_sym(sdl2, "SDL_GameControllerName");
    stub_funcs.ptr_SDL_GameControllerPath = try_find_sym(sdl2, "SDL_GameControllerPath");
    stub_funcs.ptr_SDL_GameControllerGetType = try_find_sym(sdl2, "SDL_GameControllerGetType");
    stub_funcs.ptr_SDL_GameControllerGetPlayerIndex = try_find_sym(sdl2, "SDL_GameControllerGetPlayerIndex");
    stub_funcs.ptr_SDL_GameControllerSetPlayerIndex = try_find_sym(sdl2, "SDL_GameControllerSetPlayerIndex");
    stub_funcs.ptr_SDL_GameControllerGetVendor = try_find_sym(sdl2, "SDL_GameControllerGetVendor");
    stub_funcs.ptr_SDL_GameControllerGetProduct = try_find_sym(sdl2, "SDL_GameControllerGetProduct");
    stub_funcs.ptr_SDL_GameControllerGetProductVersion = try_find_sym(sdl2, "SDL_GameControllerGetProductVersion");
    stub_funcs.ptr_SDL_GameControllerGetFirmwareVersion = try_find_sym(sdl2, "SDL_GameControllerGetFirmwareVersion");
    stub_funcs.ptr_SDL_GameControllerGetSerial = try_find_sym(sdl2, "SDL_GameControllerGetSerial");
    stub_funcs.ptr_SDL_GameControllerGetSteamHandle = try_find_sym(sdl2, "SDL_GameControllerGetSteamHandle");
    stub_funcs.ptr_SDL_GameControllerGetAttached = try_find_sym(sdl2, "SDL_GameControllerGetAttached");
    stub_funcs.ptr_SDL_GameControllerGetJoystick = try_find_sym(sdl2, "SDL_GameControllerGetJoystick");
    stub_funcs.ptr_SDL_GameControllerEventState = try_find_sym(sdl2, "SDL_GameControllerEventState");
    stub_funcs.ptr_SDL_GameControllerUpdate = try_find_sym(sdl2, "SDL_GameControllerUpdate");
    stub_funcs.ptr_SDL_GameControllerGetAxisFromString = try_find_sym(sdl2, "SDL_GameControllerGetAxisFromString");
    stub_funcs.ptr_SDL_GameControllerGetStringForAxis = try_find_sym(sdl2, "SDL_GameControllerGetStringForAxis");
    stub_funcs.ptr_SDL_GameControllerGetBindForAxis = try_find_sym(sdl2, "SDL_GameControllerGetBindForAxis");
    stub_funcs.ptr_SDL_GameControllerHasAxis = try_find_sym(sdl2, "SDL_GameControllerHasAxis");
    stub_funcs.ptr_SDL_GameControllerGetAxis = try_find_sym(sdl2, "SDL_GameControllerGetAxis");
    stub_funcs.ptr_SDL_GameControllerGetButtonFromString = try_find_sym(sdl2, "SDL_GameControllerGetButtonFromString");
    stub_funcs.ptr_SDL_GameControllerGetStringForButton = try_find_sym(sdl2, "SDL_GameControllerGetStringForButton");
    stub_funcs.ptr_SDL_GameControllerGetBindForButton = try_find_sym(sdl2, "SDL_GameControllerGetBindForButton");
    stub_funcs.ptr_SDL_GameControllerHasButton = try_find_sym(sdl2, "SDL_GameControllerHasButton");
    stub_funcs.ptr_SDL_GameControllerGetButton = try_find_sym(sdl2, "SDL_GameControllerGetButton");
    stub_funcs.ptr_SDL_GameControllerGetNumTouchpads = try_find_sym(sdl2, "SDL_GameControllerGetNumTouchpads");
    stub_funcs.ptr_SDL_GameControllerGetNumTouchpadFingers = try_find_sym(sdl2, "SDL_GameControllerGetNumTouchpadFingers");
    stub_funcs.ptr_SDL_GameControllerGetTouchpadFinger = try_find_sym(sdl2, "SDL_GameControllerGetTouchpadFinger");
    stub_funcs.ptr_SDL_GameControllerHasSensor = try_find_sym(sdl2, "SDL_GameControllerHasSensor");
    stub_funcs.ptr_SDL_GameControllerSetSensorEnabled = try_find_sym(sdl2, "SDL_GameControllerSetSensorEnabled");
    stub_funcs.ptr_SDL_GameControllerIsSensorEnabled = try_find_sym(sdl2, "SDL_GameControllerIsSensorEnabled");
    stub_funcs.ptr_SDL_GameControllerGetSensorDataRate = try_find_sym(sdl2, "SDL_GameControllerGetSensorDataRate");
    stub_funcs.ptr_SDL_GameControllerGetSensorData = try_find_sym(sdl2, "SDL_GameControllerGetSensorData");
    stub_funcs.ptr_SDL_GameControllerGetSensorDataWithTimestamp = try_find_sym(sdl2, "SDL_GameControllerGetSensorDataWithTimestamp");
    stub_funcs.ptr_SDL_GameControllerRumble = try_find_sym(sdl2, "SDL_GameControllerRumble");
    stub_funcs.ptr_SDL_GameControllerRumbleTriggers = try_find_sym(sdl2, "SDL_GameControllerRumbleTriggers");
    stub_funcs.ptr_SDL_GameControllerHasLED = try_find_sym(sdl2, "SDL_GameControllerHasLED");
    stub_funcs.ptr_SDL_GameControllerHasRumble = try_find_sym(sdl2, "SDL_GameControllerHasRumble");
    stub_funcs.ptr_SDL_GameControllerHasRumbleTriggers = try_find_sym(sdl2, "SDL_GameControllerHasRumbleTriggers");
    stub_funcs.ptr_SDL_GameControllerSetLED = try_find_sym(sdl2, "SDL_GameControllerSetLED");
    stub_funcs.ptr_SDL_GameControllerSendEffect = try_find_sym(sdl2, "SDL_GameControllerSendEffect");
    stub_funcs.ptr_SDL_GameControllerClose = try_find_sym(sdl2, "SDL_GameControllerClose");
    stub_funcs.ptr_SDL_GameControllerGetAppleSFSymbolsNameForButton = try_find_sym(sdl2, "SDL_GameControllerGetAppleSFSymbolsNameForButton");
    stub_funcs.ptr_SDL_GameControllerGetAppleSFSymbolsNameForAxis = try_find_sym(sdl2, "SDL_GameControllerGetAppleSFSymbolsNameForAxis");
    stub_funcs.ptr_SDL_GetNumTouchDevices = try_find_sym(sdl2, "SDL_GetNumTouchDevices");
    stub_funcs.ptr_SDL_GetTouchDevice = try_find_sym(sdl2, "SDL_GetTouchDevice");
    stub_funcs.ptr_SDL_GetTouchName = try_find_sym(sdl2, "SDL_GetTouchName");
    stub_funcs.ptr_SDL_GetTouchDeviceType = try_find_sym(sdl2, "SDL_GetTouchDeviceType");
    stub_funcs.ptr_SDL_GetNumTouchFingers = try_find_sym(sdl2, "SDL_GetNumTouchFingers");
    stub_funcs.ptr_SDL_GetTouchFinger = try_find_sym(sdl2, "SDL_GetTouchFinger");
    stub_funcs.ptr_SDL_RecordGesture = try_find_sym(sdl2, "SDL_RecordGesture");
    stub_funcs.ptr_SDL_SaveAllDollarTemplates = try_find_sym(sdl2, "SDL_SaveAllDollarTemplates");
    stub_funcs.ptr_SDL_SaveDollarTemplate = try_find_sym(sdl2, "SDL_SaveDollarTemplate");
    stub_funcs.ptr_SDL_LoadDollarTemplates = try_find_sym(sdl2, "SDL_LoadDollarTemplates");
    stub_funcs.ptr_SDL_PumpEvents = try_find_sym(sdl2, "SDL_PumpEvents");
    stub_funcs.ptr_SDL_PeepEvents = try_find_sym(sdl2, "SDL_PeepEvents");
    stub_funcs.ptr_SDL_HasEvent = try_find_sym(sdl2, "SDL_HasEvent");
    stub_funcs.ptr_SDL_HasEvents = try_find_sym(sdl2, "SDL_HasEvents");
    stub_funcs.ptr_SDL_FlushEvent = try_find_sym(sdl2, "SDL_FlushEvent");
    stub_funcs.ptr_SDL_FlushEvents = try_find_sym(sdl2, "SDL_FlushEvents");
    stub_funcs.ptr_SDL_PollEvent = try_find_sym(sdl2, "SDL_PollEvent");
    stub_funcs.ptr_SDL_WaitEvent = try_find_sym(sdl2, "SDL_WaitEvent");
    stub_funcs.ptr_SDL_WaitEventTimeout = try_find_sym(sdl2, "SDL_WaitEventTimeout");
    stub_funcs.ptr_SDL_PushEvent = try_find_sym(sdl2, "SDL_PushEvent");
    stub_funcs.ptr_SDL_SetEventFilter = try_find_sym(sdl2, "SDL_SetEventFilter");
    stub_funcs.ptr_SDL_GetEventFilter = try_find_sym(sdl2, "SDL_GetEventFilter");
    stub_funcs.ptr_SDL_AddEventWatch = try_find_sym(sdl2, "SDL_AddEventWatch");
    stub_funcs.ptr_SDL_DelEventWatch = try_find_sym(sdl2, "SDL_DelEventWatch");
    stub_funcs.ptr_SDL_FilterEvents = try_find_sym(sdl2, "SDL_FilterEvents");
    stub_funcs.ptr_SDL_EventState = try_find_sym(sdl2, "SDL_EventState");
    stub_funcs.ptr_SDL_RegisterEvents = try_find_sym(sdl2, "SDL_RegisterEvents");
    stub_funcs.ptr_SDL_GetBasePath = try_find_sym(sdl2, "SDL_GetBasePath");
    stub_funcs.ptr_SDL_GetPrefPath = try_find_sym(sdl2, "SDL_GetPrefPath");
    stub_funcs.ptr_SDL_NumHaptics = try_find_sym(sdl2, "SDL_NumHaptics");
    stub_funcs.ptr_SDL_HapticName = try_find_sym(sdl2, "SDL_HapticName");
    stub_funcs.ptr_SDL_HapticOpen = try_find_sym(sdl2, "SDL_HapticOpen");
    stub_funcs.ptr_SDL_HapticOpened = try_find_sym(sdl2, "SDL_HapticOpened");
    stub_funcs.ptr_SDL_HapticIndex = try_find_sym(sdl2, "SDL_HapticIndex");
    stub_funcs.ptr_SDL_MouseIsHaptic = try_find_sym(sdl2, "SDL_MouseIsHaptic");
    stub_funcs.ptr_SDL_HapticOpenFromMouse = try_find_sym(sdl2, "SDL_HapticOpenFromMouse");
    stub_funcs.ptr_SDL_JoystickIsHaptic = try_find_sym(sdl2, "SDL_JoystickIsHaptic");
    stub_funcs.ptr_SDL_HapticOpenFromJoystick = try_find_sym(sdl2, "SDL_HapticOpenFromJoystick");
    stub_funcs.ptr_SDL_HapticClose = try_find_sym(sdl2, "SDL_HapticClose");
    stub_funcs.ptr_SDL_HapticNumEffects = try_find_sym(sdl2, "SDL_HapticNumEffects");
    stub_funcs.ptr_SDL_HapticNumEffectsPlaying = try_find_sym(sdl2, "SDL_HapticNumEffectsPlaying");
    stub_funcs.ptr_SDL_HapticQuery = try_find_sym(sdl2, "SDL_HapticQuery");
    stub_funcs.ptr_SDL_HapticNumAxes = try_find_sym(sdl2, "SDL_HapticNumAxes");
    stub_funcs.ptr_SDL_HapticEffectSupported = try_find_sym(sdl2, "SDL_HapticEffectSupported");
    stub_funcs.ptr_SDL_HapticNewEffect = try_find_sym(sdl2, "SDL_HapticNewEffect");
    stub_funcs.ptr_SDL_HapticUpdateEffect = try_find_sym(sdl2, "SDL_HapticUpdateEffect");
    stub_funcs.ptr_SDL_HapticRunEffect = try_find_sym(sdl2, "SDL_HapticRunEffect");
    stub_funcs.ptr_SDL_HapticStopEffect = try_find_sym(sdl2, "SDL_HapticStopEffect");
    stub_funcs.ptr_SDL_HapticDestroyEffect = try_find_sym(sdl2, "SDL_HapticDestroyEffect");
    stub_funcs.ptr_SDL_HapticGetEffectStatus = try_find_sym(sdl2, "SDL_HapticGetEffectStatus");
    stub_funcs.ptr_SDL_HapticSetGain = try_find_sym(sdl2, "SDL_HapticSetGain");
    stub_funcs.ptr_SDL_HapticSetAutocenter = try_find_sym(sdl2, "SDL_HapticSetAutocenter");
    stub_funcs.ptr_SDL_HapticPause = try_find_sym(sdl2, "SDL_HapticPause");
    stub_funcs.ptr_SDL_HapticUnpause = try_find_sym(sdl2, "SDL_HapticUnpause");
    stub_funcs.ptr_SDL_HapticStopAll = try_find_sym(sdl2, "SDL_HapticStopAll");
    stub_funcs.ptr_SDL_HapticRumbleSupported = try_find_sym(sdl2, "SDL_HapticRumbleSupported");
    stub_funcs.ptr_SDL_HapticRumbleInit = try_find_sym(sdl2, "SDL_HapticRumbleInit");
    stub_funcs.ptr_SDL_HapticRumblePlay = try_find_sym(sdl2, "SDL_HapticRumblePlay");
    stub_funcs.ptr_SDL_HapticRumbleStop = try_find_sym(sdl2, "SDL_HapticRumbleStop");
    stub_funcs.ptr_SDL_hid_init = try_find_sym(sdl2, "SDL_hid_init");
    stub_funcs.ptr_SDL_hid_exit = try_find_sym(sdl2, "SDL_hid_exit");
    stub_funcs.ptr_SDL_hid_device_change_count = try_find_sym(sdl2, "SDL_hid_device_change_count");
    stub_funcs.ptr_SDL_hid_enumerate = try_find_sym(sdl2, "SDL_hid_enumerate");
    stub_funcs.ptr_SDL_hid_free_enumeration = try_find_sym(sdl2, "SDL_hid_free_enumeration");
    stub_funcs.ptr_SDL_hid_open = try_find_sym(sdl2, "SDL_hid_open");
    stub_funcs.ptr_SDL_hid_open_path = try_find_sym(sdl2, "SDL_hid_open_path");
    stub_funcs.ptr_SDL_hid_write = try_find_sym(sdl2, "SDL_hid_write");
    stub_funcs.ptr_SDL_hid_read_timeout = try_find_sym(sdl2, "SDL_hid_read_timeout");
    stub_funcs.ptr_SDL_hid_read = try_find_sym(sdl2, "SDL_hid_read");
    stub_funcs.ptr_SDL_hid_set_nonblocking = try_find_sym(sdl2, "SDL_hid_set_nonblocking");
    stub_funcs.ptr_SDL_hid_send_feature_report = try_find_sym(sdl2, "SDL_hid_send_feature_report");
    stub_funcs.ptr_SDL_hid_get_feature_report = try_find_sym(sdl2, "SDL_hid_get_feature_report");
    stub_funcs.ptr_SDL_hid_close = try_find_sym(sdl2, "SDL_hid_close");
    stub_funcs.ptr_SDL_hid_get_manufacturer_string = try_find_sym(sdl2, "SDL_hid_get_manufacturer_string");
    stub_funcs.ptr_SDL_hid_get_product_string = try_find_sym(sdl2, "SDL_hid_get_product_string");
    stub_funcs.ptr_SDL_hid_get_serial_number_string = try_find_sym(sdl2, "SDL_hid_get_serial_number_string");
    stub_funcs.ptr_SDL_hid_get_indexed_string = try_find_sym(sdl2, "SDL_hid_get_indexed_string");
    stub_funcs.ptr_SDL_hid_ble_scan = try_find_sym(sdl2, "SDL_hid_ble_scan");
    stub_funcs.ptr_SDL_SetHintWithPriority = try_find_sym(sdl2, "SDL_SetHintWithPriority");
    stub_funcs.ptr_SDL_SetHint = try_find_sym(sdl2, "SDL_SetHint");
    stub_funcs.ptr_SDL_ResetHint = try_find_sym(sdl2, "SDL_ResetHint");
    stub_funcs.ptr_SDL_ResetHints = try_find_sym(sdl2, "SDL_ResetHints");
    stub_funcs.ptr_SDL_GetHint = try_find_sym(sdl2, "SDL_GetHint");
    stub_funcs.ptr_SDL_GetHintBoolean = try_find_sym(sdl2, "SDL_GetHintBoolean");
    stub_funcs.ptr_SDL_AddHintCallback = try_find_sym(sdl2, "SDL_AddHintCallback");
    stub_funcs.ptr_SDL_DelHintCallback = try_find_sym(sdl2, "SDL_DelHintCallback");
    stub_funcs.ptr_SDL_ClearHints = try_find_sym(sdl2, "SDL_ClearHints");
    stub_funcs.ptr_SDL_LoadObject = try_find_sym(sdl2, "SDL_LoadObject");
    stub_funcs.ptr_SDL_LoadFunction = try_find_sym(sdl2, "SDL_LoadFunction");
    stub_funcs.ptr_SDL_UnloadObject = try_find_sym(sdl2, "SDL_UnloadObject");
    stub_funcs.ptr_SDL_LogSetAllPriority = try_find_sym(sdl2, "SDL_LogSetAllPriority");
    stub_funcs.ptr_SDL_LogSetPriority = try_find_sym(sdl2, "SDL_LogSetPriority");
    stub_funcs.ptr_SDL_LogGetPriority = try_find_sym(sdl2, "SDL_LogGetPriority");
    stub_funcs.ptr_SDL_LogResetPriorities = try_find_sym(sdl2, "SDL_LogResetPriorities");
    stub_funcs.ptr_SDL_LogMessageV = try_find_sym(sdl2, "SDL_LogMessageV");
    stub_funcs.ptr_SDL_LogGetOutputFunction = try_find_sym(sdl2, "SDL_LogGetOutputFunction");
    stub_funcs.ptr_SDL_LogSetOutputFunction = try_find_sym(sdl2, "SDL_LogSetOutputFunction");
    stub_funcs.ptr_SDL_ShowMessageBox = try_find_sym(sdl2, "SDL_ShowMessageBox");
    stub_funcs.ptr_SDL_ShowSimpleMessageBox = try_find_sym(sdl2, "SDL_ShowSimpleMessageBox");
    stub_funcs.ptr_SDL_Metal_CreateView = try_find_sym(sdl2, "SDL_Metal_CreateView");
    stub_funcs.ptr_SDL_Metal_DestroyView = try_find_sym(sdl2, "SDL_Metal_DestroyView");
    stub_funcs.ptr_SDL_Metal_GetLayer = try_find_sym(sdl2, "SDL_Metal_GetLayer");
    stub_funcs.ptr_SDL_Metal_GetDrawableSize = try_find_sym(sdl2, "SDL_Metal_GetDrawableSize");
    stub_funcs.ptr_SDL_GetPowerInfo = try_find_sym(sdl2, "SDL_GetPowerInfo");
    stub_funcs.ptr_SDL_GetNumRenderDrivers = try_find_sym(sdl2, "SDL_GetNumRenderDrivers");
    stub_funcs.ptr_SDL_GetRenderDriverInfo = try_find_sym(sdl2, "SDL_GetRenderDriverInfo");
    stub_funcs.ptr_SDL_CreateWindowAndRenderer = try_find_sym(sdl2, "SDL_CreateWindowAndRenderer");
    stub_funcs.ptr_SDL_CreateRenderer = try_find_sym(sdl2, "SDL_CreateRenderer");
    stub_funcs.ptr_SDL_CreateSoftwareRenderer = try_find_sym(sdl2, "SDL_CreateSoftwareRenderer");
    stub_funcs.ptr_SDL_GetRenderer = try_find_sym(sdl2, "SDL_GetRenderer");
    stub_funcs.ptr_SDL_RenderGetWindow = try_find_sym(sdl2, "SDL_RenderGetWindow");
    stub_funcs.ptr_SDL_GetRendererInfo = try_find_sym(sdl2, "SDL_GetRendererInfo");
    stub_funcs.ptr_SDL_GetRendererOutputSize = try_find_sym(sdl2, "SDL_GetRendererOutputSize");
    stub_funcs.ptr_SDL_CreateTexture = try_find_sym(sdl2, "SDL_CreateTexture");
    stub_funcs.ptr_SDL_CreateTextureFromSurface = try_find_sym(sdl2, "SDL_CreateTextureFromSurface");
    stub_funcs.ptr_SDL_QueryTexture = try_find_sym(sdl2, "SDL_QueryTexture");
    stub_funcs.ptr_SDL_SetTextureColorMod = try_find_sym(sdl2, "SDL_SetTextureColorMod");
    stub_funcs.ptr_SDL_GetTextureColorMod = try_find_sym(sdl2, "SDL_GetTextureColorMod");
    stub_funcs.ptr_SDL_SetTextureAlphaMod = try_find_sym(sdl2, "SDL_SetTextureAlphaMod");
    stub_funcs.ptr_SDL_GetTextureAlphaMod = try_find_sym(sdl2, "SDL_GetTextureAlphaMod");
    stub_funcs.ptr_SDL_SetTextureBlendMode = try_find_sym(sdl2, "SDL_SetTextureBlendMode");
    stub_funcs.ptr_SDL_GetTextureBlendMode = try_find_sym(sdl2, "SDL_GetTextureBlendMode");
    stub_funcs.ptr_SDL_SetTextureScaleMode = try_find_sym(sdl2, "SDL_SetTextureScaleMode");
    stub_funcs.ptr_SDL_GetTextureScaleMode = try_find_sym(sdl2, "SDL_GetTextureScaleMode");
    stub_funcs.ptr_SDL_SetTextureUserData = try_find_sym(sdl2, "SDL_SetTextureUserData");
    stub_funcs.ptr_SDL_GetTextureUserData = try_find_sym(sdl2, "SDL_GetTextureUserData");
    stub_funcs.ptr_SDL_UpdateTexture = try_find_sym(sdl2, "SDL_UpdateTexture");
    stub_funcs.ptr_SDL_UpdateYUVTexture = try_find_sym(sdl2, "SDL_UpdateYUVTexture");
    stub_funcs.ptr_SDL_UpdateNVTexture = try_find_sym(sdl2, "SDL_UpdateNVTexture");
    stub_funcs.ptr_SDL_LockTexture = try_find_sym(sdl2, "SDL_LockTexture");
    stub_funcs.ptr_SDL_LockTextureToSurface = try_find_sym(sdl2, "SDL_LockTextureToSurface");
    stub_funcs.ptr_SDL_UnlockTexture = try_find_sym(sdl2, "SDL_UnlockTexture");
    stub_funcs.ptr_SDL_RenderTargetSupported = try_find_sym(sdl2, "SDL_RenderTargetSupported");
    stub_funcs.ptr_SDL_SetRenderTarget = try_find_sym(sdl2, "SDL_SetRenderTarget");
    stub_funcs.ptr_SDL_GetRenderTarget = try_find_sym(sdl2, "SDL_GetRenderTarget");
    stub_funcs.ptr_SDL_RenderSetLogicalSize = try_find_sym(sdl2, "SDL_RenderSetLogicalSize");
    stub_funcs.ptr_SDL_RenderGetLogicalSize = try_find_sym(sdl2, "SDL_RenderGetLogicalSize");
    stub_funcs.ptr_SDL_RenderSetIntegerScale = try_find_sym(sdl2, "SDL_RenderSetIntegerScale");
    stub_funcs.ptr_SDL_RenderGetIntegerScale = try_find_sym(sdl2, "SDL_RenderGetIntegerScale");
    stub_funcs.ptr_SDL_RenderSetViewport = try_find_sym(sdl2, "SDL_RenderSetViewport");
    stub_funcs.ptr_SDL_RenderGetViewport = try_find_sym(sdl2, "SDL_RenderGetViewport");
    stub_funcs.ptr_SDL_RenderSetClipRect = try_find_sym(sdl2, "SDL_RenderSetClipRect");
    stub_funcs.ptr_SDL_RenderGetClipRect = try_find_sym(sdl2, "SDL_RenderGetClipRect");
    stub_funcs.ptr_SDL_RenderIsClipEnabled = try_find_sym(sdl2, "SDL_RenderIsClipEnabled");
    stub_funcs.ptr_SDL_RenderSetScale = try_find_sym(sdl2, "SDL_RenderSetScale");
    stub_funcs.ptr_SDL_RenderGetScale = try_find_sym(sdl2, "SDL_RenderGetScale");
    stub_funcs.ptr_SDL_RenderWindowToLogical = try_find_sym(sdl2, "SDL_RenderWindowToLogical");
    stub_funcs.ptr_SDL_RenderLogicalToWindow = try_find_sym(sdl2, "SDL_RenderLogicalToWindow");
    stub_funcs.ptr_SDL_SetRenderDrawColor = try_find_sym(sdl2, "SDL_SetRenderDrawColor");
    stub_funcs.ptr_SDL_GetRenderDrawColor = try_find_sym(sdl2, "SDL_GetRenderDrawColor");
    stub_funcs.ptr_SDL_SetRenderDrawBlendMode = try_find_sym(sdl2, "SDL_SetRenderDrawBlendMode");
    stub_funcs.ptr_SDL_GetRenderDrawBlendMode = try_find_sym(sdl2, "SDL_GetRenderDrawBlendMode");
    stub_funcs.ptr_SDL_RenderClear = try_find_sym(sdl2, "SDL_RenderClear");
    stub_funcs.ptr_SDL_RenderDrawPoint = try_find_sym(sdl2, "SDL_RenderDrawPoint");
    stub_funcs.ptr_SDL_RenderDrawPoints = try_find_sym(sdl2, "SDL_RenderDrawPoints");
    stub_funcs.ptr_SDL_RenderDrawLine = try_find_sym(sdl2, "SDL_RenderDrawLine");
    stub_funcs.ptr_SDL_RenderDrawLines = try_find_sym(sdl2, "SDL_RenderDrawLines");
    stub_funcs.ptr_SDL_RenderDrawRect = try_find_sym(sdl2, "SDL_RenderDrawRect");
    stub_funcs.ptr_SDL_RenderDrawRects = try_find_sym(sdl2, "SDL_RenderDrawRects");
    stub_funcs.ptr_SDL_RenderFillRect = try_find_sym(sdl2, "SDL_RenderFillRect");
    stub_funcs.ptr_SDL_RenderFillRects = try_find_sym(sdl2, "SDL_RenderFillRects");
    stub_funcs.ptr_SDL_RenderCopy = try_find_sym(sdl2, "SDL_RenderCopy");
    stub_funcs.ptr_SDL_RenderCopyEx = try_find_sym(sdl2, "SDL_RenderCopyEx");
    stub_funcs.ptr_SDL_RenderDrawPointF = try_find_sym(sdl2, "SDL_RenderDrawPointF");
    stub_funcs.ptr_SDL_RenderDrawPointsF = try_find_sym(sdl2, "SDL_RenderDrawPointsF");
    stub_funcs.ptr_SDL_RenderDrawLineF = try_find_sym(sdl2, "SDL_RenderDrawLineF");
    stub_funcs.ptr_SDL_RenderDrawLinesF = try_find_sym(sdl2, "SDL_RenderDrawLinesF");
    stub_funcs.ptr_SDL_RenderDrawRectF = try_find_sym(sdl2, "SDL_RenderDrawRectF");
    stub_funcs.ptr_SDL_RenderDrawRectsF = try_find_sym(sdl2, "SDL_RenderDrawRectsF");
    stub_funcs.ptr_SDL_RenderFillRectF = try_find_sym(sdl2, "SDL_RenderFillRectF");
    stub_funcs.ptr_SDL_RenderFillRectsF = try_find_sym(sdl2, "SDL_RenderFillRectsF");
    stub_funcs.ptr_SDL_RenderCopyF = try_find_sym(sdl2, "SDL_RenderCopyF");
    stub_funcs.ptr_SDL_RenderCopyExF = try_find_sym(sdl2, "SDL_RenderCopyExF");
    stub_funcs.ptr_SDL_RenderGeometry = try_find_sym(sdl2, "SDL_RenderGeometry");
    stub_funcs.ptr_SDL_RenderGeometryRaw = try_find_sym(sdl2, "SDL_RenderGeometryRaw");
    stub_funcs.ptr_SDL_RenderReadPixels = try_find_sym(sdl2, "SDL_RenderReadPixels");
    stub_funcs.ptr_SDL_RenderPresent = try_find_sym(sdl2, "SDL_RenderPresent");
    stub_funcs.ptr_SDL_DestroyTexture = try_find_sym(sdl2, "SDL_DestroyTexture");
    stub_funcs.ptr_SDL_DestroyRenderer = try_find_sym(sdl2, "SDL_DestroyRenderer");
    stub_funcs.ptr_SDL_RenderFlush = try_find_sym(sdl2, "SDL_RenderFlush");
    stub_funcs.ptr_SDL_GL_BindTexture = try_find_sym(sdl2, "SDL_GL_BindTexture");
    stub_funcs.ptr_SDL_GL_UnbindTexture = try_find_sym(sdl2, "SDL_GL_UnbindTexture");
    stub_funcs.ptr_SDL_RenderGetMetalLayer = try_find_sym(sdl2, "SDL_RenderGetMetalLayer");
    stub_funcs.ptr_SDL_RenderGetMetalCommandEncoder = try_find_sym(sdl2, "SDL_RenderGetMetalCommandEncoder");
    stub_funcs.ptr_SDL_RenderSetVSync = try_find_sym(sdl2, "SDL_RenderSetVSync");
    stub_funcs.ptr_SDL_CreateShapedWindow = try_find_sym(sdl2, "SDL_CreateShapedWindow");
    stub_funcs.ptr_SDL_IsShapedWindow = try_find_sym(sdl2, "SDL_IsShapedWindow");
    stub_funcs.ptr_SDL_SetWindowShape = try_find_sym(sdl2, "SDL_SetWindowShape");
    stub_funcs.ptr_SDL_GetShapedWindowMode = try_find_sym(sdl2, "SDL_GetShapedWindowMode");
    stub_funcs.ptr_SDL_LinuxSetThreadPriority = try_find_sym(sdl2, "SDL_LinuxSetThreadPriority");
    stub_funcs.ptr_SDL_LinuxSetThreadPriorityAndPolicy = try_find_sym(sdl2, "SDL_LinuxSetThreadPriorityAndPolicy");
    stub_funcs.ptr_SDL_IsTablet = try_find_sym(sdl2, "SDL_IsTablet");
    stub_funcs.ptr_SDL_OnApplicationWillTerminate = try_find_sym(sdl2, "SDL_OnApplicationWillTerminate");
    stub_funcs.ptr_SDL_OnApplicationDidReceiveMemoryWarning = try_find_sym(sdl2, "SDL_OnApplicationDidReceiveMemoryWarning");
    stub_funcs.ptr_SDL_OnApplicationWillResignActive = try_find_sym(sdl2, "SDL_OnApplicationWillResignActive");
    stub_funcs.ptr_SDL_OnApplicationDidEnterBackground = try_find_sym(sdl2, "SDL_OnApplicationDidEnterBackground");
    stub_funcs.ptr_SDL_OnApplicationWillEnterForeground = try_find_sym(sdl2, "SDL_OnApplicationWillEnterForeground");
    stub_funcs.ptr_SDL_OnApplicationDidBecomeActive = try_find_sym(sdl2, "SDL_OnApplicationDidBecomeActive");
    stub_funcs.ptr_SDL_GetTicks = try_find_sym(sdl2, "SDL_GetTicks");
    stub_funcs.ptr_SDL_GetTicks64 = try_find_sym(sdl2, "SDL_GetTicks64");
    stub_funcs.ptr_SDL_GetPerformanceCounter = try_find_sym(sdl2, "SDL_GetPerformanceCounter");
    stub_funcs.ptr_SDL_GetPerformanceFrequency = try_find_sym(sdl2, "SDL_GetPerformanceFrequency");
    stub_funcs.ptr_SDL_Delay = try_find_sym(sdl2, "SDL_Delay");
    stub_funcs.ptr_SDL_AddTimer = try_find_sym(sdl2, "SDL_AddTimer");
    stub_funcs.ptr_SDL_RemoveTimer = try_find_sym(sdl2, "SDL_RemoveTimer");
    stub_funcs.ptr_SDL_GetVersion = try_find_sym(sdl2, "SDL_GetVersion");
    stub_funcs.ptr_SDL_GetRevision = try_find_sym(sdl2, "SDL_GetRevision");
    stub_funcs.ptr_SDL_GetRevisionNumber = try_find_sym(sdl2, "SDL_GetRevisionNumber");
    stub_funcs.ptr_SDL_GetPreferredLocales = try_find_sym(sdl2, "SDL_GetPreferredLocales");
    stub_funcs.ptr_SDL_OpenURL = try_find_sym(sdl2, "SDL_OpenURL");
    stub_funcs.ptr_SDL_Init = try_find_sym(sdl2, "SDL_Init");
    stub_funcs.ptr_SDL_InitSubSystem = try_find_sym(sdl2, "SDL_InitSubSystem");
    stub_funcs.ptr_SDL_QuitSubSystem = try_find_sym(sdl2, "SDL_QuitSubSystem");
    stub_funcs.ptr_SDL_WasInit = try_find_sym(sdl2, "SDL_WasInit");
    stub_funcs.ptr_SDL_Quit = try_find_sym(sdl2, "SDL_Quit");
}

const char * (SDL_GetPlatform)(void) { return stub_funcs.ptr_SDL_GetPlatform(); }
void * (SDL_malloc)(size_t size) { return stub_funcs.ptr_SDL_malloc(size); }
void * (SDL_calloc)(size_t nmemb, size_t size) { return stub_funcs.ptr_SDL_calloc(nmemb, size); }
void * (SDL_realloc)(void * mem, size_t size) { return stub_funcs.ptr_SDL_realloc(mem, size); }
void (SDL_free)(void * mem) { stub_funcs.ptr_SDL_free(mem); }
void (SDL_GetOriginalMemoryFunctions)(SDL_malloc_func * malloc_func, SDL_calloc_func * calloc_func, SDL_realloc_func * realloc_func, SDL_free_func * free_func) { stub_funcs.ptr_SDL_GetOriginalMemoryFunctions(malloc_func, calloc_func, realloc_func, free_func); }
void (SDL_GetMemoryFunctions)(SDL_malloc_func * malloc_func, SDL_calloc_func * calloc_func, SDL_realloc_func * realloc_func, SDL_free_func * free_func) { stub_funcs.ptr_SDL_GetMemoryFunctions(malloc_func, calloc_func, realloc_func, free_func); }
int (SDL_SetMemoryFunctions)(SDL_malloc_func malloc_func, SDL_calloc_func calloc_func, SDL_realloc_func realloc_func, SDL_free_func free_func) { return stub_funcs.ptr_SDL_SetMemoryFunctions(malloc_func, calloc_func, realloc_func, free_func); }
int (SDL_GetNumAllocations)(void) { return stub_funcs.ptr_SDL_GetNumAllocations(); }
char * (SDL_getenv)(const char * name) { return stub_funcs.ptr_SDL_getenv(name); }
int (SDL_setenv)(const char * name, const char * value, int overwrite) { return stub_funcs.ptr_SDL_setenv(name, value, overwrite); }
void (SDL_qsort)(void * base, size_t nmemb, size_t size, int (*compare)(const void * , const void * )) { stub_funcs.ptr_SDL_qsort(base, nmemb, size, compare); }
void * (SDL_bsearch)(const void * key, const void * base, size_t nmemb, size_t size, int (*compare)(const void * , const void * )) { return stub_funcs.ptr_SDL_bsearch(key, base, nmemb, size, compare); }
int (SDL_abs)(int x) { return stub_funcs.ptr_SDL_abs(x); }
int (SDL_isalpha)(int x) { return stub_funcs.ptr_SDL_isalpha(x); }
int (SDL_isalnum)(int x) { return stub_funcs.ptr_SDL_isalnum(x); }
int (SDL_isblank)(int x) { return stub_funcs.ptr_SDL_isblank(x); }
int (SDL_iscntrl)(int x) { return stub_funcs.ptr_SDL_iscntrl(x); }
int (SDL_isdigit)(int x) { return stub_funcs.ptr_SDL_isdigit(x); }
int (SDL_isxdigit)(int x) { return stub_funcs.ptr_SDL_isxdigit(x); }
int (SDL_ispunct)(int x) { return stub_funcs.ptr_SDL_ispunct(x); }
int (SDL_isspace)(int x) { return stub_funcs.ptr_SDL_isspace(x); }
int (SDL_isupper)(int x) { return stub_funcs.ptr_SDL_isupper(x); }
int (SDL_islower)(int x) { return stub_funcs.ptr_SDL_islower(x); }
int (SDL_isprint)(int x) { return stub_funcs.ptr_SDL_isprint(x); }
int (SDL_isgraph)(int x) { return stub_funcs.ptr_SDL_isgraph(x); }
int (SDL_toupper)(int x) { return stub_funcs.ptr_SDL_toupper(x); }
int (SDL_tolower)(int x) { return stub_funcs.ptr_SDL_tolower(x); }
Uint16 (SDL_crc16)(Uint16 crc, const void * data, size_t len) { return stub_funcs.ptr_SDL_crc16(crc, data, len); }
Uint32 (SDL_crc32)(Uint32 crc, const void * data, size_t len) { return stub_funcs.ptr_SDL_crc32(crc, data, len); }
void * (SDL_memset)(void * dst, int c, size_t len) { return stub_funcs.ptr_SDL_memset(dst, c, len); }
void * (SDL_memcpy)(void * dst, const void * src, size_t len) { return stub_funcs.ptr_SDL_memcpy(dst, src, len); }
void * (SDL_memmove)(void * dst, const void * src, size_t len) { return stub_funcs.ptr_SDL_memmove(dst, src, len); }
int (SDL_memcmp)(const void * s1, const void * s2, size_t len) { return stub_funcs.ptr_SDL_memcmp(s1, s2, len); }
size_t (SDL_wcslen)(const wchar_t * wstr) { return stub_funcs.ptr_SDL_wcslen(wstr); }
size_t (SDL_wcslcpy)(wchar_t * dst, const wchar_t * src, size_t maxlen) { return stub_funcs.ptr_SDL_wcslcpy(dst, src, maxlen); }
size_t (SDL_wcslcat)(wchar_t * dst, const wchar_t * src, size_t maxlen) { return stub_funcs.ptr_SDL_wcslcat(dst, src, maxlen); }
wchar_t * (SDL_wcsdup)(const wchar_t * wstr) { return stub_funcs.ptr_SDL_wcsdup(wstr); }
wchar_t * (SDL_wcsstr)(const wchar_t * haystack, const wchar_t * needle) { return stub_funcs.ptr_SDL_wcsstr(haystack, needle); }
int (SDL_wcscmp)(const wchar_t * str1, const wchar_t * str2) { return stub_funcs.ptr_SDL_wcscmp(str1, str2); }
int (SDL_wcsncmp)(const wchar_t * str1, const wchar_t * str2, size_t maxlen) { return stub_funcs.ptr_SDL_wcsncmp(str1, str2, maxlen); }
int (SDL_wcscasecmp)(const wchar_t * str1, const wchar_t * str2) { return stub_funcs.ptr_SDL_wcscasecmp(str1, str2); }
int (SDL_wcsncasecmp)(const wchar_t * str1, const wchar_t * str2, size_t len) { return stub_funcs.ptr_SDL_wcsncasecmp(str1, str2, len); }
size_t (SDL_strlen)(const char * str) { return stub_funcs.ptr_SDL_strlen(str); }
size_t (SDL_strlcpy)(char * dst, const char * src, size_t maxlen) { return stub_funcs.ptr_SDL_strlcpy(dst, src, maxlen); }
size_t (SDL_utf8strlcpy)(char * dst, const char * src, size_t dst_bytes) { return stub_funcs.ptr_SDL_utf8strlcpy(dst, src, dst_bytes); }
size_t (SDL_strlcat)(char * dst, const char * src, size_t maxlen) { return stub_funcs.ptr_SDL_strlcat(dst, src, maxlen); }
char * (SDL_strdup)(const char * str) { return stub_funcs.ptr_SDL_strdup(str); }
char * (SDL_strrev)(char * str) { return stub_funcs.ptr_SDL_strrev(str); }
char * (SDL_strupr)(char * str) { return stub_funcs.ptr_SDL_strupr(str); }
char * (SDL_strlwr)(char * str) { return stub_funcs.ptr_SDL_strlwr(str); }
char * (SDL_strchr)(const char * str, int c) { return stub_funcs.ptr_SDL_strchr(str, c); }
char * (SDL_strrchr)(const char * str, int c) { return stub_funcs.ptr_SDL_strrchr(str, c); }
char * (SDL_strstr)(const char * haystack, const char * needle) { return stub_funcs.ptr_SDL_strstr(haystack, needle); }
char * (SDL_strcasestr)(const char * haystack, const char * needle) { return stub_funcs.ptr_SDL_strcasestr(haystack, needle); }
char * (SDL_strtokr)(char * s1, const char * s2, char * * saveptr) { return stub_funcs.ptr_SDL_strtokr(s1, s2, saveptr); }
size_t (SDL_utf8strlen)(const char * str) { return stub_funcs.ptr_SDL_utf8strlen(str); }
size_t (SDL_utf8strnlen)(const char * str, size_t bytes) { return stub_funcs.ptr_SDL_utf8strnlen(str, bytes); }
char * (SDL_itoa)(int value, char * str, int radix) { return stub_funcs.ptr_SDL_itoa(value, str, radix); }
char * (SDL_uitoa)(unsigned int value, char * str, int radix) { return stub_funcs.ptr_SDL_uitoa(value, str, radix); }
char * (SDL_ltoa)(long value, char * str, int radix) { return stub_funcs.ptr_SDL_ltoa(value, str, radix); }
char * (SDL_ultoa)(unsigned long value, char * str, int radix) { return stub_funcs.ptr_SDL_ultoa(value, str, radix); }
char * (SDL_lltoa)(Sint64 value, char * str, int radix) { return stub_funcs.ptr_SDL_lltoa(value, str, radix); }
char * (SDL_ulltoa)(Uint64 value, char * str, int radix) { return stub_funcs.ptr_SDL_ulltoa(value, str, radix); }
int (SDL_atoi)(const char * str) { return stub_funcs.ptr_SDL_atoi(str); }
double (SDL_atof)(const char * str) { return stub_funcs.ptr_SDL_atof(str); }
long (SDL_strtol)(const char * str, char * * endp, int base) { return stub_funcs.ptr_SDL_strtol(str, endp, base); }
unsigned long (SDL_strtoul)(const char * str, char * * endp, int base) { return stub_funcs.ptr_SDL_strtoul(str, endp, base); }
Sint64 (SDL_strtoll)(const char * str, char * * endp, int base) { return stub_funcs.ptr_SDL_strtoll(str, endp, base); }
Uint64 (SDL_strtoull)(const char * str, char * * endp, int base) { return stub_funcs.ptr_SDL_strtoull(str, endp, base); }
double (SDL_strtod)(const char * str, char * * endp) { return stub_funcs.ptr_SDL_strtod(str, endp); }
int (SDL_strcmp)(const char * str1, const char * str2) { return stub_funcs.ptr_SDL_strcmp(str1, str2); }
int (SDL_strncmp)(const char * str1, const char * str2, size_t maxlen) { return stub_funcs.ptr_SDL_strncmp(str1, str2, maxlen); }
int (SDL_strcasecmp)(const char * str1, const char * str2) { return stub_funcs.ptr_SDL_strcasecmp(str1, str2); }
int (SDL_strncasecmp)(const char * str1, const char * str2, size_t len) { return stub_funcs.ptr_SDL_strncasecmp(str1, str2, len); }
int (SDL_sscanf)(const char * text, const char * fmt, ...) { int ret; va_list vaargs; va_start(vaargs, fmt); ret = stub_funcs.ptr_SDL_vsscanf(text, fmt, vaargs); va_end(vaargs); return ret; }
int (SDL_vsscanf)(const char * text, const char * fmt, va_list ap) { return stub_funcs.ptr_SDL_vsscanf(text, fmt, ap); }
int (SDL_snprintf)(char * text, size_t maxlen, const char * fmt, ...) { int ret; va_list vaargs; va_start(vaargs, fmt); ret = stub_funcs.ptr_SDL_vsnprintf(text, maxlen, fmt, vaargs); va_end(vaargs); return ret; }
int (SDL_vsnprintf)(char * text, size_t maxlen, const char * fmt, va_list ap) { return stub_funcs.ptr_SDL_vsnprintf(text, maxlen, fmt, ap); }
int (SDL_asprintf)(char * * strp, const char * fmt, ...) { int ret; va_list vaargs; va_start(vaargs, fmt); ret = stub_funcs.ptr_SDL_vasprintf(strp, fmt, vaargs); va_end(vaargs); return ret; }
int (SDL_vasprintf)(char * * strp, const char * fmt, va_list ap) { return stub_funcs.ptr_SDL_vasprintf(strp, fmt, ap); }
double (SDL_acos)(double x) { return stub_funcs.ptr_SDL_acos(x); }
float (SDL_acosf)(float x) { return stub_funcs.ptr_SDL_acosf(x); }
double (SDL_asin)(double x) { return stub_funcs.ptr_SDL_asin(x); }
float (SDL_asinf)(float x) { return stub_funcs.ptr_SDL_asinf(x); }
double (SDL_atan)(double x) { return stub_funcs.ptr_SDL_atan(x); }
float (SDL_atanf)(float x) { return stub_funcs.ptr_SDL_atanf(x); }
double (SDL_atan2)(double y, double x) { return stub_funcs.ptr_SDL_atan2(y, x); }
float (SDL_atan2f)(float y, float x) { return stub_funcs.ptr_SDL_atan2f(y, x); }
double (SDL_ceil)(double x) { return stub_funcs.ptr_SDL_ceil(x); }
float (SDL_ceilf)(float x) { return stub_funcs.ptr_SDL_ceilf(x); }
double (SDL_copysign)(double x, double y) { return stub_funcs.ptr_SDL_copysign(x, y); }
float (SDL_copysignf)(float x, float y) { return stub_funcs.ptr_SDL_copysignf(x, y); }
double (SDL_cos)(double x) { return stub_funcs.ptr_SDL_cos(x); }
float (SDL_cosf)(float x) { return stub_funcs.ptr_SDL_cosf(x); }
double (SDL_exp)(double x) { return stub_funcs.ptr_SDL_exp(x); }
float (SDL_expf)(float x) { return stub_funcs.ptr_SDL_expf(x); }
double (SDL_fabs)(double x) { return stub_funcs.ptr_SDL_fabs(x); }
float (SDL_fabsf)(float x) { return stub_funcs.ptr_SDL_fabsf(x); }
double (SDL_floor)(double x) { return stub_funcs.ptr_SDL_floor(x); }
float (SDL_floorf)(float x) { return stub_funcs.ptr_SDL_floorf(x); }
double (SDL_trunc)(double x) { return stub_funcs.ptr_SDL_trunc(x); }
float (SDL_truncf)(float x) { return stub_funcs.ptr_SDL_truncf(x); }
double (SDL_fmod)(double x, double y) { return stub_funcs.ptr_SDL_fmod(x, y); }
float (SDL_fmodf)(float x, float y) { return stub_funcs.ptr_SDL_fmodf(x, y); }
double (SDL_log)(double x) { return stub_funcs.ptr_SDL_log(x); }
float (SDL_logf)(float x) { return stub_funcs.ptr_SDL_logf(x); }
double (SDL_log10)(double x) { return stub_funcs.ptr_SDL_log10(x); }
float (SDL_log10f)(float x) { return stub_funcs.ptr_SDL_log10f(x); }
double (SDL_pow)(double x, double y) { return stub_funcs.ptr_SDL_pow(x, y); }
float (SDL_powf)(float x, float y) { return stub_funcs.ptr_SDL_powf(x, y); }
double (SDL_round)(double x) { return stub_funcs.ptr_SDL_round(x); }
float (SDL_roundf)(float x) { return stub_funcs.ptr_SDL_roundf(x); }
long (SDL_lround)(double x) { return stub_funcs.ptr_SDL_lround(x); }
long (SDL_lroundf)(float x) { return stub_funcs.ptr_SDL_lroundf(x); }
double (SDL_scalbn)(double x, int n) { return stub_funcs.ptr_SDL_scalbn(x, n); }
float (SDL_scalbnf)(float x, int n) { return stub_funcs.ptr_SDL_scalbnf(x, n); }
double (SDL_sin)(double x) { return stub_funcs.ptr_SDL_sin(x); }
float (SDL_sinf)(float x) { return stub_funcs.ptr_SDL_sinf(x); }
double (SDL_sqrt)(double x) { return stub_funcs.ptr_SDL_sqrt(x); }
float (SDL_sqrtf)(float x) { return stub_funcs.ptr_SDL_sqrtf(x); }
double (SDL_tan)(double x) { return stub_funcs.ptr_SDL_tan(x); }
float (SDL_tanf)(float x) { return stub_funcs.ptr_SDL_tanf(x); }
SDL_iconv_t (SDL_iconv_open)(const char * tocode, const char * fromcode) { return stub_funcs.ptr_SDL_iconv_open(tocode, fromcode); }
int (SDL_iconv_close)(SDL_iconv_t cd) { return stub_funcs.ptr_SDL_iconv_close(cd); }
size_t (SDL_iconv)(SDL_iconv_t cd, const char * * inbuf, size_t * inbytesleft, char * * outbuf, size_t * outbytesleft) { return stub_funcs.ptr_SDL_iconv(cd, inbuf, inbytesleft, outbuf, outbytesleft); }
char * (SDL_iconv_string)(const char * tocode, const char * fromcode, const char * inbuf, size_t inbytesleft) { return stub_funcs.ptr_SDL_iconv_string(tocode, fromcode, inbuf, inbytesleft); }
int (SDL_main)(int argc, char * argv[]) { return stub_funcs.ptr_SDL_main(argc, argv); }
void (SDL_SetMainReady)(void) { stub_funcs.ptr_SDL_SetMainReady(); }
SDL_AssertState (SDL_ReportAssertion)(SDL_AssertData * _1, const char * _2, const char * _3, int _4) { return stub_funcs.ptr_SDL_ReportAssertion(_1, _2, _3, _4); }
void (SDL_SetAssertionHandler)(SDL_AssertionHandler handler, void * userdata) { stub_funcs.ptr_SDL_SetAssertionHandler(handler, userdata); }
SDL_AssertionHandler (SDL_GetDefaultAssertionHandler)(void) { return stub_funcs.ptr_SDL_GetDefaultAssertionHandler(); }
SDL_AssertionHandler (SDL_GetAssertionHandler)(void * * puserdata) { return stub_funcs.ptr_SDL_GetAssertionHandler(puserdata); }
const SDL_AssertData * (SDL_GetAssertionReport)(void) { return stub_funcs.ptr_SDL_GetAssertionReport(); }
void (SDL_ResetAssertionReport)(void) { stub_funcs.ptr_SDL_ResetAssertionReport(); }
SDL_bool (SDL_AtomicTryLock)(SDL_SpinLock * lock) { return stub_funcs.ptr_SDL_AtomicTryLock(lock); }
void (SDL_AtomicLock)(SDL_SpinLock * lock) { stub_funcs.ptr_SDL_AtomicLock(lock); }
void (SDL_AtomicUnlock)(SDL_SpinLock * lock) { stub_funcs.ptr_SDL_AtomicUnlock(lock); }
void (SDL_MemoryBarrierReleaseFunction)(void) { stub_funcs.ptr_SDL_MemoryBarrierReleaseFunction(); }
void (SDL_MemoryBarrierAcquireFunction)(void) { stub_funcs.ptr_SDL_MemoryBarrierAcquireFunction(); }
SDL_bool (SDL_AtomicCAS)(SDL_atomic_t * a, int oldval, int newval) { return stub_funcs.ptr_SDL_AtomicCAS(a, oldval, newval); }
int (SDL_AtomicSet)(SDL_atomic_t * a, int v) { return stub_funcs.ptr_SDL_AtomicSet(a, v); }
int (SDL_AtomicGet)(SDL_atomic_t * a) { return stub_funcs.ptr_SDL_AtomicGet(a); }
int (SDL_AtomicAdd)(SDL_atomic_t * a, int v) { return stub_funcs.ptr_SDL_AtomicAdd(a, v); }
SDL_bool (SDL_AtomicCASPtr)(void * * a, void * oldval, void * newval) { return stub_funcs.ptr_SDL_AtomicCASPtr(a, oldval, newval); }
void * (SDL_AtomicSetPtr)(void * * a, void * v) { return stub_funcs.ptr_SDL_AtomicSetPtr(a, v); }
void * (SDL_AtomicGetPtr)(void * * a) { return stub_funcs.ptr_SDL_AtomicGetPtr(a); }
const char * (SDL_GetError)(void) { return stub_funcs.ptr_SDL_GetError(); }
char * (SDL_GetErrorMsg)(char * errstr, int maxlen) { return stub_funcs.ptr_SDL_GetErrorMsg(errstr, maxlen); }
void (SDL_ClearError)(void) { stub_funcs.ptr_SDL_ClearError(); }
int (SDL_Error)(SDL_errorcode code) { return stub_funcs.ptr_SDL_Error(code); }
SDL_mutex * (SDL_CreateMutex)(void) { return stub_funcs.ptr_SDL_CreateMutex(); }
int (SDL_LockMutex)(SDL_mutex * mutex) { return stub_funcs.ptr_SDL_LockMutex(mutex); }
int (SDL_TryLockMutex)(SDL_mutex * mutex) { return stub_funcs.ptr_SDL_TryLockMutex(mutex); }
int (SDL_UnlockMutex)(SDL_mutex * mutex) { return stub_funcs.ptr_SDL_UnlockMutex(mutex); }
void (SDL_DestroyMutex)(SDL_mutex * mutex) { stub_funcs.ptr_SDL_DestroyMutex(mutex); }
SDL_sem * (SDL_CreateSemaphore)(Uint32 initial_value) { return stub_funcs.ptr_SDL_CreateSemaphore(initial_value); }
void (SDL_DestroySemaphore)(SDL_sem * sem) { stub_funcs.ptr_SDL_DestroySemaphore(sem); }
int (SDL_SemWait)(SDL_sem * sem) { return stub_funcs.ptr_SDL_SemWait(sem); }
int (SDL_SemTryWait)(SDL_sem * sem) { return stub_funcs.ptr_SDL_SemTryWait(sem); }
int (SDL_SemWaitTimeout)(SDL_sem * sem, Uint32 timeout) { return stub_funcs.ptr_SDL_SemWaitTimeout(sem, timeout); }
int (SDL_SemPost)(SDL_sem * sem) { return stub_funcs.ptr_SDL_SemPost(sem); }
Uint32 (SDL_SemValue)(SDL_sem * sem) { return stub_funcs.ptr_SDL_SemValue(sem); }
SDL_cond * (SDL_CreateCond)(void) { return stub_funcs.ptr_SDL_CreateCond(); }
void (SDL_DestroyCond)(SDL_cond * cond) { stub_funcs.ptr_SDL_DestroyCond(cond); }
int (SDL_CondSignal)(SDL_cond * cond) { return stub_funcs.ptr_SDL_CondSignal(cond); }
int (SDL_CondBroadcast)(SDL_cond * cond) { return stub_funcs.ptr_SDL_CondBroadcast(cond); }
int (SDL_CondWait)(SDL_cond * cond, SDL_mutex * mutex) { return stub_funcs.ptr_SDL_CondWait(cond, mutex); }
int (SDL_CondWaitTimeout)(SDL_cond * cond, SDL_mutex * mutex, Uint32 ms) { return stub_funcs.ptr_SDL_CondWaitTimeout(cond, mutex, ms); }
SDL_Thread * (SDL_CreateThread)(SDL_ThreadFunction fn, const char * name, void * data) { return stub_funcs.ptr_SDL_CreateThread(fn, name, data); }
SDL_Thread * (SDL_CreateThreadWithStackSize)(SDL_ThreadFunction fn, const char * name, const size_t stacksize, void * data) { return stub_funcs.ptr_SDL_CreateThreadWithStackSize(fn, name, stacksize, data); }
const char * (SDL_GetThreadName)(SDL_Thread * thread) { return stub_funcs.ptr_SDL_GetThreadName(thread); }
SDL_threadID (SDL_ThreadID)(void) { return stub_funcs.ptr_SDL_ThreadID(); }
SDL_threadID (SDL_GetThreadID)(SDL_Thread * thread) { return stub_funcs.ptr_SDL_GetThreadID(thread); }
int (SDL_SetThreadPriority)(SDL_ThreadPriority priority) { return stub_funcs.ptr_SDL_SetThreadPriority(priority); }
void (SDL_WaitThread)(SDL_Thread * thread, int * status) { stub_funcs.ptr_SDL_WaitThread(thread, status); }
void (SDL_DetachThread)(SDL_Thread * thread) { stub_funcs.ptr_SDL_DetachThread(thread); }
SDL_TLSID (SDL_TLSCreate)(void) { return stub_funcs.ptr_SDL_TLSCreate(); }
void * (SDL_TLSGet)(SDL_TLSID id) { return stub_funcs.ptr_SDL_TLSGet(id); }
int (SDL_TLSSet)(SDL_TLSID id, const void * value, void (*destructor)(void * )) { return stub_funcs.ptr_SDL_TLSSet(id, value, destructor); }
void (SDL_TLSCleanup)(void) { stub_funcs.ptr_SDL_TLSCleanup(); }
SDL_RWops * (SDL_RWFromFile)(const char * file, const char * mode) { return stub_funcs.ptr_SDL_RWFromFile(file, mode); }
SDL_RWops * (SDL_RWFromFP)(FILE * fp, SDL_bool autoclose) { return stub_funcs.ptr_SDL_RWFromFP(fp, autoclose); }
SDL_RWops * (SDL_RWFromMem)(void * mem, int size) { return stub_funcs.ptr_SDL_RWFromMem(mem, size); }
SDL_RWops * (SDL_RWFromConstMem)(const void * mem, int size) { return stub_funcs.ptr_SDL_RWFromConstMem(mem, size); }
SDL_RWops * (SDL_AllocRW)(void) { return stub_funcs.ptr_SDL_AllocRW(); }
void (SDL_FreeRW)(SDL_RWops * area) { stub_funcs.ptr_SDL_FreeRW(area); }
Sint64 (SDL_RWsize)(SDL_RWops * context) { return stub_funcs.ptr_SDL_RWsize(context); }
Sint64 (SDL_RWseek)(SDL_RWops * context, Sint64 offset, int whence) { return stub_funcs.ptr_SDL_RWseek(context, offset, whence); }
Sint64 (SDL_RWtell)(SDL_RWops * context) { return stub_funcs.ptr_SDL_RWtell(context); }
size_t (SDL_RWread)(SDL_RWops * context, void * ptr, size_t size, size_t maxnum) { return stub_funcs.ptr_SDL_RWread(context, ptr, size, maxnum); }
size_t (SDL_RWwrite)(SDL_RWops * context, const void * ptr, size_t size, size_t num) { return stub_funcs.ptr_SDL_RWwrite(context, ptr, size, num); }
int (SDL_RWclose)(SDL_RWops * context) { return stub_funcs.ptr_SDL_RWclose(context); }
void * (SDL_LoadFile_RW)(SDL_RWops * src, size_t * datasize, int freesrc) { return stub_funcs.ptr_SDL_LoadFile_RW(src, datasize, freesrc); }
void * (SDL_LoadFile)(const char * file, size_t * datasize) { return stub_funcs.ptr_SDL_LoadFile(file, datasize); }
Uint8 (SDL_ReadU8)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadU8(src); }
Uint16 (SDL_ReadLE16)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadLE16(src); }
Uint16 (SDL_ReadBE16)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadBE16(src); }
Uint32 (SDL_ReadLE32)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadLE32(src); }
Uint32 (SDL_ReadBE32)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadBE32(src); }
Uint64 (SDL_ReadLE64)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadLE64(src); }
Uint64 (SDL_ReadBE64)(SDL_RWops * src) { return stub_funcs.ptr_SDL_ReadBE64(src); }
size_t (SDL_WriteU8)(SDL_RWops * dst, Uint8 value) { return stub_funcs.ptr_SDL_WriteU8(dst, value); }
size_t (SDL_WriteLE16)(SDL_RWops * dst, Uint16 value) { return stub_funcs.ptr_SDL_WriteLE16(dst, value); }
size_t (SDL_WriteBE16)(SDL_RWops * dst, Uint16 value) { return stub_funcs.ptr_SDL_WriteBE16(dst, value); }
size_t (SDL_WriteLE32)(SDL_RWops * dst, Uint32 value) { return stub_funcs.ptr_SDL_WriteLE32(dst, value); }
size_t (SDL_WriteBE32)(SDL_RWops * dst, Uint32 value) { return stub_funcs.ptr_SDL_WriteBE32(dst, value); }
size_t (SDL_WriteLE64)(SDL_RWops * dst, Uint64 value) { return stub_funcs.ptr_SDL_WriteLE64(dst, value); }
size_t (SDL_WriteBE64)(SDL_RWops * dst, Uint64 value) { return stub_funcs.ptr_SDL_WriteBE64(dst, value); }
int (SDL_GetNumAudioDrivers)(void) { return stub_funcs.ptr_SDL_GetNumAudioDrivers(); }
const char * (SDL_GetAudioDriver)(int index) { return stub_funcs.ptr_SDL_GetAudioDriver(index); }
int (SDL_AudioInit)(const char * driver_name) { return stub_funcs.ptr_SDL_AudioInit(driver_name); }
void (SDL_AudioQuit)(void) { stub_funcs.ptr_SDL_AudioQuit(); }
const char * (SDL_GetCurrentAudioDriver)(void) { return stub_funcs.ptr_SDL_GetCurrentAudioDriver(); }
int (SDL_OpenAudio)(SDL_AudioSpec * desired, SDL_AudioSpec * obtained) { return stub_funcs.ptr_SDL_OpenAudio(desired, obtained); }
int (SDL_GetNumAudioDevices)(int iscapture) { return stub_funcs.ptr_SDL_GetNumAudioDevices(iscapture); }
const char * (SDL_GetAudioDeviceName)(int index, int iscapture) { return stub_funcs.ptr_SDL_GetAudioDeviceName(index, iscapture); }
int (SDL_GetAudioDeviceSpec)(int index, int iscapture, SDL_AudioSpec * spec) { return stub_funcs.ptr_SDL_GetAudioDeviceSpec(index, iscapture, spec); }
int (SDL_GetDefaultAudioInfo)(char * * name, SDL_AudioSpec * spec, int iscapture) { return stub_funcs.ptr_SDL_GetDefaultAudioInfo(name, spec, iscapture); }
SDL_AudioDeviceID (SDL_OpenAudioDevice)(const char * device, int iscapture, const SDL_AudioSpec * desired, SDL_AudioSpec * obtained, int allowed_changes) { return stub_funcs.ptr_SDL_OpenAudioDevice(device, iscapture, desired, obtained, allowed_changes); }
SDL_AudioStatus (SDL_GetAudioStatus)(void) { return stub_funcs.ptr_SDL_GetAudioStatus(); }
SDL_AudioStatus (SDL_GetAudioDeviceStatus)(SDL_AudioDeviceID dev) { return stub_funcs.ptr_SDL_GetAudioDeviceStatus(dev); }
void (SDL_PauseAudio)(int pause_on) { stub_funcs.ptr_SDL_PauseAudio(pause_on); }
void (SDL_PauseAudioDevice)(SDL_AudioDeviceID dev, int pause_on) { stub_funcs.ptr_SDL_PauseAudioDevice(dev, pause_on); }
SDL_AudioSpec * (SDL_LoadWAV_RW)(SDL_RWops * src, int freesrc, SDL_AudioSpec * spec, Uint8 * * audio_buf, Uint32 * audio_len) { return stub_funcs.ptr_SDL_LoadWAV_RW(src, freesrc, spec, audio_buf, audio_len); }
void (SDL_FreeWAV)(Uint8 * audio_buf) { stub_funcs.ptr_SDL_FreeWAV(audio_buf); }
int (SDL_BuildAudioCVT)(SDL_AudioCVT * cvt, SDL_AudioFormat src_format, Uint8 src_channels, int src_rate, SDL_AudioFormat dst_format, Uint8 dst_channels, int dst_rate) { return stub_funcs.ptr_SDL_BuildAudioCVT(cvt, src_format, src_channels, src_rate, dst_format, dst_channels, dst_rate); }
int (SDL_ConvertAudio)(SDL_AudioCVT * cvt) { return stub_funcs.ptr_SDL_ConvertAudio(cvt); }
SDL_AudioStream * (SDL_NewAudioStream)(const SDL_AudioFormat src_format, const Uint8 src_channels, const int src_rate, const SDL_AudioFormat dst_format, const Uint8 dst_channels, const int dst_rate) { return stub_funcs.ptr_SDL_NewAudioStream(src_format, src_channels, src_rate, dst_format, dst_channels, dst_rate); }
int (SDL_AudioStreamPut)(SDL_AudioStream * stream, const void * buf, int len) { return stub_funcs.ptr_SDL_AudioStreamPut(stream, buf, len); }
int (SDL_AudioStreamGet)(SDL_AudioStream * stream, void * buf, int len) { return stub_funcs.ptr_SDL_AudioStreamGet(stream, buf, len); }
int (SDL_AudioStreamAvailable)(SDL_AudioStream * stream) { return stub_funcs.ptr_SDL_AudioStreamAvailable(stream); }
int (SDL_AudioStreamFlush)(SDL_AudioStream * stream) { return stub_funcs.ptr_SDL_AudioStreamFlush(stream); }
void (SDL_AudioStreamClear)(SDL_AudioStream * stream) { stub_funcs.ptr_SDL_AudioStreamClear(stream); }
void (SDL_FreeAudioStream)(SDL_AudioStream * stream) { stub_funcs.ptr_SDL_FreeAudioStream(stream); }
void (SDL_MixAudio)(Uint8 * dst, const Uint8 * src, Uint32 len, int volume) { stub_funcs.ptr_SDL_MixAudio(dst, src, len, volume); }
void (SDL_MixAudioFormat)(Uint8 * dst, const Uint8 * src, SDL_AudioFormat format, Uint32 len, int volume) { stub_funcs.ptr_SDL_MixAudioFormat(dst, src, format, len, volume); }
int (SDL_QueueAudio)(SDL_AudioDeviceID dev, const void * data, Uint32 len) { return stub_funcs.ptr_SDL_QueueAudio(dev, data, len); }
Uint32 (SDL_DequeueAudio)(SDL_AudioDeviceID dev, void * data, Uint32 len) { return stub_funcs.ptr_SDL_DequeueAudio(dev, data, len); }
Uint32 (SDL_GetQueuedAudioSize)(SDL_AudioDeviceID dev) { return stub_funcs.ptr_SDL_GetQueuedAudioSize(dev); }
void (SDL_ClearQueuedAudio)(SDL_AudioDeviceID dev) { stub_funcs.ptr_SDL_ClearQueuedAudio(dev); }
void (SDL_LockAudio)(void) { stub_funcs.ptr_SDL_LockAudio(); }
void (SDL_LockAudioDevice)(SDL_AudioDeviceID dev) { stub_funcs.ptr_SDL_LockAudioDevice(dev); }
void (SDL_UnlockAudio)(void) { stub_funcs.ptr_SDL_UnlockAudio(); }
void (SDL_UnlockAudioDevice)(SDL_AudioDeviceID dev) { stub_funcs.ptr_SDL_UnlockAudioDevice(dev); }
void (SDL_CloseAudio)(void) { stub_funcs.ptr_SDL_CloseAudio(); }
void (SDL_CloseAudioDevice)(SDL_AudioDeviceID dev) { stub_funcs.ptr_SDL_CloseAudioDevice(dev); }
int (SDL_SetClipboardText)(const char * text) { return stub_funcs.ptr_SDL_SetClipboardText(text); }
char * (SDL_GetClipboardText)(void) { return stub_funcs.ptr_SDL_GetClipboardText(); }
SDL_bool (SDL_HasClipboardText)(void) { return stub_funcs.ptr_SDL_HasClipboardText(); }
int (SDL_SetPrimarySelectionText)(const char * text) { return stub_funcs.ptr_SDL_SetPrimarySelectionText(text); }
char * (SDL_GetPrimarySelectionText)(void) { return stub_funcs.ptr_SDL_GetPrimarySelectionText(); }
SDL_bool (SDL_HasPrimarySelectionText)(void) { return stub_funcs.ptr_SDL_HasPrimarySelectionText(); }
int (SDL_GetCPUCount)(void) { return stub_funcs.ptr_SDL_GetCPUCount(); }
int (SDL_GetCPUCacheLineSize)(void) { return stub_funcs.ptr_SDL_GetCPUCacheLineSize(); }
SDL_bool (SDL_HasRDTSC)(void) { return stub_funcs.ptr_SDL_HasRDTSC(); }
SDL_bool (SDL_HasAltiVec)(void) { return stub_funcs.ptr_SDL_HasAltiVec(); }
SDL_bool (SDL_HasMMX)(void) { return stub_funcs.ptr_SDL_HasMMX(); }
SDL_bool (SDL_Has3DNow)(void) { return stub_funcs.ptr_SDL_Has3DNow(); }
SDL_bool (SDL_HasSSE)(void) { return stub_funcs.ptr_SDL_HasSSE(); }
SDL_bool (SDL_HasSSE2)(void) { return stub_funcs.ptr_SDL_HasSSE2(); }
SDL_bool (SDL_HasSSE3)(void) { return stub_funcs.ptr_SDL_HasSSE3(); }
SDL_bool (SDL_HasSSE41)(void) { return stub_funcs.ptr_SDL_HasSSE41(); }
SDL_bool (SDL_HasSSE42)(void) { return stub_funcs.ptr_SDL_HasSSE42(); }
SDL_bool (SDL_HasAVX)(void) { return stub_funcs.ptr_SDL_HasAVX(); }
SDL_bool (SDL_HasAVX2)(void) { return stub_funcs.ptr_SDL_HasAVX2(); }
SDL_bool (SDL_HasAVX512F)(void) { return stub_funcs.ptr_SDL_HasAVX512F(); }
SDL_bool (SDL_HasARMSIMD)(void) { return stub_funcs.ptr_SDL_HasARMSIMD(); }
SDL_bool (SDL_HasNEON)(void) { return stub_funcs.ptr_SDL_HasNEON(); }
SDL_bool (SDL_HasLSX)(void) { return stub_funcs.ptr_SDL_HasLSX(); }
SDL_bool (SDL_HasLASX)(void) { return stub_funcs.ptr_SDL_HasLASX(); }
int (SDL_GetSystemRAM)(void) { return stub_funcs.ptr_SDL_GetSystemRAM(); }
size_t (SDL_SIMDGetAlignment)(void) { return stub_funcs.ptr_SDL_SIMDGetAlignment(); }
void * (SDL_SIMDAlloc)(const size_t len) { return stub_funcs.ptr_SDL_SIMDAlloc(len); }
void * (SDL_SIMDRealloc)(void * mem, const size_t len) { return stub_funcs.ptr_SDL_SIMDRealloc(mem, len); }
void (SDL_SIMDFree)(void * ptr) { stub_funcs.ptr_SDL_SIMDFree(ptr); }
const char * (SDL_GetPixelFormatName)(Uint32 format) { return stub_funcs.ptr_SDL_GetPixelFormatName(format); }
SDL_bool (SDL_PixelFormatEnumToMasks)(Uint32 format, int * bpp, Uint32 * Rmask, Uint32 * Gmask, Uint32 * Bmask, Uint32 * Amask) { return stub_funcs.ptr_SDL_PixelFormatEnumToMasks(format, bpp, Rmask, Gmask, Bmask, Amask); }
Uint32 (SDL_MasksToPixelFormatEnum)(int bpp, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) { return stub_funcs.ptr_SDL_MasksToPixelFormatEnum(bpp, Rmask, Gmask, Bmask, Amask); }
SDL_PixelFormat * (SDL_AllocFormat)(Uint32 pixel_format) { return stub_funcs.ptr_SDL_AllocFormat(pixel_format); }
void (SDL_FreeFormat)(SDL_PixelFormat * format) { stub_funcs.ptr_SDL_FreeFormat(format); }
SDL_Palette * (SDL_AllocPalette)(int ncolors) { return stub_funcs.ptr_SDL_AllocPalette(ncolors); }
int (SDL_SetPixelFormatPalette)(SDL_PixelFormat * format, SDL_Palette * palette) { return stub_funcs.ptr_SDL_SetPixelFormatPalette(format, palette); }
int (SDL_SetPaletteColors)(SDL_Palette * palette, const SDL_Color * colors, int firstcolor, int ncolors) { return stub_funcs.ptr_SDL_SetPaletteColors(palette, colors, firstcolor, ncolors); }
void (SDL_FreePalette)(SDL_Palette * palette) { stub_funcs.ptr_SDL_FreePalette(palette); }
Uint32 (SDL_MapRGB)(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b) { return stub_funcs.ptr_SDL_MapRGB(format, r, g, b); }
Uint32 (SDL_MapRGBA)(const SDL_PixelFormat * format, Uint8 r, Uint8 g, Uint8 b, Uint8 a) { return stub_funcs.ptr_SDL_MapRGBA(format, r, g, b, a); }
void (SDL_GetRGB)(Uint32 pixel, const SDL_PixelFormat * format, Uint8 * r, Uint8 * g, Uint8 * b) { stub_funcs.ptr_SDL_GetRGB(pixel, format, r, g, b); }
void (SDL_GetRGBA)(Uint32 pixel, const SDL_PixelFormat * format, Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a) { stub_funcs.ptr_SDL_GetRGBA(pixel, format, r, g, b, a); }
void (SDL_CalculateGammaRamp)(float gamma, Uint16 * ramp) { stub_funcs.ptr_SDL_CalculateGammaRamp(gamma, ramp); }
SDL_bool (SDL_HasIntersection)(const SDL_Rect * A, const SDL_Rect * B) { return stub_funcs.ptr_SDL_HasIntersection(A, B); }
SDL_bool (SDL_IntersectRect)(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result) { return stub_funcs.ptr_SDL_IntersectRect(A, B, result); }
void (SDL_UnionRect)(const SDL_Rect * A, const SDL_Rect * B, SDL_Rect * result) { stub_funcs.ptr_SDL_UnionRect(A, B, result); }
SDL_bool (SDL_EnclosePoints)(const SDL_Point * points, int count, const SDL_Rect * clip, SDL_Rect * result) { return stub_funcs.ptr_SDL_EnclosePoints(points, count, clip, result); }
SDL_bool (SDL_IntersectRectAndLine)(const SDL_Rect * rect, int * X1, int * Y1, int * X2, int * Y2) { return stub_funcs.ptr_SDL_IntersectRectAndLine(rect, X1, Y1, X2, Y2); }
SDL_bool (SDL_HasIntersectionF)(const SDL_FRect * A, const SDL_FRect * B) { return stub_funcs.ptr_SDL_HasIntersectionF(A, B); }
SDL_bool (SDL_IntersectFRect)(const SDL_FRect * A, const SDL_FRect * B, SDL_FRect * result) { return stub_funcs.ptr_SDL_IntersectFRect(A, B, result); }
void (SDL_UnionFRect)(const SDL_FRect * A, const SDL_FRect * B, SDL_FRect * result) { stub_funcs.ptr_SDL_UnionFRect(A, B, result); }
SDL_bool (SDL_EncloseFPoints)(const SDL_FPoint * points, int count, const SDL_FRect * clip, SDL_FRect * result) { return stub_funcs.ptr_SDL_EncloseFPoints(points, count, clip, result); }
SDL_bool (SDL_IntersectFRectAndLine)(const SDL_FRect * rect, float * X1, float * Y1, float * X2, float * Y2) { return stub_funcs.ptr_SDL_IntersectFRectAndLine(rect, X1, Y1, X2, Y2); }
SDL_BlendMode (SDL_ComposeCustomBlendMode)(SDL_BlendFactor srcColorFactor, SDL_BlendFactor dstColorFactor, SDL_BlendOperation colorOperation, SDL_BlendFactor srcAlphaFactor, SDL_BlendFactor dstAlphaFactor, SDL_BlendOperation alphaOperation) { return stub_funcs.ptr_SDL_ComposeCustomBlendMode(srcColorFactor, dstColorFactor, colorOperation, srcAlphaFactor, dstAlphaFactor, alphaOperation); }
SDL_Surface * (SDL_CreateRGBSurface)(Uint32 flags, int width, int height, int depth, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) { return stub_funcs.ptr_SDL_CreateRGBSurface(flags, width, height, depth, Rmask, Gmask, Bmask, Amask); }
SDL_Surface * (SDL_CreateRGBSurfaceWithFormat)(Uint32 flags, int width, int height, int depth, Uint32 format) { return stub_funcs.ptr_SDL_CreateRGBSurfaceWithFormat(flags, width, height, depth, format); }
SDL_Surface * (SDL_CreateRGBSurfaceFrom)(void * pixels, int width, int height, int depth, int pitch, Uint32 Rmask, Uint32 Gmask, Uint32 Bmask, Uint32 Amask) { return stub_funcs.ptr_SDL_CreateRGBSurfaceFrom(pixels, width, height, depth, pitch, Rmask, Gmask, Bmask, Amask); }
SDL_Surface * (SDL_CreateRGBSurfaceWithFormatFrom)(void * pixels, int width, int height, int depth, int pitch, Uint32 format) { return stub_funcs.ptr_SDL_CreateRGBSurfaceWithFormatFrom(pixels, width, height, depth, pitch, format); }
void (SDL_FreeSurface)(SDL_Surface * surface) { stub_funcs.ptr_SDL_FreeSurface(surface); }
int (SDL_SetSurfacePalette)(SDL_Surface * surface, SDL_Palette * palette) { return stub_funcs.ptr_SDL_SetSurfacePalette(surface, palette); }
int (SDL_LockSurface)(SDL_Surface * surface) { return stub_funcs.ptr_SDL_LockSurface(surface); }
void (SDL_UnlockSurface)(SDL_Surface * surface) { stub_funcs.ptr_SDL_UnlockSurface(surface); }
SDL_Surface * (SDL_LoadBMP_RW)(SDL_RWops * src, int freesrc) { return stub_funcs.ptr_SDL_LoadBMP_RW(src, freesrc); }
int (SDL_SaveBMP_RW)(SDL_Surface * surface, SDL_RWops * dst, int freedst) { return stub_funcs.ptr_SDL_SaveBMP_RW(surface, dst, freedst); }
int (SDL_SetSurfaceRLE)(SDL_Surface * surface, int flag) { return stub_funcs.ptr_SDL_SetSurfaceRLE(surface, flag); }
SDL_bool (SDL_HasSurfaceRLE)(SDL_Surface * surface) { return stub_funcs.ptr_SDL_HasSurfaceRLE(surface); }
int (SDL_SetColorKey)(SDL_Surface * surface, int flag, Uint32 key) { return stub_funcs.ptr_SDL_SetColorKey(surface, flag, key); }
SDL_bool (SDL_HasColorKey)(SDL_Surface * surface) { return stub_funcs.ptr_SDL_HasColorKey(surface); }
int (SDL_GetColorKey)(SDL_Surface * surface, Uint32 * key) { return stub_funcs.ptr_SDL_GetColorKey(surface, key); }
int (SDL_SetSurfaceColorMod)(SDL_Surface * surface, Uint8 r, Uint8 g, Uint8 b) { return stub_funcs.ptr_SDL_SetSurfaceColorMod(surface, r, g, b); }
int (SDL_GetSurfaceColorMod)(SDL_Surface * surface, Uint8 * r, Uint8 * g, Uint8 * b) { return stub_funcs.ptr_SDL_GetSurfaceColorMod(surface, r, g, b); }
int (SDL_SetSurfaceAlphaMod)(SDL_Surface * surface, Uint8 alpha) { return stub_funcs.ptr_SDL_SetSurfaceAlphaMod(surface, alpha); }
int (SDL_GetSurfaceAlphaMod)(SDL_Surface * surface, Uint8 * alpha) { return stub_funcs.ptr_SDL_GetSurfaceAlphaMod(surface, alpha); }
int (SDL_SetSurfaceBlendMode)(SDL_Surface * surface, SDL_BlendMode blendMode) { return stub_funcs.ptr_SDL_SetSurfaceBlendMode(surface, blendMode); }
int (SDL_GetSurfaceBlendMode)(SDL_Surface * surface, SDL_BlendMode * blendMode) { return stub_funcs.ptr_SDL_GetSurfaceBlendMode(surface, blendMode); }
SDL_bool (SDL_SetClipRect)(SDL_Surface * surface, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_SetClipRect(surface, rect); }
void (SDL_GetClipRect)(SDL_Surface * surface, SDL_Rect * rect) { stub_funcs.ptr_SDL_GetClipRect(surface, rect); }
SDL_Surface * (SDL_DuplicateSurface)(SDL_Surface * surface) { return stub_funcs.ptr_SDL_DuplicateSurface(surface); }
SDL_Surface * (SDL_ConvertSurface)(SDL_Surface * src, const SDL_PixelFormat * fmt, Uint32 flags) { return stub_funcs.ptr_SDL_ConvertSurface(src, fmt, flags); }
SDL_Surface * (SDL_ConvertSurfaceFormat)(SDL_Surface * src, Uint32 pixel_format, Uint32 flags) { return stub_funcs.ptr_SDL_ConvertSurfaceFormat(src, pixel_format, flags); }
int (SDL_ConvertPixels)(int width, int height, Uint32 src_format, const void * src, int src_pitch, Uint32 dst_format, void * dst, int dst_pitch) { return stub_funcs.ptr_SDL_ConvertPixels(width, height, src_format, src, src_pitch, dst_format, dst, dst_pitch); }
int (SDL_PremultiplyAlpha)(int width, int height, Uint32 src_format, const void * src, int src_pitch, Uint32 dst_format, void * dst, int dst_pitch) { return stub_funcs.ptr_SDL_PremultiplyAlpha(width, height, src_format, src, src_pitch, dst_format, dst, dst_pitch); }
int (SDL_FillRect)(SDL_Surface * dst, const SDL_Rect * rect, Uint32 color) { return stub_funcs.ptr_SDL_FillRect(dst, rect, color); }
int (SDL_FillRects)(SDL_Surface * dst, const SDL_Rect * rects, int count, Uint32 color) { return stub_funcs.ptr_SDL_FillRects(dst, rects, count, color); }
int (SDL_UpperBlit)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_UpperBlit(src, srcrect, dst, dstrect); }
int (SDL_LowerBlit)(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_LowerBlit(src, srcrect, dst, dstrect); }
int (SDL_SoftStretch)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, const SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_SoftStretch(src, srcrect, dst, dstrect); }
int (SDL_SoftStretchLinear)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, const SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_SoftStretchLinear(src, srcrect, dst, dstrect); }
int (SDL_UpperBlitScaled)(SDL_Surface * src, const SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_UpperBlitScaled(src, srcrect, dst, dstrect); }
int (SDL_LowerBlitScaled)(SDL_Surface * src, SDL_Rect * srcrect, SDL_Surface * dst, SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_LowerBlitScaled(src, srcrect, dst, dstrect); }
void (SDL_SetYUVConversionMode)(SDL_YUV_CONVERSION_MODE mode) { stub_funcs.ptr_SDL_SetYUVConversionMode(mode); }
SDL_YUV_CONVERSION_MODE (SDL_GetYUVConversionMode)(void) { return stub_funcs.ptr_SDL_GetYUVConversionMode(); }
SDL_YUV_CONVERSION_MODE (SDL_GetYUVConversionModeForResolution)(int width, int height) { return stub_funcs.ptr_SDL_GetYUVConversionModeForResolution(width, height); }
int (SDL_GetNumVideoDrivers)(void) { return stub_funcs.ptr_SDL_GetNumVideoDrivers(); }
const char * (SDL_GetVideoDriver)(int index) { return stub_funcs.ptr_SDL_GetVideoDriver(index); }
int (SDL_VideoInit)(const char * driver_name) { return stub_funcs.ptr_SDL_VideoInit(driver_name); }
void (SDL_VideoQuit)(void) { stub_funcs.ptr_SDL_VideoQuit(); }
const char * (SDL_GetCurrentVideoDriver)(void) { return stub_funcs.ptr_SDL_GetCurrentVideoDriver(); }
int (SDL_GetNumVideoDisplays)(void) { return stub_funcs.ptr_SDL_GetNumVideoDisplays(); }
const char * (SDL_GetDisplayName)(int displayIndex) { return stub_funcs.ptr_SDL_GetDisplayName(displayIndex); }
int (SDL_GetDisplayBounds)(int displayIndex, SDL_Rect * rect) { return stub_funcs.ptr_SDL_GetDisplayBounds(displayIndex, rect); }
int (SDL_GetDisplayUsableBounds)(int displayIndex, SDL_Rect * rect) { return stub_funcs.ptr_SDL_GetDisplayUsableBounds(displayIndex, rect); }
int (SDL_GetDisplayDPI)(int displayIndex, float * ddpi, float * hdpi, float * vdpi) { return stub_funcs.ptr_SDL_GetDisplayDPI(displayIndex, ddpi, hdpi, vdpi); }
SDL_DisplayOrientation (SDL_GetDisplayOrientation)(int displayIndex) { return stub_funcs.ptr_SDL_GetDisplayOrientation(displayIndex); }
int (SDL_GetNumDisplayModes)(int displayIndex) { return stub_funcs.ptr_SDL_GetNumDisplayModes(displayIndex); }
int (SDL_GetDisplayMode)(int displayIndex, int modeIndex, SDL_DisplayMode * mode) { return stub_funcs.ptr_SDL_GetDisplayMode(displayIndex, modeIndex, mode); }
int (SDL_GetDesktopDisplayMode)(int displayIndex, SDL_DisplayMode * mode) { return stub_funcs.ptr_SDL_GetDesktopDisplayMode(displayIndex, mode); }
int (SDL_GetCurrentDisplayMode)(int displayIndex, SDL_DisplayMode * mode) { return stub_funcs.ptr_SDL_GetCurrentDisplayMode(displayIndex, mode); }
SDL_DisplayMode * (SDL_GetClosestDisplayMode)(int displayIndex, const SDL_DisplayMode * mode, SDL_DisplayMode * closest) { return stub_funcs.ptr_SDL_GetClosestDisplayMode(displayIndex, mode, closest); }
int (SDL_GetPointDisplayIndex)(const SDL_Point * point) { return stub_funcs.ptr_SDL_GetPointDisplayIndex(point); }
int (SDL_GetRectDisplayIndex)(const SDL_Rect * rect) { return stub_funcs.ptr_SDL_GetRectDisplayIndex(rect); }
int (SDL_GetWindowDisplayIndex)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowDisplayIndex(window); }
int (SDL_SetWindowDisplayMode)(SDL_Window * window, const SDL_DisplayMode * mode) { return stub_funcs.ptr_SDL_SetWindowDisplayMode(window, mode); }
int (SDL_GetWindowDisplayMode)(SDL_Window * window, SDL_DisplayMode * mode) { return stub_funcs.ptr_SDL_GetWindowDisplayMode(window, mode); }
void * (SDL_GetWindowICCProfile)(SDL_Window * window, size_t * size) { return stub_funcs.ptr_SDL_GetWindowICCProfile(window, size); }
Uint32 (SDL_GetWindowPixelFormat)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowPixelFormat(window); }
SDL_Window * (SDL_CreateWindow)(const char * title, int x, int y, int w, int h, Uint32 flags) { return stub_funcs.ptr_SDL_CreateWindow(title, x, y, w, h, flags); }
SDL_Window * (SDL_CreateWindowFrom)(const void * data) { return stub_funcs.ptr_SDL_CreateWindowFrom(data); }
Uint32 (SDL_GetWindowID)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowID(window); }
SDL_Window * (SDL_GetWindowFromID)(Uint32 id) { return stub_funcs.ptr_SDL_GetWindowFromID(id); }
Uint32 (SDL_GetWindowFlags)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowFlags(window); }
void (SDL_SetWindowTitle)(SDL_Window * window, const char * title) { stub_funcs.ptr_SDL_SetWindowTitle(window, title); }
const char * (SDL_GetWindowTitle)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowTitle(window); }
void (SDL_SetWindowIcon)(SDL_Window * window, SDL_Surface * icon) { stub_funcs.ptr_SDL_SetWindowIcon(window, icon); }
void * (SDL_SetWindowData)(SDL_Window * window, const char * name, void * userdata) { return stub_funcs.ptr_SDL_SetWindowData(window, name, userdata); }
void * (SDL_GetWindowData)(SDL_Window * window, const char * name) { return stub_funcs.ptr_SDL_GetWindowData(window, name); }
void (SDL_SetWindowPosition)(SDL_Window * window, int x, int y) { stub_funcs.ptr_SDL_SetWindowPosition(window, x, y); }
void (SDL_GetWindowPosition)(SDL_Window * window, int * x, int * y) { stub_funcs.ptr_SDL_GetWindowPosition(window, x, y); }
void (SDL_SetWindowSize)(SDL_Window * window, int w, int h) { stub_funcs.ptr_SDL_SetWindowSize(window, w, h); }
void (SDL_GetWindowSize)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_GetWindowSize(window, w, h); }
int (SDL_GetWindowBordersSize)(SDL_Window * window, int * top, int * left, int * bottom, int * right) { return stub_funcs.ptr_SDL_GetWindowBordersSize(window, top, left, bottom, right); }
void (SDL_GetWindowSizeInPixels)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_GetWindowSizeInPixels(window, w, h); }
void (SDL_SetWindowMinimumSize)(SDL_Window * window, int min_w, int min_h) { stub_funcs.ptr_SDL_SetWindowMinimumSize(window, min_w, min_h); }
void (SDL_GetWindowMinimumSize)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_GetWindowMinimumSize(window, w, h); }
void (SDL_SetWindowMaximumSize)(SDL_Window * window, int max_w, int max_h) { stub_funcs.ptr_SDL_SetWindowMaximumSize(window, max_w, max_h); }
void (SDL_GetWindowMaximumSize)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_GetWindowMaximumSize(window, w, h); }
void (SDL_SetWindowBordered)(SDL_Window * window, SDL_bool bordered) { stub_funcs.ptr_SDL_SetWindowBordered(window, bordered); }
void (SDL_SetWindowResizable)(SDL_Window * window, SDL_bool resizable) { stub_funcs.ptr_SDL_SetWindowResizable(window, resizable); }
void (SDL_SetWindowAlwaysOnTop)(SDL_Window * window, SDL_bool on_top) { stub_funcs.ptr_SDL_SetWindowAlwaysOnTop(window, on_top); }
void (SDL_ShowWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_ShowWindow(window); }
void (SDL_HideWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_HideWindow(window); }
void (SDL_RaiseWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_RaiseWindow(window); }
void (SDL_MaximizeWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_MaximizeWindow(window); }
void (SDL_MinimizeWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_MinimizeWindow(window); }
void (SDL_RestoreWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_RestoreWindow(window); }
int (SDL_SetWindowFullscreen)(SDL_Window * window, Uint32 flags) { return stub_funcs.ptr_SDL_SetWindowFullscreen(window, flags); }
SDL_bool (SDL_HasWindowSurface)(SDL_Window * window) { return stub_funcs.ptr_SDL_HasWindowSurface(window); }
SDL_Surface * (SDL_GetWindowSurface)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowSurface(window); }
int (SDL_UpdateWindowSurface)(SDL_Window * window) { return stub_funcs.ptr_SDL_UpdateWindowSurface(window); }
int (SDL_UpdateWindowSurfaceRects)(SDL_Window * window, const SDL_Rect * rects, int numrects) { return stub_funcs.ptr_SDL_UpdateWindowSurfaceRects(window, rects, numrects); }
int (SDL_DestroyWindowSurface)(SDL_Window * window) { return stub_funcs.ptr_SDL_DestroyWindowSurface(window); }
void (SDL_SetWindowGrab)(SDL_Window * window, SDL_bool grabbed) { stub_funcs.ptr_SDL_SetWindowGrab(window, grabbed); }
void (SDL_SetWindowKeyboardGrab)(SDL_Window * window, SDL_bool grabbed) { stub_funcs.ptr_SDL_SetWindowKeyboardGrab(window, grabbed); }
void (SDL_SetWindowMouseGrab)(SDL_Window * window, SDL_bool grabbed) { stub_funcs.ptr_SDL_SetWindowMouseGrab(window, grabbed); }
SDL_bool (SDL_GetWindowGrab)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowGrab(window); }
SDL_bool (SDL_GetWindowKeyboardGrab)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowKeyboardGrab(window); }
SDL_bool (SDL_GetWindowMouseGrab)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowMouseGrab(window); }
SDL_Window * (SDL_GetGrabbedWindow)(void) { return stub_funcs.ptr_SDL_GetGrabbedWindow(); }
int (SDL_SetWindowMouseRect)(SDL_Window * window, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_SetWindowMouseRect(window, rect); }
const SDL_Rect * (SDL_GetWindowMouseRect)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowMouseRect(window); }
int (SDL_SetWindowBrightness)(SDL_Window * window, float brightness) { return stub_funcs.ptr_SDL_SetWindowBrightness(window, brightness); }
float (SDL_GetWindowBrightness)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetWindowBrightness(window); }
int (SDL_SetWindowOpacity)(SDL_Window * window, float opacity) { return stub_funcs.ptr_SDL_SetWindowOpacity(window, opacity); }
int (SDL_GetWindowOpacity)(SDL_Window * window, float * out_opacity) { return stub_funcs.ptr_SDL_GetWindowOpacity(window, out_opacity); }
int (SDL_SetWindowModalFor)(SDL_Window * modal_window, SDL_Window * parent_window) { return stub_funcs.ptr_SDL_SetWindowModalFor(modal_window, parent_window); }
int (SDL_SetWindowInputFocus)(SDL_Window * window) { return stub_funcs.ptr_SDL_SetWindowInputFocus(window); }
int (SDL_SetWindowGammaRamp)(SDL_Window * window, const Uint16 * red, const Uint16 * green, const Uint16 * blue) { return stub_funcs.ptr_SDL_SetWindowGammaRamp(window, red, green, blue); }
int (SDL_GetWindowGammaRamp)(SDL_Window * window, Uint16 * red, Uint16 * green, Uint16 * blue) { return stub_funcs.ptr_SDL_GetWindowGammaRamp(window, red, green, blue); }
int (SDL_SetWindowHitTest)(SDL_Window * window, SDL_HitTest callback, void * callback_data) { return stub_funcs.ptr_SDL_SetWindowHitTest(window, callback, callback_data); }
int (SDL_FlashWindow)(SDL_Window * window, SDL_FlashOperation operation) { return stub_funcs.ptr_SDL_FlashWindow(window, operation); }
void (SDL_DestroyWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_DestroyWindow(window); }
SDL_bool (SDL_IsScreenSaverEnabled)(void) { return stub_funcs.ptr_SDL_IsScreenSaverEnabled(); }
void (SDL_EnableScreenSaver)(void) { stub_funcs.ptr_SDL_EnableScreenSaver(); }
void (SDL_DisableScreenSaver)(void) { stub_funcs.ptr_SDL_DisableScreenSaver(); }
int (SDL_GL_LoadLibrary)(const char * path) { return stub_funcs.ptr_SDL_GL_LoadLibrary(path); }
void * (SDL_GL_GetProcAddress)(const char * proc) { return stub_funcs.ptr_SDL_GL_GetProcAddress(proc); }
void (SDL_GL_UnloadLibrary)(void) { stub_funcs.ptr_SDL_GL_UnloadLibrary(); }
SDL_bool (SDL_GL_ExtensionSupported)(const char * extension) { return stub_funcs.ptr_SDL_GL_ExtensionSupported(extension); }
void (SDL_GL_ResetAttributes)(void) { stub_funcs.ptr_SDL_GL_ResetAttributes(); }
int (SDL_GL_SetAttribute)(SDL_GLattr attr, int value) { return stub_funcs.ptr_SDL_GL_SetAttribute(attr, value); }
int (SDL_GL_GetAttribute)(SDL_GLattr attr, int * value) { return stub_funcs.ptr_SDL_GL_GetAttribute(attr, value); }
SDL_GLContext (SDL_GL_CreateContext)(SDL_Window * window) { return stub_funcs.ptr_SDL_GL_CreateContext(window); }
int (SDL_GL_MakeCurrent)(SDL_Window * window, SDL_GLContext context) { return stub_funcs.ptr_SDL_GL_MakeCurrent(window, context); }
SDL_Window * (SDL_GL_GetCurrentWindow)(void) { return stub_funcs.ptr_SDL_GL_GetCurrentWindow(); }
SDL_GLContext (SDL_GL_GetCurrentContext)(void) { return stub_funcs.ptr_SDL_GL_GetCurrentContext(); }
void (SDL_GL_GetDrawableSize)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_GL_GetDrawableSize(window, w, h); }
int (SDL_GL_SetSwapInterval)(int interval) { return stub_funcs.ptr_SDL_GL_SetSwapInterval(interval); }
int (SDL_GL_GetSwapInterval)(void) { return stub_funcs.ptr_SDL_GL_GetSwapInterval(); }
void (SDL_GL_SwapWindow)(SDL_Window * window) { stub_funcs.ptr_SDL_GL_SwapWindow(window); }
void (SDL_GL_DeleteContext)(SDL_GLContext context) { stub_funcs.ptr_SDL_GL_DeleteContext(context); }
SDL_Window * (SDL_GetKeyboardFocus)(void) { return stub_funcs.ptr_SDL_GetKeyboardFocus(); }
const Uint8 * (SDL_GetKeyboardState)(int * numkeys) { return stub_funcs.ptr_SDL_GetKeyboardState(numkeys); }
void (SDL_ResetKeyboard)(void) { stub_funcs.ptr_SDL_ResetKeyboard(); }
SDL_Keymod (SDL_GetModState)(void) { return stub_funcs.ptr_SDL_GetModState(); }
void (SDL_SetModState)(SDL_Keymod modstate) { stub_funcs.ptr_SDL_SetModState(modstate); }
SDL_Keycode (SDL_GetKeyFromScancode)(SDL_Scancode scancode) { return stub_funcs.ptr_SDL_GetKeyFromScancode(scancode); }
SDL_Scancode (SDL_GetScancodeFromKey)(SDL_Keycode key) { return stub_funcs.ptr_SDL_GetScancodeFromKey(key); }
const char * (SDL_GetScancodeName)(SDL_Scancode scancode) { return stub_funcs.ptr_SDL_GetScancodeName(scancode); }
SDL_Scancode (SDL_GetScancodeFromName)(const char * name) { return stub_funcs.ptr_SDL_GetScancodeFromName(name); }
const char * (SDL_GetKeyName)(SDL_Keycode key) { return stub_funcs.ptr_SDL_GetKeyName(key); }
SDL_Keycode (SDL_GetKeyFromName)(const char * name) { return stub_funcs.ptr_SDL_GetKeyFromName(name); }
void (SDL_StartTextInput)(void) { stub_funcs.ptr_SDL_StartTextInput(); }
SDL_bool (SDL_IsTextInputActive)(void) { return stub_funcs.ptr_SDL_IsTextInputActive(); }
void (SDL_StopTextInput)(void) { stub_funcs.ptr_SDL_StopTextInput(); }
void (SDL_ClearComposition)(void) { stub_funcs.ptr_SDL_ClearComposition(); }
SDL_bool (SDL_IsTextInputShown)(void) { return stub_funcs.ptr_SDL_IsTextInputShown(); }
void (SDL_SetTextInputRect)(const SDL_Rect * rect) { stub_funcs.ptr_SDL_SetTextInputRect(rect); }
SDL_bool (SDL_HasScreenKeyboardSupport)(void) { return stub_funcs.ptr_SDL_HasScreenKeyboardSupport(); }
SDL_bool (SDL_IsScreenKeyboardShown)(SDL_Window * window) { return stub_funcs.ptr_SDL_IsScreenKeyboardShown(window); }
SDL_Window * (SDL_GetMouseFocus)(void) { return stub_funcs.ptr_SDL_GetMouseFocus(); }
Uint32 (SDL_GetMouseState)(int * x, int * y) { return stub_funcs.ptr_SDL_GetMouseState(x, y); }
Uint32 (SDL_GetGlobalMouseState)(int * x, int * y) { return stub_funcs.ptr_SDL_GetGlobalMouseState(x, y); }
Uint32 (SDL_GetRelativeMouseState)(int * x, int * y) { return stub_funcs.ptr_SDL_GetRelativeMouseState(x, y); }
void (SDL_WarpMouseInWindow)(SDL_Window * window, int x, int y) { stub_funcs.ptr_SDL_WarpMouseInWindow(window, x, y); }
int (SDL_WarpMouseGlobal)(int x, int y) { return stub_funcs.ptr_SDL_WarpMouseGlobal(x, y); }
int (SDL_SetRelativeMouseMode)(SDL_bool enabled) { return stub_funcs.ptr_SDL_SetRelativeMouseMode(enabled); }
int (SDL_CaptureMouse)(SDL_bool enabled) { return stub_funcs.ptr_SDL_CaptureMouse(enabled); }
SDL_bool (SDL_GetRelativeMouseMode)(void) { return stub_funcs.ptr_SDL_GetRelativeMouseMode(); }
SDL_Cursor * (SDL_CreateCursor)(const Uint8 * data, const Uint8 * mask, int w, int h, int hot_x, int hot_y) { return stub_funcs.ptr_SDL_CreateCursor(data, mask, w, h, hot_x, hot_y); }
SDL_Cursor * (SDL_CreateColorCursor)(SDL_Surface * surface, int hot_x, int hot_y) { return stub_funcs.ptr_SDL_CreateColorCursor(surface, hot_x, hot_y); }
SDL_Cursor * (SDL_CreateSystemCursor)(SDL_SystemCursor id) { return stub_funcs.ptr_SDL_CreateSystemCursor(id); }
void (SDL_SetCursor)(SDL_Cursor * cursor) { stub_funcs.ptr_SDL_SetCursor(cursor); }
SDL_Cursor * (SDL_GetCursor)(void) { return stub_funcs.ptr_SDL_GetCursor(); }
SDL_Cursor * (SDL_GetDefaultCursor)(void) { return stub_funcs.ptr_SDL_GetDefaultCursor(); }
void (SDL_FreeCursor)(SDL_Cursor * cursor) { stub_funcs.ptr_SDL_FreeCursor(cursor); }
int (SDL_ShowCursor)(int toggle) { return stub_funcs.ptr_SDL_ShowCursor(toggle); }
void (SDL_GUIDToString)(SDL_GUID guid, char * pszGUID, int cbGUID) { stub_funcs.ptr_SDL_GUIDToString(guid, pszGUID, cbGUID); }
SDL_GUID (SDL_GUIDFromString)(const char * pchGUID) { return stub_funcs.ptr_SDL_GUIDFromString(pchGUID); }
void (SDL_LockJoysticks)(void) { stub_funcs.ptr_SDL_LockJoysticks(); }
void (SDL_UnlockJoysticks)(void) { stub_funcs.ptr_SDL_UnlockJoysticks(); }
int (SDL_NumJoysticks)(void) { return stub_funcs.ptr_SDL_NumJoysticks(); }
const char * (SDL_JoystickNameForIndex)(int device_index) { return stub_funcs.ptr_SDL_JoystickNameForIndex(device_index); }
const char * (SDL_JoystickPathForIndex)(int device_index) { return stub_funcs.ptr_SDL_JoystickPathForIndex(device_index); }
int (SDL_JoystickGetDevicePlayerIndex)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDevicePlayerIndex(device_index); }
SDL_JoystickGUID (SDL_JoystickGetDeviceGUID)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceGUID(device_index); }
Uint16 (SDL_JoystickGetDeviceVendor)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceVendor(device_index); }
Uint16 (SDL_JoystickGetDeviceProduct)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceProduct(device_index); }
Uint16 (SDL_JoystickGetDeviceProductVersion)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceProductVersion(device_index); }
SDL_JoystickType (SDL_JoystickGetDeviceType)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceType(device_index); }
SDL_JoystickID (SDL_JoystickGetDeviceInstanceID)(int device_index) { return stub_funcs.ptr_SDL_JoystickGetDeviceInstanceID(device_index); }
SDL_Joystick * (SDL_JoystickOpen)(int device_index) { return stub_funcs.ptr_SDL_JoystickOpen(device_index); }
SDL_Joystick * (SDL_JoystickFromInstanceID)(SDL_JoystickID instance_id) { return stub_funcs.ptr_SDL_JoystickFromInstanceID(instance_id); }
SDL_Joystick * (SDL_JoystickFromPlayerIndex)(int player_index) { return stub_funcs.ptr_SDL_JoystickFromPlayerIndex(player_index); }
int (SDL_JoystickAttachVirtual)(SDL_JoystickType type, int naxes, int nbuttons, int nhats) { return stub_funcs.ptr_SDL_JoystickAttachVirtual(type, naxes, nbuttons, nhats); }
int (SDL_JoystickAttachVirtualEx)(const SDL_VirtualJoystickDesc * desc) { return stub_funcs.ptr_SDL_JoystickAttachVirtualEx(desc); }
int (SDL_JoystickDetachVirtual)(int device_index) { return stub_funcs.ptr_SDL_JoystickDetachVirtual(device_index); }
SDL_bool (SDL_JoystickIsVirtual)(int device_index) { return stub_funcs.ptr_SDL_JoystickIsVirtual(device_index); }
int (SDL_JoystickSetVirtualAxis)(SDL_Joystick * joystick, int axis, Sint16 value) { return stub_funcs.ptr_SDL_JoystickSetVirtualAxis(joystick, axis, value); }
int (SDL_JoystickSetVirtualButton)(SDL_Joystick * joystick, int button, Uint8 value) { return stub_funcs.ptr_SDL_JoystickSetVirtualButton(joystick, button, value); }
int (SDL_JoystickSetVirtualHat)(SDL_Joystick * joystick, int hat, Uint8 value) { return stub_funcs.ptr_SDL_JoystickSetVirtualHat(joystick, hat, value); }
const char * (SDL_JoystickName)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickName(joystick); }
const char * (SDL_JoystickPath)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickPath(joystick); }
int (SDL_JoystickGetPlayerIndex)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetPlayerIndex(joystick); }
void (SDL_JoystickSetPlayerIndex)(SDL_Joystick * joystick, int player_index) { stub_funcs.ptr_SDL_JoystickSetPlayerIndex(joystick, player_index); }
SDL_JoystickGUID (SDL_JoystickGetGUID)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetGUID(joystick); }
Uint16 (SDL_JoystickGetVendor)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetVendor(joystick); }
Uint16 (SDL_JoystickGetProduct)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetProduct(joystick); }
Uint16 (SDL_JoystickGetProductVersion)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetProductVersion(joystick); }
Uint16 (SDL_JoystickGetFirmwareVersion)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetFirmwareVersion(joystick); }
const char * (SDL_JoystickGetSerial)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetSerial(joystick); }
SDL_JoystickType (SDL_JoystickGetType)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetType(joystick); }
void (SDL_JoystickGetGUIDString)(SDL_JoystickGUID guid, char * pszGUID, int cbGUID) { stub_funcs.ptr_SDL_JoystickGetGUIDString(guid, pszGUID, cbGUID); }
SDL_JoystickGUID (SDL_JoystickGetGUIDFromString)(const char * pchGUID) { return stub_funcs.ptr_SDL_JoystickGetGUIDFromString(pchGUID); }
void (SDL_GetJoystickGUIDInfo)(SDL_JoystickGUID guid, Uint16 * vendor, Uint16 * product, Uint16 * version, Uint16 * crc16) { stub_funcs.ptr_SDL_GetJoystickGUIDInfo(guid, vendor, product, version, crc16); }
SDL_bool (SDL_JoystickGetAttached)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickGetAttached(joystick); }
SDL_JoystickID (SDL_JoystickInstanceID)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickInstanceID(joystick); }
int (SDL_JoystickNumAxes)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickNumAxes(joystick); }
int (SDL_JoystickNumBalls)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickNumBalls(joystick); }
int (SDL_JoystickNumHats)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickNumHats(joystick); }
int (SDL_JoystickNumButtons)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickNumButtons(joystick); }
void (SDL_JoystickUpdate)(void) { stub_funcs.ptr_SDL_JoystickUpdate(); }
int (SDL_JoystickEventState)(int state) { return stub_funcs.ptr_SDL_JoystickEventState(state); }
Sint16 (SDL_JoystickGetAxis)(SDL_Joystick * joystick, int axis) { return stub_funcs.ptr_SDL_JoystickGetAxis(joystick, axis); }
SDL_bool (SDL_JoystickGetAxisInitialState)(SDL_Joystick * joystick, int axis, Sint16 * state) { return stub_funcs.ptr_SDL_JoystickGetAxisInitialState(joystick, axis, state); }
Uint8 (SDL_JoystickGetHat)(SDL_Joystick * joystick, int hat) { return stub_funcs.ptr_SDL_JoystickGetHat(joystick, hat); }
int (SDL_JoystickGetBall)(SDL_Joystick * joystick, int ball, int * dx, int * dy) { return stub_funcs.ptr_SDL_JoystickGetBall(joystick, ball, dx, dy); }
Uint8 (SDL_JoystickGetButton)(SDL_Joystick * joystick, int button) { return stub_funcs.ptr_SDL_JoystickGetButton(joystick, button); }
int (SDL_JoystickRumble)(SDL_Joystick * joystick, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms) { return stub_funcs.ptr_SDL_JoystickRumble(joystick, low_frequency_rumble, high_frequency_rumble, duration_ms); }
int (SDL_JoystickRumbleTriggers)(SDL_Joystick * joystick, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms) { return stub_funcs.ptr_SDL_JoystickRumbleTriggers(joystick, left_rumble, right_rumble, duration_ms); }
SDL_bool (SDL_JoystickHasLED)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickHasLED(joystick); }
SDL_bool (SDL_JoystickHasRumble)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickHasRumble(joystick); }
SDL_bool (SDL_JoystickHasRumbleTriggers)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickHasRumbleTriggers(joystick); }
int (SDL_JoystickSetLED)(SDL_Joystick * joystick, Uint8 red, Uint8 green, Uint8 blue) { return stub_funcs.ptr_SDL_JoystickSetLED(joystick, red, green, blue); }
int (SDL_JoystickSendEffect)(SDL_Joystick * joystick, const void * data, int size) { return stub_funcs.ptr_SDL_JoystickSendEffect(joystick, data, size); }
void (SDL_JoystickClose)(SDL_Joystick * joystick) { stub_funcs.ptr_SDL_JoystickClose(joystick); }
SDL_JoystickPowerLevel (SDL_JoystickCurrentPowerLevel)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickCurrentPowerLevel(joystick); }
void (SDL_LockSensors)(void) { stub_funcs.ptr_SDL_LockSensors(); }
void (SDL_UnlockSensors)(void) { stub_funcs.ptr_SDL_UnlockSensors(); }
int (SDL_NumSensors)(void) { return stub_funcs.ptr_SDL_NumSensors(); }
const char * (SDL_SensorGetDeviceName)(int device_index) { return stub_funcs.ptr_SDL_SensorGetDeviceName(device_index); }
SDL_SensorType (SDL_SensorGetDeviceType)(int device_index) { return stub_funcs.ptr_SDL_SensorGetDeviceType(device_index); }
int (SDL_SensorGetDeviceNonPortableType)(int device_index) { return stub_funcs.ptr_SDL_SensorGetDeviceNonPortableType(device_index); }
SDL_SensorID (SDL_SensorGetDeviceInstanceID)(int device_index) { return stub_funcs.ptr_SDL_SensorGetDeviceInstanceID(device_index); }
SDL_Sensor * (SDL_SensorOpen)(int device_index) { return stub_funcs.ptr_SDL_SensorOpen(device_index); }
SDL_Sensor * (SDL_SensorFromInstanceID)(SDL_SensorID instance_id) { return stub_funcs.ptr_SDL_SensorFromInstanceID(instance_id); }
const char * (SDL_SensorGetName)(SDL_Sensor * sensor) { return stub_funcs.ptr_SDL_SensorGetName(sensor); }
SDL_SensorType (SDL_SensorGetType)(SDL_Sensor * sensor) { return stub_funcs.ptr_SDL_SensorGetType(sensor); }
int (SDL_SensorGetNonPortableType)(SDL_Sensor * sensor) { return stub_funcs.ptr_SDL_SensorGetNonPortableType(sensor); }
SDL_SensorID (SDL_SensorGetInstanceID)(SDL_Sensor * sensor) { return stub_funcs.ptr_SDL_SensorGetInstanceID(sensor); }
int (SDL_SensorGetData)(SDL_Sensor * sensor, float * data, int num_values) { return stub_funcs.ptr_SDL_SensorGetData(sensor, data, num_values); }
int (SDL_SensorGetDataWithTimestamp)(SDL_Sensor * sensor, Uint64 * timestamp, float * data, int num_values) { return stub_funcs.ptr_SDL_SensorGetDataWithTimestamp(sensor, timestamp, data, num_values); }
void (SDL_SensorClose)(SDL_Sensor * sensor) { stub_funcs.ptr_SDL_SensorClose(sensor); }
void (SDL_SensorUpdate)(void) { stub_funcs.ptr_SDL_SensorUpdate(); }
int (SDL_GameControllerAddMappingsFromRW)(SDL_RWops * rw, int freerw) { return stub_funcs.ptr_SDL_GameControllerAddMappingsFromRW(rw, freerw); }
int (SDL_GameControllerAddMapping)(const char * mappingString) { return stub_funcs.ptr_SDL_GameControllerAddMapping(mappingString); }
int (SDL_GameControllerNumMappings)(void) { return stub_funcs.ptr_SDL_GameControllerNumMappings(); }
char * (SDL_GameControllerMappingForIndex)(int mapping_index) { return stub_funcs.ptr_SDL_GameControllerMappingForIndex(mapping_index); }
char * (SDL_GameControllerMappingForGUID)(SDL_JoystickGUID guid) { return stub_funcs.ptr_SDL_GameControllerMappingForGUID(guid); }
char * (SDL_GameControllerMapping)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerMapping(gamecontroller); }
SDL_bool (SDL_IsGameController)(int joystick_index) { return stub_funcs.ptr_SDL_IsGameController(joystick_index); }
const char * (SDL_GameControllerNameForIndex)(int joystick_index) { return stub_funcs.ptr_SDL_GameControllerNameForIndex(joystick_index); }
const char * (SDL_GameControllerPathForIndex)(int joystick_index) { return stub_funcs.ptr_SDL_GameControllerPathForIndex(joystick_index); }
SDL_GameControllerType (SDL_GameControllerTypeForIndex)(int joystick_index) { return stub_funcs.ptr_SDL_GameControllerTypeForIndex(joystick_index); }
char * (SDL_GameControllerMappingForDeviceIndex)(int joystick_index) { return stub_funcs.ptr_SDL_GameControllerMappingForDeviceIndex(joystick_index); }
SDL_GameController * (SDL_GameControllerOpen)(int joystick_index) { return stub_funcs.ptr_SDL_GameControllerOpen(joystick_index); }
SDL_GameController * (SDL_GameControllerFromInstanceID)(SDL_JoystickID joyid) { return stub_funcs.ptr_SDL_GameControllerFromInstanceID(joyid); }
SDL_GameController * (SDL_GameControllerFromPlayerIndex)(int player_index) { return stub_funcs.ptr_SDL_GameControllerFromPlayerIndex(player_index); }
const char * (SDL_GameControllerName)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerName(gamecontroller); }
const char * (SDL_GameControllerPath)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerPath(gamecontroller); }
SDL_GameControllerType (SDL_GameControllerGetType)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetType(gamecontroller); }
int (SDL_GameControllerGetPlayerIndex)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetPlayerIndex(gamecontroller); }
void (SDL_GameControllerSetPlayerIndex)(SDL_GameController * gamecontroller, int player_index) { stub_funcs.ptr_SDL_GameControllerSetPlayerIndex(gamecontroller, player_index); }
Uint16 (SDL_GameControllerGetVendor)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetVendor(gamecontroller); }
Uint16 (SDL_GameControllerGetProduct)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetProduct(gamecontroller); }
Uint16 (SDL_GameControllerGetProductVersion)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetProductVersion(gamecontroller); }
Uint16 (SDL_GameControllerGetFirmwareVersion)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetFirmwareVersion(gamecontroller); }
const char * (SDL_GameControllerGetSerial)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetSerial(gamecontroller); }
Uint64 (SDL_GameControllerGetSteamHandle)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetSteamHandle(gamecontroller); }
SDL_bool (SDL_GameControllerGetAttached)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetAttached(gamecontroller); }
SDL_Joystick * (SDL_GameControllerGetJoystick)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetJoystick(gamecontroller); }
int (SDL_GameControllerEventState)(int state) { return stub_funcs.ptr_SDL_GameControllerEventState(state); }
void (SDL_GameControllerUpdate)(void) { stub_funcs.ptr_SDL_GameControllerUpdate(); }
SDL_GameControllerAxis (SDL_GameControllerGetAxisFromString)(const char * str) { return stub_funcs.ptr_SDL_GameControllerGetAxisFromString(str); }
const char * (SDL_GameControllerGetStringForAxis)(SDL_GameControllerAxis axis) { return stub_funcs.ptr_SDL_GameControllerGetStringForAxis(axis); }
SDL_GameControllerButtonBind (SDL_GameControllerGetBindForAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis) { return stub_funcs.ptr_SDL_GameControllerGetBindForAxis(gamecontroller, axis); }
SDL_bool (SDL_GameControllerHasAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis) { return stub_funcs.ptr_SDL_GameControllerHasAxis(gamecontroller, axis); }
Sint16 (SDL_GameControllerGetAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis) { return stub_funcs.ptr_SDL_GameControllerGetAxis(gamecontroller, axis); }
SDL_GameControllerButton (SDL_GameControllerGetButtonFromString)(const char * str) { return stub_funcs.ptr_SDL_GameControllerGetButtonFromString(str); }
const char * (SDL_GameControllerGetStringForButton)(SDL_GameControllerButton button) { return stub_funcs.ptr_SDL_GameControllerGetStringForButton(button); }
SDL_GameControllerButtonBind (SDL_GameControllerGetBindForButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button) { return stub_funcs.ptr_SDL_GameControllerGetBindForButton(gamecontroller, button); }
SDL_bool (SDL_GameControllerHasButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button) { return stub_funcs.ptr_SDL_GameControllerHasButton(gamecontroller, button); }
Uint8 (SDL_GameControllerGetButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button) { return stub_funcs.ptr_SDL_GameControllerGetButton(gamecontroller, button); }
int (SDL_GameControllerGetNumTouchpads)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerGetNumTouchpads(gamecontroller); }
int (SDL_GameControllerGetNumTouchpadFingers)(SDL_GameController * gamecontroller, int touchpad) { return stub_funcs.ptr_SDL_GameControllerGetNumTouchpadFingers(gamecontroller, touchpad); }
int (SDL_GameControllerGetTouchpadFinger)(SDL_GameController * gamecontroller, int touchpad, int finger, Uint8 * state, float * x, float * y, float * pressure) { return stub_funcs.ptr_SDL_GameControllerGetTouchpadFinger(gamecontroller, touchpad, finger, state, x, y, pressure); }
SDL_bool (SDL_GameControllerHasSensor)(SDL_GameController * gamecontroller, SDL_SensorType type) { return stub_funcs.ptr_SDL_GameControllerHasSensor(gamecontroller, type); }
int (SDL_GameControllerSetSensorEnabled)(SDL_GameController * gamecontroller, SDL_SensorType type, SDL_bool enabled) { return stub_funcs.ptr_SDL_GameControllerSetSensorEnabled(gamecontroller, type, enabled); }
SDL_bool (SDL_GameControllerIsSensorEnabled)(SDL_GameController * gamecontroller, SDL_SensorType type) { return stub_funcs.ptr_SDL_GameControllerIsSensorEnabled(gamecontroller, type); }
float (SDL_GameControllerGetSensorDataRate)(SDL_GameController * gamecontroller, SDL_SensorType type) { return stub_funcs.ptr_SDL_GameControllerGetSensorDataRate(gamecontroller, type); }
int (SDL_GameControllerGetSensorData)(SDL_GameController * gamecontroller, SDL_SensorType type, float * data, int num_values) { return stub_funcs.ptr_SDL_GameControllerGetSensorData(gamecontroller, type, data, num_values); }
int (SDL_GameControllerGetSensorDataWithTimestamp)(SDL_GameController * gamecontroller, SDL_SensorType type, Uint64 * timestamp, float * data, int num_values) { return stub_funcs.ptr_SDL_GameControllerGetSensorDataWithTimestamp(gamecontroller, type, timestamp, data, num_values); }
int (SDL_GameControllerRumble)(SDL_GameController * gamecontroller, Uint16 low_frequency_rumble, Uint16 high_frequency_rumble, Uint32 duration_ms) { return stub_funcs.ptr_SDL_GameControllerRumble(gamecontroller, low_frequency_rumble, high_frequency_rumble, duration_ms); }
int (SDL_GameControllerRumbleTriggers)(SDL_GameController * gamecontroller, Uint16 left_rumble, Uint16 right_rumble, Uint32 duration_ms) { return stub_funcs.ptr_SDL_GameControllerRumbleTriggers(gamecontroller, left_rumble, right_rumble, duration_ms); }
SDL_bool (SDL_GameControllerHasLED)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerHasLED(gamecontroller); }
SDL_bool (SDL_GameControllerHasRumble)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerHasRumble(gamecontroller); }
SDL_bool (SDL_GameControllerHasRumbleTriggers)(SDL_GameController * gamecontroller) { return stub_funcs.ptr_SDL_GameControllerHasRumbleTriggers(gamecontroller); }
int (SDL_GameControllerSetLED)(SDL_GameController * gamecontroller, Uint8 red, Uint8 green, Uint8 blue) { return stub_funcs.ptr_SDL_GameControllerSetLED(gamecontroller, red, green, blue); }
int (SDL_GameControllerSendEffect)(SDL_GameController * gamecontroller, const void * data, int size) { return stub_funcs.ptr_SDL_GameControllerSendEffect(gamecontroller, data, size); }
void (SDL_GameControllerClose)(SDL_GameController * gamecontroller) { stub_funcs.ptr_SDL_GameControllerClose(gamecontroller); }
const char * (SDL_GameControllerGetAppleSFSymbolsNameForButton)(SDL_GameController * gamecontroller, SDL_GameControllerButton button) { return stub_funcs.ptr_SDL_GameControllerGetAppleSFSymbolsNameForButton(gamecontroller, button); }
const char * (SDL_GameControllerGetAppleSFSymbolsNameForAxis)(SDL_GameController * gamecontroller, SDL_GameControllerAxis axis) { return stub_funcs.ptr_SDL_GameControllerGetAppleSFSymbolsNameForAxis(gamecontroller, axis); }
int (SDL_GetNumTouchDevices)(void) { return stub_funcs.ptr_SDL_GetNumTouchDevices(); }
SDL_TouchID (SDL_GetTouchDevice)(int index) { return stub_funcs.ptr_SDL_GetTouchDevice(index); }
const char * (SDL_GetTouchName)(int index) { return stub_funcs.ptr_SDL_GetTouchName(index); }
SDL_TouchDeviceType (SDL_GetTouchDeviceType)(SDL_TouchID touchID) { return stub_funcs.ptr_SDL_GetTouchDeviceType(touchID); }
int (SDL_GetNumTouchFingers)(SDL_TouchID touchID) { return stub_funcs.ptr_SDL_GetNumTouchFingers(touchID); }
SDL_Finger * (SDL_GetTouchFinger)(SDL_TouchID touchID, int index) { return stub_funcs.ptr_SDL_GetTouchFinger(touchID, index); }
int (SDL_RecordGesture)(SDL_TouchID touchId) { return stub_funcs.ptr_SDL_RecordGesture(touchId); }
int (SDL_SaveAllDollarTemplates)(SDL_RWops * dst) { return stub_funcs.ptr_SDL_SaveAllDollarTemplates(dst); }
int (SDL_SaveDollarTemplate)(SDL_GestureID gestureId, SDL_RWops * dst) { return stub_funcs.ptr_SDL_SaveDollarTemplate(gestureId, dst); }
int (SDL_LoadDollarTemplates)(SDL_TouchID touchId, SDL_RWops * src) { return stub_funcs.ptr_SDL_LoadDollarTemplates(touchId, src); }
void (SDL_PumpEvents)(void) { stub_funcs.ptr_SDL_PumpEvents(); }
int (SDL_PeepEvents)(SDL_Event * events, int numevents, SDL_eventaction action, Uint32 minType, Uint32 maxType) { return stub_funcs.ptr_SDL_PeepEvents(events, numevents, action, minType, maxType); }
SDL_bool (SDL_HasEvent)(Uint32 type) { return stub_funcs.ptr_SDL_HasEvent(type); }
SDL_bool (SDL_HasEvents)(Uint32 minType, Uint32 maxType) { return stub_funcs.ptr_SDL_HasEvents(minType, maxType); }
void (SDL_FlushEvent)(Uint32 type) { stub_funcs.ptr_SDL_FlushEvent(type); }
void (SDL_FlushEvents)(Uint32 minType, Uint32 maxType) { stub_funcs.ptr_SDL_FlushEvents(minType, maxType); }
int (SDL_PollEvent)(SDL_Event * event) { return stub_funcs.ptr_SDL_PollEvent(event); }
int (SDL_WaitEvent)(SDL_Event * event) { return stub_funcs.ptr_SDL_WaitEvent(event); }
int (SDL_WaitEventTimeout)(SDL_Event * event, int timeout) { return stub_funcs.ptr_SDL_WaitEventTimeout(event, timeout); }
int (SDL_PushEvent)(SDL_Event * event) { return stub_funcs.ptr_SDL_PushEvent(event); }
void (SDL_SetEventFilter)(SDL_EventFilter filter, void * userdata) { stub_funcs.ptr_SDL_SetEventFilter(filter, userdata); }
SDL_bool (SDL_GetEventFilter)(SDL_EventFilter * filter, void * * userdata) { return stub_funcs.ptr_SDL_GetEventFilter(filter, userdata); }
void (SDL_AddEventWatch)(SDL_EventFilter filter, void * userdata) { stub_funcs.ptr_SDL_AddEventWatch(filter, userdata); }
void (SDL_DelEventWatch)(SDL_EventFilter filter, void * userdata) { stub_funcs.ptr_SDL_DelEventWatch(filter, userdata); }
void (SDL_FilterEvents)(SDL_EventFilter filter, void * userdata) { stub_funcs.ptr_SDL_FilterEvents(filter, userdata); }
Uint8 (SDL_EventState)(Uint32 type, int state) { return stub_funcs.ptr_SDL_EventState(type, state); }
Uint32 (SDL_RegisterEvents)(int numevents) { return stub_funcs.ptr_SDL_RegisterEvents(numevents); }
char * (SDL_GetBasePath)(void) { return stub_funcs.ptr_SDL_GetBasePath(); }
char * (SDL_GetPrefPath)(const char * org, const char * app) { return stub_funcs.ptr_SDL_GetPrefPath(org, app); }
int (SDL_NumHaptics)(void) { return stub_funcs.ptr_SDL_NumHaptics(); }
const char * (SDL_HapticName)(int device_index) { return stub_funcs.ptr_SDL_HapticName(device_index); }
SDL_Haptic * (SDL_HapticOpen)(int device_index) { return stub_funcs.ptr_SDL_HapticOpen(device_index); }
int (SDL_HapticOpened)(int device_index) { return stub_funcs.ptr_SDL_HapticOpened(device_index); }
int (SDL_HapticIndex)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticIndex(haptic); }
int (SDL_MouseIsHaptic)(void) { return stub_funcs.ptr_SDL_MouseIsHaptic(); }
SDL_Haptic * (SDL_HapticOpenFromMouse)(void) { return stub_funcs.ptr_SDL_HapticOpenFromMouse(); }
int (SDL_JoystickIsHaptic)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_JoystickIsHaptic(joystick); }
SDL_Haptic * (SDL_HapticOpenFromJoystick)(SDL_Joystick * joystick) { return stub_funcs.ptr_SDL_HapticOpenFromJoystick(joystick); }
void (SDL_HapticClose)(SDL_Haptic * haptic) { stub_funcs.ptr_SDL_HapticClose(haptic); }
int (SDL_HapticNumEffects)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticNumEffects(haptic); }
int (SDL_HapticNumEffectsPlaying)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticNumEffectsPlaying(haptic); }
unsigned int (SDL_HapticQuery)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticQuery(haptic); }
int (SDL_HapticNumAxes)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticNumAxes(haptic); }
int (SDL_HapticEffectSupported)(SDL_Haptic * haptic, SDL_HapticEffect * effect) { return stub_funcs.ptr_SDL_HapticEffectSupported(haptic, effect); }
int (SDL_HapticNewEffect)(SDL_Haptic * haptic, SDL_HapticEffect * effect) { return stub_funcs.ptr_SDL_HapticNewEffect(haptic, effect); }
int (SDL_HapticUpdateEffect)(SDL_Haptic * haptic, int effect, SDL_HapticEffect * data) { return stub_funcs.ptr_SDL_HapticUpdateEffect(haptic, effect, data); }
int (SDL_HapticRunEffect)(SDL_Haptic * haptic, int effect, Uint32 iterations) { return stub_funcs.ptr_SDL_HapticRunEffect(haptic, effect, iterations); }
int (SDL_HapticStopEffect)(SDL_Haptic * haptic, int effect) { return stub_funcs.ptr_SDL_HapticStopEffect(haptic, effect); }
void (SDL_HapticDestroyEffect)(SDL_Haptic * haptic, int effect) { stub_funcs.ptr_SDL_HapticDestroyEffect(haptic, effect); }
int (SDL_HapticGetEffectStatus)(SDL_Haptic * haptic, int effect) { return stub_funcs.ptr_SDL_HapticGetEffectStatus(haptic, effect); }
int (SDL_HapticSetGain)(SDL_Haptic * haptic, int gain) { return stub_funcs.ptr_SDL_HapticSetGain(haptic, gain); }
int (SDL_HapticSetAutocenter)(SDL_Haptic * haptic, int autocenter) { return stub_funcs.ptr_SDL_HapticSetAutocenter(haptic, autocenter); }
int (SDL_HapticPause)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticPause(haptic); }
int (SDL_HapticUnpause)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticUnpause(haptic); }
int (SDL_HapticStopAll)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticStopAll(haptic); }
int (SDL_HapticRumbleSupported)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticRumbleSupported(haptic); }
int (SDL_HapticRumbleInit)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticRumbleInit(haptic); }
int (SDL_HapticRumblePlay)(SDL_Haptic * haptic, float strength, Uint32 length) { return stub_funcs.ptr_SDL_HapticRumblePlay(haptic, strength, length); }
int (SDL_HapticRumbleStop)(SDL_Haptic * haptic) { return stub_funcs.ptr_SDL_HapticRumbleStop(haptic); }
int (SDL_hid_init)(void) { return stub_funcs.ptr_SDL_hid_init(); }
int (SDL_hid_exit)(void) { return stub_funcs.ptr_SDL_hid_exit(); }
Uint32 (SDL_hid_device_change_count)(void) { return stub_funcs.ptr_SDL_hid_device_change_count(); }
SDL_hid_device_info * (SDL_hid_enumerate)(unsigned short vendor_id, unsigned short product_id) { return stub_funcs.ptr_SDL_hid_enumerate(vendor_id, product_id); }
void (SDL_hid_free_enumeration)(SDL_hid_device_info * devs) { stub_funcs.ptr_SDL_hid_free_enumeration(devs); }
SDL_hid_device * (SDL_hid_open)(unsigned short vendor_id, unsigned short product_id, const wchar_t * serial_number) { return stub_funcs.ptr_SDL_hid_open(vendor_id, product_id, serial_number); }
SDL_hid_device * (SDL_hid_open_path)(const char * path, int bExclusive) { return stub_funcs.ptr_SDL_hid_open_path(path, bExclusive); }
int (SDL_hid_write)(SDL_hid_device * dev, const unsigned char * data, size_t length) { return stub_funcs.ptr_SDL_hid_write(dev, data, length); }
int (SDL_hid_read_timeout)(SDL_hid_device * dev, unsigned char * data, size_t length, int milliseconds) { return stub_funcs.ptr_SDL_hid_read_timeout(dev, data, length, milliseconds); }
int (SDL_hid_read)(SDL_hid_device * dev, unsigned char * data, size_t length) { return stub_funcs.ptr_SDL_hid_read(dev, data, length); }
int (SDL_hid_set_nonblocking)(SDL_hid_device * dev, int nonblock) { return stub_funcs.ptr_SDL_hid_set_nonblocking(dev, nonblock); }
int (SDL_hid_send_feature_report)(SDL_hid_device * dev, const unsigned char * data, size_t length) { return stub_funcs.ptr_SDL_hid_send_feature_report(dev, data, length); }
int (SDL_hid_get_feature_report)(SDL_hid_device * dev, unsigned char * data, size_t length) { return stub_funcs.ptr_SDL_hid_get_feature_report(dev, data, length); }
void (SDL_hid_close)(SDL_hid_device * dev) { stub_funcs.ptr_SDL_hid_close(dev); }
int (SDL_hid_get_manufacturer_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen) { return stub_funcs.ptr_SDL_hid_get_manufacturer_string(dev, string, maxlen); }
int (SDL_hid_get_product_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen) { return stub_funcs.ptr_SDL_hid_get_product_string(dev, string, maxlen); }
int (SDL_hid_get_serial_number_string)(SDL_hid_device * dev, wchar_t * string, size_t maxlen) { return stub_funcs.ptr_SDL_hid_get_serial_number_string(dev, string, maxlen); }
int (SDL_hid_get_indexed_string)(SDL_hid_device * dev, int string_index, wchar_t * string, size_t maxlen) { return stub_funcs.ptr_SDL_hid_get_indexed_string(dev, string_index, string, maxlen); }
void (SDL_hid_ble_scan)(SDL_bool active) { stub_funcs.ptr_SDL_hid_ble_scan(active); }
SDL_bool (SDL_SetHintWithPriority)(const char * name, const char * value, SDL_HintPriority priority) { return stub_funcs.ptr_SDL_SetHintWithPriority(name, value, priority); }
SDL_bool (SDL_SetHint)(const char * name, const char * value) { return stub_funcs.ptr_SDL_SetHint(name, value); }
SDL_bool (SDL_ResetHint)(const char * name) { return stub_funcs.ptr_SDL_ResetHint(name); }
void (SDL_ResetHints)(void) { stub_funcs.ptr_SDL_ResetHints(); }
const char * (SDL_GetHint)(const char * name) { return stub_funcs.ptr_SDL_GetHint(name); }
SDL_bool (SDL_GetHintBoolean)(const char * name, SDL_bool default_value) { return stub_funcs.ptr_SDL_GetHintBoolean(name, default_value); }
void (SDL_AddHintCallback)(const char * name, SDL_HintCallback callback, void * userdata) { stub_funcs.ptr_SDL_AddHintCallback(name, callback, userdata); }
void (SDL_DelHintCallback)(const char * name, SDL_HintCallback callback, void * userdata) { stub_funcs.ptr_SDL_DelHintCallback(name, callback, userdata); }
void (SDL_ClearHints)(void) { stub_funcs.ptr_SDL_ClearHints(); }
void * (SDL_LoadObject)(const char * sofile) { return stub_funcs.ptr_SDL_LoadObject(sofile); }
void * (SDL_LoadFunction)(void * handle, const char * name) { return stub_funcs.ptr_SDL_LoadFunction(handle, name); }
void (SDL_UnloadObject)(void * handle) { stub_funcs.ptr_SDL_UnloadObject(handle); }
void (SDL_LogSetAllPriority)(SDL_LogPriority priority) { stub_funcs.ptr_SDL_LogSetAllPriority(priority); }
void (SDL_LogSetPriority)(int category, SDL_LogPriority priority) { stub_funcs.ptr_SDL_LogSetPriority(category, priority); }
SDL_LogPriority (SDL_LogGetPriority)(int category) { return stub_funcs.ptr_SDL_LogGetPriority(category); }
void (SDL_LogResetPriorities)(void) { stub_funcs.ptr_SDL_LogResetPriorities(); }
void (SDL_LogMessageV)(int category, SDL_LogPriority priority, const char * fmt, va_list ap) { stub_funcs.ptr_SDL_LogMessageV(category, priority, fmt, ap); }
void (SDL_LogGetOutputFunction)(SDL_LogOutputFunction * callback, void * * userdata) { stub_funcs.ptr_SDL_LogGetOutputFunction(callback, userdata); }
void (SDL_LogSetOutputFunction)(SDL_LogOutputFunction callback, void * userdata) { stub_funcs.ptr_SDL_LogSetOutputFunction(callback, userdata); }
int (SDL_ShowMessageBox)(const SDL_MessageBoxData * messageboxdata, int * buttonid) { return stub_funcs.ptr_SDL_ShowMessageBox(messageboxdata, buttonid); }
int (SDL_ShowSimpleMessageBox)(Uint32 flags, const char * title, const char * message, SDL_Window * window) { return stub_funcs.ptr_SDL_ShowSimpleMessageBox(flags, title, message, window); }
SDL_MetalView (SDL_Metal_CreateView)(SDL_Window * window) { return stub_funcs.ptr_SDL_Metal_CreateView(window); }
void (SDL_Metal_DestroyView)(SDL_MetalView view) { stub_funcs.ptr_SDL_Metal_DestroyView(view); }
void * (SDL_Metal_GetLayer)(SDL_MetalView view) { return stub_funcs.ptr_SDL_Metal_GetLayer(view); }
void (SDL_Metal_GetDrawableSize)(SDL_Window * window, int * w, int * h) { stub_funcs.ptr_SDL_Metal_GetDrawableSize(window, w, h); }
SDL_PowerState (SDL_GetPowerInfo)(int * seconds, int * percent) { return stub_funcs.ptr_SDL_GetPowerInfo(seconds, percent); }
int (SDL_GetNumRenderDrivers)(void) { return stub_funcs.ptr_SDL_GetNumRenderDrivers(); }
int (SDL_GetRenderDriverInfo)(int index, SDL_RendererInfo * info) { return stub_funcs.ptr_SDL_GetRenderDriverInfo(index, info); }
int (SDL_CreateWindowAndRenderer)(int width, int height, Uint32 window_flags, SDL_Window * * window, SDL_Renderer * * renderer) { return stub_funcs.ptr_SDL_CreateWindowAndRenderer(width, height, window_flags, window, renderer); }
SDL_Renderer * (SDL_CreateRenderer)(SDL_Window * window, int index, Uint32 flags) { return stub_funcs.ptr_SDL_CreateRenderer(window, index, flags); }
SDL_Renderer * (SDL_CreateSoftwareRenderer)(SDL_Surface * surface) { return stub_funcs.ptr_SDL_CreateSoftwareRenderer(surface); }
SDL_Renderer * (SDL_GetRenderer)(SDL_Window * window) { return stub_funcs.ptr_SDL_GetRenderer(window); }
SDL_Window * (SDL_RenderGetWindow)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderGetWindow(renderer); }
int (SDL_GetRendererInfo)(SDL_Renderer * renderer, SDL_RendererInfo * info) { return stub_funcs.ptr_SDL_GetRendererInfo(renderer, info); }
int (SDL_GetRendererOutputSize)(SDL_Renderer * renderer, int * w, int * h) { return stub_funcs.ptr_SDL_GetRendererOutputSize(renderer, w, h); }
SDL_Texture * (SDL_CreateTexture)(SDL_Renderer * renderer, Uint32 format, int access, int w, int h) { return stub_funcs.ptr_SDL_CreateTexture(renderer, format, access, w, h); }
SDL_Texture * (SDL_CreateTextureFromSurface)(SDL_Renderer * renderer, SDL_Surface * surface) { return stub_funcs.ptr_SDL_CreateTextureFromSurface(renderer, surface); }
int (SDL_QueryTexture)(SDL_Texture * texture, Uint32 * format, int * access, int * w, int * h) { return stub_funcs.ptr_SDL_QueryTexture(texture, format, access, w, h); }
int (SDL_SetTextureColorMod)(SDL_Texture * texture, Uint8 r, Uint8 g, Uint8 b) { return stub_funcs.ptr_SDL_SetTextureColorMod(texture, r, g, b); }
int (SDL_GetTextureColorMod)(SDL_Texture * texture, Uint8 * r, Uint8 * g, Uint8 * b) { return stub_funcs.ptr_SDL_GetTextureColorMod(texture, r, g, b); }
int (SDL_SetTextureAlphaMod)(SDL_Texture * texture, Uint8 alpha) { return stub_funcs.ptr_SDL_SetTextureAlphaMod(texture, alpha); }
int (SDL_GetTextureAlphaMod)(SDL_Texture * texture, Uint8 * alpha) { return stub_funcs.ptr_SDL_GetTextureAlphaMod(texture, alpha); }
int (SDL_SetTextureBlendMode)(SDL_Texture * texture, SDL_BlendMode blendMode) { return stub_funcs.ptr_SDL_SetTextureBlendMode(texture, blendMode); }
int (SDL_GetTextureBlendMode)(SDL_Texture * texture, SDL_BlendMode * blendMode) { return stub_funcs.ptr_SDL_GetTextureBlendMode(texture, blendMode); }
int (SDL_SetTextureScaleMode)(SDL_Texture * texture, SDL_ScaleMode scaleMode) { return stub_funcs.ptr_SDL_SetTextureScaleMode(texture, scaleMode); }
int (SDL_GetTextureScaleMode)(SDL_Texture * texture, SDL_ScaleMode * scaleMode) { return stub_funcs.ptr_SDL_GetTextureScaleMode(texture, scaleMode); }
int (SDL_SetTextureUserData)(SDL_Texture * texture, void * userdata) { return stub_funcs.ptr_SDL_SetTextureUserData(texture, userdata); }
void * (SDL_GetTextureUserData)(SDL_Texture * texture) { return stub_funcs.ptr_SDL_GetTextureUserData(texture); }
int (SDL_UpdateTexture)(SDL_Texture * texture, const SDL_Rect * rect, const void * pixels, int pitch) { return stub_funcs.ptr_SDL_UpdateTexture(texture, rect, pixels, pitch); }
int (SDL_UpdateYUVTexture)(SDL_Texture * texture, const SDL_Rect * rect, const Uint8 * Yplane, int Ypitch, const Uint8 * Uplane, int Upitch, const Uint8 * Vplane, int Vpitch) { return stub_funcs.ptr_SDL_UpdateYUVTexture(texture, rect, Yplane, Ypitch, Uplane, Upitch, Vplane, Vpitch); }
int (SDL_UpdateNVTexture)(SDL_Texture * texture, const SDL_Rect * rect, const Uint8 * Yplane, int Ypitch, const Uint8 * UVplane, int UVpitch) { return stub_funcs.ptr_SDL_UpdateNVTexture(texture, rect, Yplane, Ypitch, UVplane, UVpitch); }
int (SDL_LockTexture)(SDL_Texture * texture, const SDL_Rect * rect, void * * pixels, int * pitch) { return stub_funcs.ptr_SDL_LockTexture(texture, rect, pixels, pitch); }
int (SDL_LockTextureToSurface)(SDL_Texture * texture, const SDL_Rect * rect, SDL_Surface * * surface) { return stub_funcs.ptr_SDL_LockTextureToSurface(texture, rect, surface); }
void (SDL_UnlockTexture)(SDL_Texture * texture) { stub_funcs.ptr_SDL_UnlockTexture(texture); }
SDL_bool (SDL_RenderTargetSupported)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderTargetSupported(renderer); }
int (SDL_SetRenderTarget)(SDL_Renderer * renderer, SDL_Texture * texture) { return stub_funcs.ptr_SDL_SetRenderTarget(renderer, texture); }
SDL_Texture * (SDL_GetRenderTarget)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_GetRenderTarget(renderer); }
int (SDL_RenderSetLogicalSize)(SDL_Renderer * renderer, int w, int h) { return stub_funcs.ptr_SDL_RenderSetLogicalSize(renderer, w, h); }
void (SDL_RenderGetLogicalSize)(SDL_Renderer * renderer, int * w, int * h) { stub_funcs.ptr_SDL_RenderGetLogicalSize(renderer, w, h); }
int (SDL_RenderSetIntegerScale)(SDL_Renderer * renderer, SDL_bool enable) { return stub_funcs.ptr_SDL_RenderSetIntegerScale(renderer, enable); }
SDL_bool (SDL_RenderGetIntegerScale)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderGetIntegerScale(renderer); }
int (SDL_RenderSetViewport)(SDL_Renderer * renderer, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_RenderSetViewport(renderer, rect); }
void (SDL_RenderGetViewport)(SDL_Renderer * renderer, SDL_Rect * rect) { stub_funcs.ptr_SDL_RenderGetViewport(renderer, rect); }
int (SDL_RenderSetClipRect)(SDL_Renderer * renderer, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_RenderSetClipRect(renderer, rect); }
void (SDL_RenderGetClipRect)(SDL_Renderer * renderer, SDL_Rect * rect) { stub_funcs.ptr_SDL_RenderGetClipRect(renderer, rect); }
SDL_bool (SDL_RenderIsClipEnabled)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderIsClipEnabled(renderer); }
int (SDL_RenderSetScale)(SDL_Renderer * renderer, float scaleX, float scaleY) { return stub_funcs.ptr_SDL_RenderSetScale(renderer, scaleX, scaleY); }
void (SDL_RenderGetScale)(SDL_Renderer * renderer, float * scaleX, float * scaleY) { stub_funcs.ptr_SDL_RenderGetScale(renderer, scaleX, scaleY); }
void (SDL_RenderWindowToLogical)(SDL_Renderer * renderer, int windowX, int windowY, float * logicalX, float * logicalY) { stub_funcs.ptr_SDL_RenderWindowToLogical(renderer, windowX, windowY, logicalX, logicalY); }
void (SDL_RenderLogicalToWindow)(SDL_Renderer * renderer, float logicalX, float logicalY, int * windowX, int * windowY) { stub_funcs.ptr_SDL_RenderLogicalToWindow(renderer, logicalX, logicalY, windowX, windowY); }
int (SDL_SetRenderDrawColor)(SDL_Renderer * renderer, Uint8 r, Uint8 g, Uint8 b, Uint8 a) { return stub_funcs.ptr_SDL_SetRenderDrawColor(renderer, r, g, b, a); }
int (SDL_GetRenderDrawColor)(SDL_Renderer * renderer, Uint8 * r, Uint8 * g, Uint8 * b, Uint8 * a) { return stub_funcs.ptr_SDL_GetRenderDrawColor(renderer, r, g, b, a); }
int (SDL_SetRenderDrawBlendMode)(SDL_Renderer * renderer, SDL_BlendMode blendMode) { return stub_funcs.ptr_SDL_SetRenderDrawBlendMode(renderer, blendMode); }
int (SDL_GetRenderDrawBlendMode)(SDL_Renderer * renderer, SDL_BlendMode * blendMode) { return stub_funcs.ptr_SDL_GetRenderDrawBlendMode(renderer, blendMode); }
int (SDL_RenderClear)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderClear(renderer); }
int (SDL_RenderDrawPoint)(SDL_Renderer * renderer, int x, int y) { return stub_funcs.ptr_SDL_RenderDrawPoint(renderer, x, y); }
int (SDL_RenderDrawPoints)(SDL_Renderer * renderer, const SDL_Point * points, int count) { return stub_funcs.ptr_SDL_RenderDrawPoints(renderer, points, count); }
int (SDL_RenderDrawLine)(SDL_Renderer * renderer, int x1, int y1, int x2, int y2) { return stub_funcs.ptr_SDL_RenderDrawLine(renderer, x1, y1, x2, y2); }
int (SDL_RenderDrawLines)(SDL_Renderer * renderer, const SDL_Point * points, int count) { return stub_funcs.ptr_SDL_RenderDrawLines(renderer, points, count); }
int (SDL_RenderDrawRect)(SDL_Renderer * renderer, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_RenderDrawRect(renderer, rect); }
int (SDL_RenderDrawRects)(SDL_Renderer * renderer, const SDL_Rect * rects, int count) { return stub_funcs.ptr_SDL_RenderDrawRects(renderer, rects, count); }
int (SDL_RenderFillRect)(SDL_Renderer * renderer, const SDL_Rect * rect) { return stub_funcs.ptr_SDL_RenderFillRect(renderer, rect); }
int (SDL_RenderFillRects)(SDL_Renderer * renderer, const SDL_Rect * rects, int count) { return stub_funcs.ptr_SDL_RenderFillRects(renderer, rects, count); }
int (SDL_RenderCopy)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect) { return stub_funcs.ptr_SDL_RenderCopy(renderer, texture, srcrect, dstrect); }
int (SDL_RenderCopyEx)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_Rect * dstrect, const double angle, const SDL_Point * center, const SDL_RendererFlip flip) { return stub_funcs.ptr_SDL_RenderCopyEx(renderer, texture, srcrect, dstrect, angle, center, flip); }
int (SDL_RenderDrawPointF)(SDL_Renderer * renderer, float x, float y) { return stub_funcs.ptr_SDL_RenderDrawPointF(renderer, x, y); }
int (SDL_RenderDrawPointsF)(SDL_Renderer * renderer, const SDL_FPoint * points, int count) { return stub_funcs.ptr_SDL_RenderDrawPointsF(renderer, points, count); }
int (SDL_RenderDrawLineF)(SDL_Renderer * renderer, float x1, float y1, float x2, float y2) { return stub_funcs.ptr_SDL_RenderDrawLineF(renderer, x1, y1, x2, y2); }
int (SDL_RenderDrawLinesF)(SDL_Renderer * renderer, const SDL_FPoint * points, int count) { return stub_funcs.ptr_SDL_RenderDrawLinesF(renderer, points, count); }
int (SDL_RenderDrawRectF)(SDL_Renderer * renderer, const SDL_FRect * rect) { return stub_funcs.ptr_SDL_RenderDrawRectF(renderer, rect); }
int (SDL_RenderDrawRectsF)(SDL_Renderer * renderer, const SDL_FRect * rects, int count) { return stub_funcs.ptr_SDL_RenderDrawRectsF(renderer, rects, count); }
int (SDL_RenderFillRectF)(SDL_Renderer * renderer, const SDL_FRect * rect) { return stub_funcs.ptr_SDL_RenderFillRectF(renderer, rect); }
int (SDL_RenderFillRectsF)(SDL_Renderer * renderer, const SDL_FRect * rects, int count) { return stub_funcs.ptr_SDL_RenderFillRectsF(renderer, rects, count); }
int (SDL_RenderCopyF)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_FRect * dstrect) { return stub_funcs.ptr_SDL_RenderCopyF(renderer, texture, srcrect, dstrect); }
int (SDL_RenderCopyExF)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Rect * srcrect, const SDL_FRect * dstrect, const double angle, const SDL_FPoint * center, const SDL_RendererFlip flip) { return stub_funcs.ptr_SDL_RenderCopyExF(renderer, texture, srcrect, dstrect, angle, center, flip); }
int (SDL_RenderGeometry)(SDL_Renderer * renderer, SDL_Texture * texture, const SDL_Vertex * vertices, int num_vertices, const int * indices, int num_indices) { return stub_funcs.ptr_SDL_RenderGeometry(renderer, texture, vertices, num_vertices, indices, num_indices); }
int (SDL_RenderGeometryRaw)(SDL_Renderer * renderer, SDL_Texture * texture, const float * xy, int xy_stride, const SDL_Color * color, int color_stride, const float * uv, int uv_stride, int num_vertices, const void * indices, int num_indices, int size_indices) { return stub_funcs.ptr_SDL_RenderGeometryRaw(renderer, texture, xy, xy_stride, color, color_stride, uv, uv_stride, num_vertices, indices, num_indices, size_indices); }
int (SDL_RenderReadPixels)(SDL_Renderer * renderer, const SDL_Rect * rect, Uint32 format, void * pixels, int pitch) { return stub_funcs.ptr_SDL_RenderReadPixels(renderer, rect, format, pixels, pitch); }
void (SDL_RenderPresent)(SDL_Renderer * renderer) { stub_funcs.ptr_SDL_RenderPresent(renderer); }
void (SDL_DestroyTexture)(SDL_Texture * texture) { stub_funcs.ptr_SDL_DestroyTexture(texture); }
void (SDL_DestroyRenderer)(SDL_Renderer * renderer) { stub_funcs.ptr_SDL_DestroyRenderer(renderer); }
int (SDL_RenderFlush)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderFlush(renderer); }
int (SDL_GL_BindTexture)(SDL_Texture * texture, float * texw, float * texh) { return stub_funcs.ptr_SDL_GL_BindTexture(texture, texw, texh); }
int (SDL_GL_UnbindTexture)(SDL_Texture * texture) { return stub_funcs.ptr_SDL_GL_UnbindTexture(texture); }
void * (SDL_RenderGetMetalLayer)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderGetMetalLayer(renderer); }
void * (SDL_RenderGetMetalCommandEncoder)(SDL_Renderer * renderer) { return stub_funcs.ptr_SDL_RenderGetMetalCommandEncoder(renderer); }
int (SDL_RenderSetVSync)(SDL_Renderer * renderer, int vsync) { return stub_funcs.ptr_SDL_RenderSetVSync(renderer, vsync); }
SDL_Window * (SDL_CreateShapedWindow)(const char * title, unsigned int x, unsigned int y, unsigned int w, unsigned int h, Uint32 flags) { return stub_funcs.ptr_SDL_CreateShapedWindow(title, x, y, w, h, flags); }
SDL_bool (SDL_IsShapedWindow)(const SDL_Window * window) { return stub_funcs.ptr_SDL_IsShapedWindow(window); }
int (SDL_SetWindowShape)(SDL_Window * window, SDL_Surface * shape, SDL_WindowShapeMode * shape_mode) { return stub_funcs.ptr_SDL_SetWindowShape(window, shape, shape_mode); }
int (SDL_GetShapedWindowMode)(SDL_Window * window, SDL_WindowShapeMode * shape_mode) { return stub_funcs.ptr_SDL_GetShapedWindowMode(window, shape_mode); }
int (SDL_LinuxSetThreadPriority)(Sint64 threadID, int priority) { return stub_funcs.ptr_SDL_LinuxSetThreadPriority(threadID, priority); }
int (SDL_LinuxSetThreadPriorityAndPolicy)(Sint64 threadID, int sdlPriority, int schedPolicy) { return stub_funcs.ptr_SDL_LinuxSetThreadPriorityAndPolicy(threadID, sdlPriority, schedPolicy); }
SDL_bool (SDL_IsTablet)(void) { return stub_funcs.ptr_SDL_IsTablet(); }
void (SDL_OnApplicationWillTerminate)(void) { stub_funcs.ptr_SDL_OnApplicationWillTerminate(); }
void (SDL_OnApplicationDidReceiveMemoryWarning)(void) { stub_funcs.ptr_SDL_OnApplicationDidReceiveMemoryWarning(); }
void (SDL_OnApplicationWillResignActive)(void) { stub_funcs.ptr_SDL_OnApplicationWillResignActive(); }
void (SDL_OnApplicationDidEnterBackground)(void) { stub_funcs.ptr_SDL_OnApplicationDidEnterBackground(); }
void (SDL_OnApplicationWillEnterForeground)(void) { stub_funcs.ptr_SDL_OnApplicationWillEnterForeground(); }
void (SDL_OnApplicationDidBecomeActive)(void) { stub_funcs.ptr_SDL_OnApplicationDidBecomeActive(); }
Uint32 (SDL_GetTicks)(void) { return stub_funcs.ptr_SDL_GetTicks(); }
Uint64 (SDL_GetTicks64)(void) { return stub_funcs.ptr_SDL_GetTicks64(); }
Uint64 (SDL_GetPerformanceCounter)(void) { return stub_funcs.ptr_SDL_GetPerformanceCounter(); }
Uint64 (SDL_GetPerformanceFrequency)(void) { return stub_funcs.ptr_SDL_GetPerformanceFrequency(); }
void (SDL_Delay)(Uint32 ms) { stub_funcs.ptr_SDL_Delay(ms); }
SDL_TimerID (SDL_AddTimer)(Uint32 interval, SDL_TimerCallback callback, void * param) { return stub_funcs.ptr_SDL_AddTimer(interval, callback, param); }
SDL_bool (SDL_RemoveTimer)(SDL_TimerID id) { return stub_funcs.ptr_SDL_RemoveTimer(id); }
void (SDL_GetVersion)(SDL_version * ver) { stub_funcs.ptr_SDL_GetVersion(ver); }
const char * (SDL_GetRevision)(void) { return stub_funcs.ptr_SDL_GetRevision(); }
int (SDL_GetRevisionNumber)(void) { return stub_funcs.ptr_SDL_GetRevisionNumber(); }
SDL_Locale * (SDL_GetPreferredLocales)(void) { return stub_funcs.ptr_SDL_GetPreferredLocales(); }
int (SDL_OpenURL)(const char * url) { return stub_funcs.ptr_SDL_OpenURL(url); }
int (SDL_Init)(Uint32 flags) { return stub_funcs.ptr_SDL_Init(flags); }
int (SDL_InitSubSystem)(Uint32 flags) { return stub_funcs.ptr_SDL_InitSubSystem(flags); }
void (SDL_QuitSubSystem)(Uint32 flags) { stub_funcs.ptr_SDL_QuitSubSystem(flags); }
Uint32 (SDL_WasInit)(Uint32 flags) { return stub_funcs.ptr_SDL_WasInit(flags); }
void (SDL_Quit)(void) { stub_funcs.ptr_SDL_Quit(); }

void close_sdl2(void) {
    cosmo_dlclose(sdl2);
}