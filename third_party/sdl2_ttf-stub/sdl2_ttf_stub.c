#include "sdl2_ttf_stub.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define _COMSO_SOURCE
#include <libc/dlopen/dlfcn.h>

static struct sdl2_ttfFuncs {
    const SDL_version * (*ptr_TTF_Linked_Version)(void);
    void (*ptr_TTF_GetFreeTypeVersion)(int * major, int * minor, int * patch);
    void (*ptr_TTF_GetHarfBuzzVersion)(int * major, int * minor, int * patch);
    void (*ptr_TTF_ByteSwappedUNICODE)(SDL_bool swapped);
    int (*ptr_TTF_Init)(void);
    TTF_Font * (*ptr_TTF_OpenFont)(const char * file, int ptsize);
    TTF_Font * (*ptr_TTF_OpenFontIndex)(const char * file, int ptsize, long index);
    TTF_Font * (*ptr_TTF_OpenFontRW)(SDL_RWops * src, int freesrc, int ptsize);
    TTF_Font * (*ptr_TTF_OpenFontIndexRW)(SDL_RWops * src, int freesrc, int ptsize, long index);
    TTF_Font * (*ptr_TTF_OpenFontDPI)(const char * file, int ptsize, unsigned int hdpi, unsigned int vdpi);
    TTF_Font * (*ptr_TTF_OpenFontIndexDPI)(const char * file, int ptsize, long index, unsigned int hdpi, unsigned int vdpi);
    TTF_Font * (*ptr_TTF_OpenFontDPIRW)(SDL_RWops * src, int freesrc, int ptsize, unsigned int hdpi, unsigned int vdpi);
    TTF_Font * (*ptr_TTF_OpenFontIndexDPIRW)(SDL_RWops * src, int freesrc, int ptsize, long index, unsigned int hdpi, unsigned int vdpi);
    int (*ptr_TTF_SetFontSize)(TTF_Font * font, int ptsize);
    int (*ptr_TTF_SetFontSizeDPI)(TTF_Font * font, int ptsize, unsigned int hdpi, unsigned int vdpi);
    int (*ptr_TTF_GetFontStyle)(const TTF_Font * font);
    void (*ptr_TTF_SetFontStyle)(TTF_Font * font, int style);
    int (*ptr_TTF_GetFontOutline)(const TTF_Font * font);
    void (*ptr_TTF_SetFontOutline)(TTF_Font * font, int outline);
    int (*ptr_TTF_GetFontHinting)(const TTF_Font * font);
    void (*ptr_TTF_SetFontHinting)(TTF_Font * font, int hinting);
    int (*ptr_TTF_GetFontWrappedAlign)(const TTF_Font * font);
    void (*ptr_TTF_SetFontWrappedAlign)(TTF_Font * font, int align);
    int (*ptr_TTF_FontHeight)(const TTF_Font * font);
    int (*ptr_TTF_FontAscent)(const TTF_Font * font);
    int (*ptr_TTF_FontDescent)(const TTF_Font * font);
    int (*ptr_TTF_FontLineSkip)(const TTF_Font * font);
    void (*ptr_TTF_SetFontLineSkip)(TTF_Font * font, int lineskip);
    int (*ptr_TTF_GetFontKerning)(const TTF_Font * font);
    void (*ptr_TTF_SetFontKerning)(TTF_Font * font, int allowed);
    long (*ptr_TTF_FontFaces)(const TTF_Font * font);
    int (*ptr_TTF_FontFaceIsFixedWidth)(const TTF_Font * font);
    const char * (*ptr_TTF_FontFaceFamilyName)(const TTF_Font * font);
    const char * (*ptr_TTF_FontFaceStyleName)(const TTF_Font * font);
    int (*ptr_TTF_GlyphIsProvided)(TTF_Font * font, Uint16 ch);
    int (*ptr_TTF_GlyphIsProvided32)(TTF_Font * font, Uint32 ch);
    int (*ptr_TTF_GlyphMetrics)(TTF_Font * font, Uint16 ch, int * minx, int * maxx, int * miny, int * maxy, int * advance);
    int (*ptr_TTF_GlyphMetrics32)(TTF_Font * font, Uint32 ch, int * minx, int * maxx, int * miny, int * maxy, int * advance);
    int (*ptr_TTF_SizeText)(TTF_Font * font, const char * text, int * w, int * h);
    int (*ptr_TTF_SizeUTF8)(TTF_Font * font, const char * text, int * w, int * h);
    int (*ptr_TTF_SizeUNICODE)(TTF_Font * font, const Uint16 * text, int * w, int * h);
    int (*ptr_TTF_MeasureText)(TTF_Font * font, const char * text, int measure_width, int * extent, int * count);
    int (*ptr_TTF_MeasureUTF8)(TTF_Font * font, const char * text, int measure_width, int * extent, int * count);
    int (*ptr_TTF_MeasureUNICODE)(TTF_Font * font, const Uint16 * text, int measure_width, int * extent, int * count);
    SDL_Surface * (*ptr_TTF_RenderText_Solid)(TTF_Font * font, const char * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Solid)(TTF_Font * font, const char * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Solid)(TTF_Font * font, const Uint16 * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderText_Solid_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Solid_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Solid_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderGlyph_Solid)(TTF_Font * font, Uint16 ch, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderGlyph32_Solid)(TTF_Font * font, Uint32 ch, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderText_Shaded)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Shaded)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Shaded)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderText_Shaded_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Shaded_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Shaded_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderGlyph_Shaded)(TTF_Font * font, Uint16 ch, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderGlyph32_Shaded)(TTF_Font * font, Uint32 ch, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderText_Blended)(TTF_Font * font, const char * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Blended)(TTF_Font * font, const char * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Blended)(TTF_Font * font, const Uint16 * text, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderText_Blended_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUTF8_Blended_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_Blended_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderGlyph_Blended)(TTF_Font * font, Uint16 ch, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderGlyph32_Blended)(TTF_Font * font, Uint32 ch, SDL_Color fg);
    SDL_Surface * (*ptr_TTF_RenderText_LCD)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderUTF8_LCD)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_LCD)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderText_LCD_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUTF8_LCD_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderUNICODE_LCD_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength);
    SDL_Surface * (*ptr_TTF_RenderGlyph_LCD)(TTF_Font * font, Uint16 ch, SDL_Color fg, SDL_Color bg);
    SDL_Surface * (*ptr_TTF_RenderGlyph32_LCD)(TTF_Font * font, Uint32 ch, SDL_Color fg, SDL_Color bg);
    void (*ptr_TTF_CloseFont)(TTF_Font * font);
    void (*ptr_TTF_Quit)(void);
    int (*ptr_TTF_WasInit)(void);
    int (*ptr_TTF_GetFontKerningSize)(TTF_Font * font, int prev_index, int index);
    int (*ptr_TTF_GetFontKerningSizeGlyphs)(TTF_Font * font, Uint16 previous_ch, Uint16 ch);
    int (*ptr_TTF_GetFontKerningSizeGlyphs32)(TTF_Font * font, Uint32 previous_ch, Uint32 ch);
    int (*ptr_TTF_SetFontSDF)(TTF_Font * font, SDL_bool on_off);
    SDL_bool (*ptr_TTF_GetFontSDF)(const TTF_Font * font);
    int (*ptr_TTF_SetDirection)(int direction);
    int (*ptr_TTF_SetScript)(int script);
    int (*ptr_TTF_SetFontDirection)(TTF_Font * font, TTF_Direction direction);
    int (*ptr_TTF_SetFontScriptName)(TTF_Font * font, const char * script);
} stub_funcs;

void *sdl2_ttf;

void initialize_sdl2_ttf(void) {
    char *candidates_sdl2_ttf[] = { "libSDL2_ttf-2.0.so", "libSDL2_ttf-2.0.so.0", "sdl2_ttf.dll" };
    sdl2_ttf = try_find_lib(candidates_sdl2_ttf, 3);

    if (!sdl2_ttf) {
        fprintf(stderr, "Unable to locate sdl2_ttf, exiting!");
        exit(1);
    }

    stub_funcs.ptr_TTF_Linked_Version = try_find_sym(sdl2_ttf, "TTF_Linked_Version");
    stub_funcs.ptr_TTF_GetFreeTypeVersion = try_find_sym(sdl2_ttf, "TTF_GetFreeTypeVersion");
    stub_funcs.ptr_TTF_GetHarfBuzzVersion = try_find_sym(sdl2_ttf, "TTF_GetHarfBuzzVersion");
    stub_funcs.ptr_TTF_ByteSwappedUNICODE = try_find_sym(sdl2_ttf, "TTF_ByteSwappedUNICODE");
    stub_funcs.ptr_TTF_Init = try_find_sym(sdl2_ttf, "TTF_Init");
    stub_funcs.ptr_TTF_OpenFont = try_find_sym(sdl2_ttf, "TTF_OpenFont");
    stub_funcs.ptr_TTF_OpenFontIndex = try_find_sym(sdl2_ttf, "TTF_OpenFontIndex");
    stub_funcs.ptr_TTF_OpenFontRW = try_find_sym(sdl2_ttf, "TTF_OpenFontRW");
    stub_funcs.ptr_TTF_OpenFontIndexRW = try_find_sym(sdl2_ttf, "TTF_OpenFontIndexRW");
    stub_funcs.ptr_TTF_OpenFontDPI = try_find_sym(sdl2_ttf, "TTF_OpenFontDPI");
    stub_funcs.ptr_TTF_OpenFontIndexDPI = try_find_sym(sdl2_ttf, "TTF_OpenFontIndexDPI");
    stub_funcs.ptr_TTF_OpenFontDPIRW = try_find_sym(sdl2_ttf, "TTF_OpenFontDPIRW");
    stub_funcs.ptr_TTF_OpenFontIndexDPIRW = try_find_sym(sdl2_ttf, "TTF_OpenFontIndexDPIRW");
    stub_funcs.ptr_TTF_SetFontSize = try_find_sym(sdl2_ttf, "TTF_SetFontSize");
    stub_funcs.ptr_TTF_SetFontSizeDPI = try_find_sym(sdl2_ttf, "TTF_SetFontSizeDPI");
    stub_funcs.ptr_TTF_GetFontStyle = try_find_sym(sdl2_ttf, "TTF_GetFontStyle");
    stub_funcs.ptr_TTF_SetFontStyle = try_find_sym(sdl2_ttf, "TTF_SetFontStyle");
    stub_funcs.ptr_TTF_GetFontOutline = try_find_sym(sdl2_ttf, "TTF_GetFontOutline");
    stub_funcs.ptr_TTF_SetFontOutline = try_find_sym(sdl2_ttf, "TTF_SetFontOutline");
    stub_funcs.ptr_TTF_GetFontHinting = try_find_sym(sdl2_ttf, "TTF_GetFontHinting");
    stub_funcs.ptr_TTF_SetFontHinting = try_find_sym(sdl2_ttf, "TTF_SetFontHinting");
    stub_funcs.ptr_TTF_GetFontWrappedAlign = try_find_sym(sdl2_ttf, "TTF_GetFontWrappedAlign");
    stub_funcs.ptr_TTF_SetFontWrappedAlign = try_find_sym(sdl2_ttf, "TTF_SetFontWrappedAlign");
    stub_funcs.ptr_TTF_FontHeight = try_find_sym(sdl2_ttf, "TTF_FontHeight");
    stub_funcs.ptr_TTF_FontAscent = try_find_sym(sdl2_ttf, "TTF_FontAscent");
    stub_funcs.ptr_TTF_FontDescent = try_find_sym(sdl2_ttf, "TTF_FontDescent");
    stub_funcs.ptr_TTF_FontLineSkip = try_find_sym(sdl2_ttf, "TTF_FontLineSkip");
    stub_funcs.ptr_TTF_SetFontLineSkip = try_find_sym(sdl2_ttf, "TTF_SetFontLineSkip");
    stub_funcs.ptr_TTF_GetFontKerning = try_find_sym(sdl2_ttf, "TTF_GetFontKerning");
    stub_funcs.ptr_TTF_SetFontKerning = try_find_sym(sdl2_ttf, "TTF_SetFontKerning");
    stub_funcs.ptr_TTF_FontFaces = try_find_sym(sdl2_ttf, "TTF_FontFaces");
    stub_funcs.ptr_TTF_FontFaceIsFixedWidth = try_find_sym(sdl2_ttf, "TTF_FontFaceIsFixedWidth");
    stub_funcs.ptr_TTF_FontFaceFamilyName = try_find_sym(sdl2_ttf, "TTF_FontFaceFamilyName");
    stub_funcs.ptr_TTF_FontFaceStyleName = try_find_sym(sdl2_ttf, "TTF_FontFaceStyleName");
    stub_funcs.ptr_TTF_GlyphIsProvided = try_find_sym(sdl2_ttf, "TTF_GlyphIsProvided");
    stub_funcs.ptr_TTF_GlyphIsProvided32 = try_find_sym(sdl2_ttf, "TTF_GlyphIsProvided32");
    stub_funcs.ptr_TTF_GlyphMetrics = try_find_sym(sdl2_ttf, "TTF_GlyphMetrics");
    stub_funcs.ptr_TTF_GlyphMetrics32 = try_find_sym(sdl2_ttf, "TTF_GlyphMetrics32");
    stub_funcs.ptr_TTF_SizeText = try_find_sym(sdl2_ttf, "TTF_SizeText");
    stub_funcs.ptr_TTF_SizeUTF8 = try_find_sym(sdl2_ttf, "TTF_SizeUTF8");
    stub_funcs.ptr_TTF_SizeUNICODE = try_find_sym(sdl2_ttf, "TTF_SizeUNICODE");
    stub_funcs.ptr_TTF_MeasureText = try_find_sym(sdl2_ttf, "TTF_MeasureText");
    stub_funcs.ptr_TTF_MeasureUTF8 = try_find_sym(sdl2_ttf, "TTF_MeasureUTF8");
    stub_funcs.ptr_TTF_MeasureUNICODE = try_find_sym(sdl2_ttf, "TTF_MeasureUNICODE");
    stub_funcs.ptr_TTF_RenderText_Solid = try_find_sym(sdl2_ttf, "TTF_RenderText_Solid");
    stub_funcs.ptr_TTF_RenderUTF8_Solid = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Solid");
    stub_funcs.ptr_TTF_RenderUNICODE_Solid = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Solid");
    stub_funcs.ptr_TTF_RenderText_Solid_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderText_Solid_Wrapped");
    stub_funcs.ptr_TTF_RenderUTF8_Solid_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Solid_Wrapped");
    stub_funcs.ptr_TTF_RenderUNICODE_Solid_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Solid_Wrapped");
    stub_funcs.ptr_TTF_RenderGlyph_Solid = try_find_sym(sdl2_ttf, "TTF_RenderGlyph_Solid");
    stub_funcs.ptr_TTF_RenderGlyph32_Solid = try_find_sym(sdl2_ttf, "TTF_RenderGlyph32_Solid");
    stub_funcs.ptr_TTF_RenderText_Shaded = try_find_sym(sdl2_ttf, "TTF_RenderText_Shaded");
    stub_funcs.ptr_TTF_RenderUTF8_Shaded = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Shaded");
    stub_funcs.ptr_TTF_RenderUNICODE_Shaded = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Shaded");
    stub_funcs.ptr_TTF_RenderText_Shaded_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderText_Shaded_Wrapped");
    stub_funcs.ptr_TTF_RenderUTF8_Shaded_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Shaded_Wrapped");
    stub_funcs.ptr_TTF_RenderUNICODE_Shaded_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Shaded_Wrapped");
    stub_funcs.ptr_TTF_RenderGlyph_Shaded = try_find_sym(sdl2_ttf, "TTF_RenderGlyph_Shaded");
    stub_funcs.ptr_TTF_RenderGlyph32_Shaded = try_find_sym(sdl2_ttf, "TTF_RenderGlyph32_Shaded");
    stub_funcs.ptr_TTF_RenderText_Blended = try_find_sym(sdl2_ttf, "TTF_RenderText_Blended");
    stub_funcs.ptr_TTF_RenderUTF8_Blended = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Blended");
    stub_funcs.ptr_TTF_RenderUNICODE_Blended = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Blended");
    stub_funcs.ptr_TTF_RenderText_Blended_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderText_Blended_Wrapped");
    stub_funcs.ptr_TTF_RenderUTF8_Blended_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_Blended_Wrapped");
    stub_funcs.ptr_TTF_RenderUNICODE_Blended_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_Blended_Wrapped");
    stub_funcs.ptr_TTF_RenderGlyph_Blended = try_find_sym(sdl2_ttf, "TTF_RenderGlyph_Blended");
    stub_funcs.ptr_TTF_RenderGlyph32_Blended = try_find_sym(sdl2_ttf, "TTF_RenderGlyph32_Blended");
    stub_funcs.ptr_TTF_RenderText_LCD = try_find_sym(sdl2_ttf, "TTF_RenderText_LCD");
    stub_funcs.ptr_TTF_RenderUTF8_LCD = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_LCD");
    stub_funcs.ptr_TTF_RenderUNICODE_LCD = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_LCD");
    stub_funcs.ptr_TTF_RenderText_LCD_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderText_LCD_Wrapped");
    stub_funcs.ptr_TTF_RenderUTF8_LCD_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUTF8_LCD_Wrapped");
    stub_funcs.ptr_TTF_RenderUNICODE_LCD_Wrapped = try_find_sym(sdl2_ttf, "TTF_RenderUNICODE_LCD_Wrapped");
    stub_funcs.ptr_TTF_RenderGlyph_LCD = try_find_sym(sdl2_ttf, "TTF_RenderGlyph_LCD");
    stub_funcs.ptr_TTF_RenderGlyph32_LCD = try_find_sym(sdl2_ttf, "TTF_RenderGlyph32_LCD");
    stub_funcs.ptr_TTF_CloseFont = try_find_sym(sdl2_ttf, "TTF_CloseFont");
    stub_funcs.ptr_TTF_Quit = try_find_sym(sdl2_ttf, "TTF_Quit");
    stub_funcs.ptr_TTF_WasInit = try_find_sym(sdl2_ttf, "TTF_WasInit");
    stub_funcs.ptr_TTF_GetFontKerningSize = try_find_sym(sdl2_ttf, "TTF_GetFontKerningSize");
    stub_funcs.ptr_TTF_GetFontKerningSizeGlyphs = try_find_sym(sdl2_ttf, "TTF_GetFontKerningSizeGlyphs");
    stub_funcs.ptr_TTF_GetFontKerningSizeGlyphs32 = try_find_sym(sdl2_ttf, "TTF_GetFontKerningSizeGlyphs32");
    stub_funcs.ptr_TTF_SetFontSDF = try_find_sym(sdl2_ttf, "TTF_SetFontSDF");
    stub_funcs.ptr_TTF_GetFontSDF = try_find_sym(sdl2_ttf, "TTF_GetFontSDF");
    stub_funcs.ptr_TTF_SetDirection = try_find_sym(sdl2_ttf, "TTF_SetDirection");
    stub_funcs.ptr_TTF_SetScript = try_find_sym(sdl2_ttf, "TTF_SetScript");
    stub_funcs.ptr_TTF_SetFontDirection = try_find_sym(sdl2_ttf, "TTF_SetFontDirection");
    stub_funcs.ptr_TTF_SetFontScriptName = try_find_sym(sdl2_ttf, "TTF_SetFontScriptName");
}

const SDL_version * (TTF_Linked_Version)(void) { return stub_funcs.ptr_TTF_Linked_Version(); }
void (TTF_GetFreeTypeVersion)(int * major, int * minor, int * patch) { stub_funcs.ptr_TTF_GetFreeTypeVersion(major, minor, patch); }
void (TTF_GetHarfBuzzVersion)(int * major, int * minor, int * patch) { stub_funcs.ptr_TTF_GetHarfBuzzVersion(major, minor, patch); }
void (TTF_ByteSwappedUNICODE)(SDL_bool swapped) { stub_funcs.ptr_TTF_ByteSwappedUNICODE(swapped); }
int (TTF_Init)(void) { return stub_funcs.ptr_TTF_Init(); }
TTF_Font * (TTF_OpenFont)(const char * file, int ptsize) { return stub_funcs.ptr_TTF_OpenFont(file, ptsize); }
TTF_Font * (TTF_OpenFontIndex)(const char * file, int ptsize, long index) { return stub_funcs.ptr_TTF_OpenFontIndex(file, ptsize, index); }
TTF_Font * (TTF_OpenFontRW)(SDL_RWops * src, int freesrc, int ptsize) { return stub_funcs.ptr_TTF_OpenFontRW(src, freesrc, ptsize); }
TTF_Font * (TTF_OpenFontIndexRW)(SDL_RWops * src, int freesrc, int ptsize, long index) { return stub_funcs.ptr_TTF_OpenFontIndexRW(src, freesrc, ptsize, index); }
TTF_Font * (TTF_OpenFontDPI)(const char * file, int ptsize, unsigned int hdpi, unsigned int vdpi) { return stub_funcs.ptr_TTF_OpenFontDPI(file, ptsize, hdpi, vdpi); }
TTF_Font * (TTF_OpenFontIndexDPI)(const char * file, int ptsize, long index, unsigned int hdpi, unsigned int vdpi) { return stub_funcs.ptr_TTF_OpenFontIndexDPI(file, ptsize, index, hdpi, vdpi); }
TTF_Font * (TTF_OpenFontDPIRW)(SDL_RWops * src, int freesrc, int ptsize, unsigned int hdpi, unsigned int vdpi) { return stub_funcs.ptr_TTF_OpenFontDPIRW(src, freesrc, ptsize, hdpi, vdpi); }
TTF_Font * (TTF_OpenFontIndexDPIRW)(SDL_RWops * src, int freesrc, int ptsize, long index, unsigned int hdpi, unsigned int vdpi) { return stub_funcs.ptr_TTF_OpenFontIndexDPIRW(src, freesrc, ptsize, index, hdpi, vdpi); }
int (TTF_SetFontSize)(TTF_Font * font, int ptsize) { return stub_funcs.ptr_TTF_SetFontSize(font, ptsize); }
int (TTF_SetFontSizeDPI)(TTF_Font * font, int ptsize, unsigned int hdpi, unsigned int vdpi) { return stub_funcs.ptr_TTF_SetFontSizeDPI(font, ptsize, hdpi, vdpi); }
int (TTF_GetFontStyle)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontStyle(font); }
void (TTF_SetFontStyle)(TTF_Font * font, int style) { stub_funcs.ptr_TTF_SetFontStyle(font, style); }
int (TTF_GetFontOutline)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontOutline(font); }
void (TTF_SetFontOutline)(TTF_Font * font, int outline) { stub_funcs.ptr_TTF_SetFontOutline(font, outline); }
int (TTF_GetFontHinting)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontHinting(font); }
void (TTF_SetFontHinting)(TTF_Font * font, int hinting) { stub_funcs.ptr_TTF_SetFontHinting(font, hinting); }
int (TTF_GetFontWrappedAlign)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontWrappedAlign(font); }
void (TTF_SetFontWrappedAlign)(TTF_Font * font, int align) { stub_funcs.ptr_TTF_SetFontWrappedAlign(font, align); }
int (TTF_FontHeight)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontHeight(font); }
int (TTF_FontAscent)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontAscent(font); }
int (TTF_FontDescent)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontDescent(font); }
int (TTF_FontLineSkip)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontLineSkip(font); }
void (TTF_SetFontLineSkip)(TTF_Font * font, int lineskip) { stub_funcs.ptr_TTF_SetFontLineSkip(font, lineskip); }
int (TTF_GetFontKerning)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontKerning(font); }
void (TTF_SetFontKerning)(TTF_Font * font, int allowed) { stub_funcs.ptr_TTF_SetFontKerning(font, allowed); }
long (TTF_FontFaces)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontFaces(font); }
int (TTF_FontFaceIsFixedWidth)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontFaceIsFixedWidth(font); }
const char * (TTF_FontFaceFamilyName)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontFaceFamilyName(font); }
const char * (TTF_FontFaceStyleName)(const TTF_Font * font) { return stub_funcs.ptr_TTF_FontFaceStyleName(font); }
int (TTF_GlyphIsProvided)(TTF_Font * font, Uint16 ch) { return stub_funcs.ptr_TTF_GlyphIsProvided(font, ch); }
int (TTF_GlyphIsProvided32)(TTF_Font * font, Uint32 ch) { return stub_funcs.ptr_TTF_GlyphIsProvided32(font, ch); }
int (TTF_GlyphMetrics)(TTF_Font * font, Uint16 ch, int * minx, int * maxx, int * miny, int * maxy, int * advance) { return stub_funcs.ptr_TTF_GlyphMetrics(font, ch, minx, maxx, miny, maxy, advance); }
int (TTF_GlyphMetrics32)(TTF_Font * font, Uint32 ch, int * minx, int * maxx, int * miny, int * maxy, int * advance) { return stub_funcs.ptr_TTF_GlyphMetrics32(font, ch, minx, maxx, miny, maxy, advance); }
int (TTF_SizeText)(TTF_Font * font, const char * text, int * w, int * h) { return stub_funcs.ptr_TTF_SizeText(font, text, w, h); }
int (TTF_SizeUTF8)(TTF_Font * font, const char * text, int * w, int * h) { return stub_funcs.ptr_TTF_SizeUTF8(font, text, w, h); }
int (TTF_SizeUNICODE)(TTF_Font * font, const Uint16 * text, int * w, int * h) { return stub_funcs.ptr_TTF_SizeUNICODE(font, text, w, h); }
int (TTF_MeasureText)(TTF_Font * font, const char * text, int measure_width, int * extent, int * count) { return stub_funcs.ptr_TTF_MeasureText(font, text, measure_width, extent, count); }
int (TTF_MeasureUTF8)(TTF_Font * font, const char * text, int measure_width, int * extent, int * count) { return stub_funcs.ptr_TTF_MeasureUTF8(font, text, measure_width, extent, count); }
int (TTF_MeasureUNICODE)(TTF_Font * font, const Uint16 * text, int measure_width, int * extent, int * count) { return stub_funcs.ptr_TTF_MeasureUNICODE(font, text, measure_width, extent, count); }
SDL_Surface * (TTF_RenderText_Solid)(TTF_Font * font, const char * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderText_Solid(font, text, fg); }
SDL_Surface * (TTF_RenderUTF8_Solid)(TTF_Font * font, const char * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderUTF8_Solid(font, text, fg); }
SDL_Surface * (TTF_RenderUNICODE_Solid)(TTF_Font * font, const Uint16 * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderUNICODE_Solid(font, text, fg); }
SDL_Surface * (TTF_RenderText_Solid_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderText_Solid_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderUTF8_Solid_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUTF8_Solid_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderUNICODE_Solid_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUNICODE_Solid_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderGlyph_Solid)(TTF_Font * font, Uint16 ch, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderGlyph_Solid(font, ch, fg); }
SDL_Surface * (TTF_RenderGlyph32_Solid)(TTF_Font * font, Uint32 ch, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderGlyph32_Solid(font, ch, fg); }
SDL_Surface * (TTF_RenderText_Shaded)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderText_Shaded(font, text, fg, bg); }
SDL_Surface * (TTF_RenderUTF8_Shaded)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderUTF8_Shaded(font, text, fg, bg); }
SDL_Surface * (TTF_RenderUNICODE_Shaded)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderUNICODE_Shaded(font, text, fg, bg); }
SDL_Surface * (TTF_RenderText_Shaded_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderText_Shaded_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderUTF8_Shaded_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUTF8_Shaded_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderUNICODE_Shaded_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUNICODE_Shaded_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderGlyph_Shaded)(TTF_Font * font, Uint16 ch, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderGlyph_Shaded(font, ch, fg, bg); }
SDL_Surface * (TTF_RenderGlyph32_Shaded)(TTF_Font * font, Uint32 ch, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderGlyph32_Shaded(font, ch, fg, bg); }
SDL_Surface * (TTF_RenderText_Blended)(TTF_Font * font, const char * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderText_Blended(font, text, fg); }
SDL_Surface * (TTF_RenderUTF8_Blended)(TTF_Font * font, const char * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderUTF8_Blended(font, text, fg); }
SDL_Surface * (TTF_RenderUNICODE_Blended)(TTF_Font * font, const Uint16 * text, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderUNICODE_Blended(font, text, fg); }
SDL_Surface * (TTF_RenderText_Blended_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderText_Blended_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderUTF8_Blended_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUTF8_Blended_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderUNICODE_Blended_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUNICODE_Blended_Wrapped(font, text, fg, wrapLength); }
SDL_Surface * (TTF_RenderGlyph_Blended)(TTF_Font * font, Uint16 ch, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderGlyph_Blended(font, ch, fg); }
SDL_Surface * (TTF_RenderGlyph32_Blended)(TTF_Font * font, Uint32 ch, SDL_Color fg) { return stub_funcs.ptr_TTF_RenderGlyph32_Blended(font, ch, fg); }
SDL_Surface * (TTF_RenderText_LCD)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderText_LCD(font, text, fg, bg); }
SDL_Surface * (TTF_RenderUTF8_LCD)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderUTF8_LCD(font, text, fg, bg); }
SDL_Surface * (TTF_RenderUNICODE_LCD)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderUNICODE_LCD(font, text, fg, bg); }
SDL_Surface * (TTF_RenderText_LCD_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderText_LCD_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderUTF8_LCD_Wrapped)(TTF_Font * font, const char * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUTF8_LCD_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderUNICODE_LCD_Wrapped)(TTF_Font * font, const Uint16 * text, SDL_Color fg, SDL_Color bg, Uint32 wrapLength) { return stub_funcs.ptr_TTF_RenderUNICODE_LCD_Wrapped(font, text, fg, bg, wrapLength); }
SDL_Surface * (TTF_RenderGlyph_LCD)(TTF_Font * font, Uint16 ch, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderGlyph_LCD(font, ch, fg, bg); }
SDL_Surface * (TTF_RenderGlyph32_LCD)(TTF_Font * font, Uint32 ch, SDL_Color fg, SDL_Color bg) { return stub_funcs.ptr_TTF_RenderGlyph32_LCD(font, ch, fg, bg); }
void (TTF_CloseFont)(TTF_Font * font) { stub_funcs.ptr_TTF_CloseFont(font); }
void (TTF_Quit)(void) { stub_funcs.ptr_TTF_Quit(); }
int (TTF_WasInit)(void) { return stub_funcs.ptr_TTF_WasInit(); }
int (TTF_GetFontKerningSize)(TTF_Font * font, int prev_index, int index) { return stub_funcs.ptr_TTF_GetFontKerningSize(font, prev_index, index); }
int (TTF_GetFontKerningSizeGlyphs)(TTF_Font * font, Uint16 previous_ch, Uint16 ch) { return stub_funcs.ptr_TTF_GetFontKerningSizeGlyphs(font, previous_ch, ch); }
int (TTF_GetFontKerningSizeGlyphs32)(TTF_Font * font, Uint32 previous_ch, Uint32 ch) { return stub_funcs.ptr_TTF_GetFontKerningSizeGlyphs32(font, previous_ch, ch); }
int (TTF_SetFontSDF)(TTF_Font * font, SDL_bool on_off) { return stub_funcs.ptr_TTF_SetFontSDF(font, on_off); }
SDL_bool (TTF_GetFontSDF)(const TTF_Font * font) { return stub_funcs.ptr_TTF_GetFontSDF(font); }
int (TTF_SetDirection)(int direction) { return stub_funcs.ptr_TTF_SetDirection(direction); }
int (TTF_SetScript)(int script) { return stub_funcs.ptr_TTF_SetScript(script); }
int (TTF_SetFontDirection)(TTF_Font * font, TTF_Direction direction) { return stub_funcs.ptr_TTF_SetFontDirection(font, direction); }
int (TTF_SetFontScriptName)(TTF_Font * font, const char * script) { return stub_funcs.ptr_TTF_SetFontScriptName(font, script); }

void close_sdl2_ttf(void) {
    cosmo_dlclose(sdl2_ttf);
}