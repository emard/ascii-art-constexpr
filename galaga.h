/* f32c Galaga
 * AUTHOR=EMARD
 * LICENSE=BSD
 * Artwork, shapes
 */

//#define pixel_t uint8_t
//#define pixel_t uint16_t
#define pixel_t uint32_t

struct charcolors
{
  const char c;
  const pixel_t color;
};

#define RGB2PIXEL(x) (x)

// ascii-art of the shapes
constexpr static const struct charcolors std_colors[] = 
{  //               RRGGBB
  {'O', RGB2PIXEL(0xFF7F00)}, // orange
  {'R', RGB2PIXEL(0xFF0000)}, // red
  {'Y', RGB2PIXEL(0xFFFF00)}, // yellow
  {'C', RGB2PIXEL(0x00FFFF)}, // cyan
  {'G', RGB2PIXEL(0x00FF00)}, // green
  {'B', RGB2PIXEL(0x0000FF)}, // blue
  {'V', RGB2PIXEL(0xFF00FF)}, // violett
  {'W', RGB2PIXEL(0xFFFFFF)}, // white
  {' ', RGB2PIXEL(0)}, // transparent
  {  0, 0}
};

constexpr static const char *shape_alien1u[] =
{
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
NULL
};

constexpr static const char *shape_alien1d[] =
{
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
"WWWWBBBBWWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
NULL
};

constexpr static const char *shape_alien1l[] =
{
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"WWWWBBBB",
"WWWWBBBB",
"WWWWBBBB",
"WWWWBBBB",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
NULL
};

constexpr static const char *shape_alien1r[] =
{
"WWWW",
"WWWW",
"WWWW",
"WWWW",
"BBBBWWWW",
"BBBBWWWW",
"BBBBWWWW",
"BBBBWWWW",
"WWWW",
"WWWW",
"WWWW",
"WWWW",
NULL
};

constexpr static const char *shape_alien2u[] =
{
"    CCCC",
"    CCCC",
"    CCCC",
"    CCCC",
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
NULL
};

constexpr static const char *shape_alien2d[] =
{
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
"YYYYRRRRYYYY",
"    CCCC",
"    CCCC",
"    CCCC",
"    CCCC",
NULL
};

constexpr static const char *shape_alien2l[] =
{
"    YYYY",
"    YYYY",
"    YYYY",
"    YYYY",
"CCCCRRRR",
"CCCCRRRR",
"CCCCRRRR",
"CCCCRRRR",
"    YYYY",
"    YYYY",
"    YYYY",
"    YYYY",
NULL
};

constexpr static const char *shape_alien2r[] =
{
"YYYY",
"YYYY",
"YYYY",
"YYYY",
"RRRRCCCC",
"RRRRCCCC",
"RRRRCCCC",
"RRRRCCCC",
"YYYY",
"YYYY",
"YYYY",
"YYYY",
NULL
};

constexpr static const char *shape_alien3u[] =
{
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    VVVV    VVVV",
"    VVVV    VVVV",
"    VVVV    VVVV",
"    VVVV    VVVV",
"WWWW            WWWW",
"WWWW            WWWW",
"WWWW            WWWW",
"WWWW            WWWW",
NULL
};

constexpr static const char *shape_alien3d[] =
{
"WWWW            WWWW",
"WWWW            WWWW",
"WWWW            WWWW",
"WWWW            WWWW",
"    VVVV    VVVV",
"    VVVV    VVVV",
"    VVVV    VVVV",
"    VVVV    VVVV",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
NULL
};

constexpr static const char *shape_alien3l[] =
{
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    VVVV",
"    VVVV",
"    VVVV",
"    VVVV",
"WWWW",
"WWWW",
"WWWW",
"WWWW",
"    VVVV",
"    VVVV",
"    VVVV",
"    VVVV",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
NULL
};

constexpr static const char *shape_alien3r[] =
{
"WWWW",
"WWWW",
"WWWW",
"WWWW",
"    VVVV",
"    VVVV",
"    VVVV",
"    VVVV",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    VVVV",
"    VVVV",
"    VVVV",
"    VVVV",
"WWWW",
"WWWW",
"WWWW",
"WWWW",
NULL
};

constexpr static const char *shape_alien4u[] =
{
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"VVVV            VVVV",
"VVVV            VVVV",
"VVVV            VVVV",
"VVVV            VVVV",
NULL
};

constexpr static const char *shape_alien4d[] =
{
"VVVV            VVVV",
"VVVV            VVVV",
"VVVV            VVVV",
"VVVV            VVVV",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"    OOOOWWWWOOOO",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
NULL
};

constexpr static const char *shape_alien4l[] =
{
"        VVVV",
"        VVVV",
"        VVVV",
"        VVVV",
"    OOOO",
"    OOOO",
"    OOOO",
"    OOOO",
"WWWWWWWW",
"WWWWWWWW",
"WWWWWWWW",
"WWWWWWWW",
"    OOOO",
"    OOOO",
"    OOOO",
"    OOOO",
"        VVVV",
"        VVVV",
"        VVVV",
"        VVVV",
NULL
};

constexpr static const char *shape_alien4r[] =
{
"VVVV",
"VVVV",
"VVVV",
"VVVV",
"    OOOO",
"    OOOO",
"    OOOO",
"    OOOO",
"    WWWWWWWW",
"    WWWWWWWW",
"    WWWWWWWW",
"    WWWWWWWW",
"    OOOO",
"    OOOO",
"    OOOO",
"    OOOO",
"VVVV",
"VVVV",
"VVVV",
"VVVV",
NULL
};

constexpr static const char *shape_alien5u[] =
{
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
NULL
};

constexpr static const char *shape_alien5d[] =
{
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"GGGG    WWWW    GGGG",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"    OOOOYYYYOOOO",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
NULL
};

constexpr static const char *shape_alien5l[] =
{
"        GGGG",
"        GGGG",
"        GGGG",
"        GGGG",
"    OOOO        WWWW",
"    OOOO        WWWW",
"    OOOO        WWWW",
"    OOOO        WWWW",
"WWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWW",
"    OOOO        WWWW",
"    OOOO        WWWW",
"    OOOO        WWWW",
"    OOOO        WWWW",
"        GGGG",
"        GGGG",
"        GGGG",
"        GGGG",
NULL
};

constexpr static const char *shape_alien5r[] =
{
"        GGGG",
"        GGGG",
"        GGGG",
"        GGGG",
"WWWW        OOOO",
"WWWW        OOOO",
"WWWW        OOOO",
"WWWW        OOOO",
"    WWWWWWWWWWWWWWWW",
"    WWWWWWWWWWWWWWWW",
"    WWWWWWWWWWWWWWWW",
"    WWWWWWWWWWWWWWWW",
"WWWW        OOOO",
"WWWW        OOOO",
"WWWW        OOOO",
"WWWW        OOOO",
"        GGGG",
"        GGGG",
"        GGGG",
"        GGGG",
NULL
};

constexpr static const char *shape_ship1u[] =
{
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"WWWW    WWWW",
"WWWW    WWWW",
"WWWW    WWWW",
"WWWW    WWWW",
NULL
};

constexpr static const char *shape_ship1d[] =
{
"WWWW    WWWW",
"WWWW    WWWW",
"WWWW    WWWW",
"WWWW    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
"    WWWW",
NULL
};

constexpr static const char *shape_ship1l[] =
{
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"WWWWWWWW",
"WWWWWWWW",
"WWWWWWWW",
"WWWWWWWW",
"        WWWW",
"        WWWW",
"        WWWW",
"        WWWW",
NULL
};

constexpr static const char *shape_ship1r[] =
{
"WWWW",
"WWWW",
"WWWW",
"WWWW",
"    WWWWWWWW",
"    WWWWWWWW",
"    WWWWWWWW",
"    WWWWWWWW",
"WWWW",
"WWWW",
"WWWW",
"WWWW",
NULL
};

constexpr static const char *shape_ship2u[] =
{
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"    WWWW    WWWW",
"WWWW    WWWW    WWWW",
"WWWW    WWWW    WWWW",
"WWWW    WWWW    WWWW",
"WWWW    WWWW    WWWW",
NULL
};

constexpr static const char *shape_alien_suction1[] =
{
"GGGG",
"GGGG",
"GGGG",
"GGGG",
NULL
};

constexpr static const char *shape_alien_suction3[] =
{
"GGGGGGGGGGGG",
"GGGGGGGGGGGG",
"GGGGGGGGGGGG",
"GGGGGGGGGGGG",
NULL
};

constexpr static const char *shape_alien_suction5[] =
{
"GGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGG",
NULL
};

constexpr static const char *shape_alien_suction7[] =
{
"GGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGG",
NULL
};

constexpr static const char *shape_alien_suction9[] =
{
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
NULL
};

constexpr static const char *shape_alien_suction11[] =
{
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
"GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG",
NULL
};

constexpr static const char *shape_bomb[] =
{
"WWWW",
"WWWW",
"WWWW",
"WWWW",
NULL
};

constexpr static const char *shape_missile0[] =
{
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
NULL
};

constexpr static const char *shape_missile1[] =
{
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
NULL
};

constexpr static const char *shape_missile2[] =
{
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
NULL
};

constexpr static const char *shape_missile3[] =
{
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
" WW ",
"WW  ",
" WW ",
"  WW",
NULL
};

constexpr static const char *shape_block_red[] =
{
"RRRR",
"RRRR",
"RRRR",
"RRRR",
NULL
};

constexpr static const char *shape_block_yellow[] =
{
"YYYY",
"YYYY",
"YYYY",
"YYYY",
NULL
};

constexpr static const char *shape_block_orange[] =
{
"OOOO",
"OOOO",
"OOOO",
"OOOO",
NULL
};

constexpr static const char *shape_block_green[] =
{
"GGGG",
"GGGG",
"GGGG",
"GGGG",
NULL
};

constexpr static const char *shape_block_cyan[] =
{
"CCCC",
"CCCC",
"CCCC",
"CCCC",
NULL
};

constexpr static const char *shape_block_blue[] =
{
"BBBB",
"BBBB",
"BBBB",
"BBBB",
NULL
};

constexpr static const char *shape_block_violett[] =
{
"VVVV",
"VVVV",
"VVVV",
"VVVV",
NULL
};

constexpr static const char *shape_block_white[] =
{
"WWWW",
"WWWW",
"WWWW",
"WWWW",
NULL
};

constexpr static const char *shape_fireball0[] =
{
"         WYWWWW                  Y                              ",
"       WWWWWWWWWWY      Y               Y     YWWWWWY      Y    ",
"     WWWWWWWWWWWWWWW         YYWWWWY        WWWWWWWWWWY         ",
"    WWYWWWWWWWWWWWWWWY     WWWWWWWWWWY  WWYWWWWWWWWWWWWWY       ",
"   WWWWWWWWWWWWWWWWWWWW   YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY     ",
"  WYWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"  WWWYWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY   ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY   ",
"  WWWYWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"   YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY   ",
"    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"     WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY     ",
"     WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY       ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY      Y ",
"  Y    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    Y   ",
"        WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW        ",
"         WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY        ",
"          YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW         ",
"           WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW         ",
" w    Y     WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      Y   ",
"             YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY          ",
"       W       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  Y      ",
"   Y        W   YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW         ",
"               WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY        ",
"          Y   W WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      ",
"               WWYWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY     ",
"              YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"             YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY   ",
"           YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY  ",
" Y       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"        WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY ",
"      YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"     WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY",
"    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"   YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
" YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWYWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      YWWWWWWWWWWWWWWWWWWWWWWY ",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWy  Y    WWWWWWWWWWWWWWWWWWWWWW  ",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW       WWWWWWWWWWWWWWWWWWWWWY  ",
"YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   Y    WWWWWWWWWWWWWWWWWWWWW  ",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY         YWWWWWWWWWWWWWWWWWWW  ",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW           WWWWWWWWWWWWWWWWWWY  ",
"YWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWY   Y        WWWWWWWWWWWWWWWWY   ",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW             YWWWWWWWWWWWWWWWW   ",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWW               WWWWWWWWWWWWWWY    ",
"  YWWWWWWWWWWWWWWWWWWWWWWWWWY         Y       YWWWWWWWWWWWW     ",
"   WWWWWWWWWWWWWWWWWWWWWYWY                Y   WWWWWWWWWWW    Y ",
"Y   YWWWWWWWWWWWWWWWY                            YWWWWWY        ",
"      YWWWWWYWWWWYY             Y                               ",
NULL
};

constexpr static const char *shape_fireball1[] =
{
"      O                            O      WWWWWWW        ",
" O         WWWWWWW        O             WWWWWWWWWWW   O  ",
"         WWWWWWWWWWW           O       WWWWWWWWWWWWW     ",
"        WWWWWWWWWWWWW   O             WWWWWWWWWWWWWWW    ",
"      WWWWWWWWWWWWWWWW       WWWWWWW WWWWWWWWWWWWWWWWW   ",
"  O  WWWWWWWWWWWWWWWWWW    WWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"    WWWWWWWWWWWWWWWWWWW   WWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"   WWWWWWWWWWWWWWWWWWWWW WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"     WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"        WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"   O        WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   O",
"          WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      ",
"     O   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW        ",
"        WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   O    ",
"       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW         ",
"       WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW        ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW     O  ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      ",
" O    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW     ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW    ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW   ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"   W   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"      WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"    WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  ",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW ",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWO    WWWWWWWWWWWWWWWWWWW",
"WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW  O  WWWWWWWWWWWWWWWWWWW",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      WWWWWWWWWWWWWWWWW ",
" WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW      WWWWWWWWWWWWWWWWW ",
"  WWWWWWWWWWWWWWWWWWWWWWWWWWWWWW        WWWWWWWWWWWWWWW  ",
"   WWWWWWWWWWWWWWWWWWWWWWWWWWWWW     O   WWWWWWWWWWWWW   ",
"    WWWWWWWWWWW WWWWWWWWWWWWWWW           WWWWWWWWWWW    ",
"      WWWWWWW    WWWWWWWWWWWWW              WWWWWWW    O ",
"  O            O  WWWWWWWWWWW     O                      ",
"       O            WWWWWWW                       O      ",
NULL
};

constexpr static const char *shape_fireball2[] =
{
"                                       R     OOOOOOOOO        ",
"     R                                     OOOOOOOOOOOOO   R  ",
"                 R                       OOOOOOOOOOOOOOOO     ",
"                                 R     OOOOOOOOOOOOOOOOOOO    ",
"      OOOOOOO        OOOOOOO          OOOOOOOOOOOOOOOOOOOO    ",
"    OOOOOOOOOOO    OOOOOOOOOOOOO     OOOOOOOOOOOOOOOOOOOOOO   ",
"   OOOOOOOOOOOOO  OOOOOOOOOOOOOOOO  OOOOOOOOOOOOOOOOOOOOOOO   ",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOOOOOOOOOOOOOOOOOO   ",
" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   ",
" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   ",
"OOOOOOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   ",
"OOOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   ",
"OOOOOOOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOO    OOOOOOOOOO    ",
"OOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOO      OOOOOOOOOOO    ",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    OOOOOOOOOOO R  ",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    ",
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    ",
" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    ",
" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   R",
"  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    ",
"   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     ",
"    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     ",
"      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   R  ",
"  R      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOOOOOOOOOOO    ",
"         OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    OOOOOOOOOOOOOOOO   ",
"      R  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOOOOOOOOOOOOO  ",
"         OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOOOOOOOOOOOOOO ",
"          OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ",
"   R      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"           OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"      R    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"            OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"             OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"R          OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"          OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"         OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ",
"    R   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  ",
"       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  ",
"     R OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO ",
"       OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"       OOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"       OOOOOOOOOOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"       OOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"  R    OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOOOOO",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOOO",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOOO",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"    R   OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOOOOOOOOOOOOOOOO",
"        OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   OOOOOOOOOOOOOOOOOOO",
"  R      OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO      OOOOOOOOOOOOOOO ",
"         OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   R   OOOOOOOOOOOOO  ",
"          OOOOOOOOOOOOOOOOOOOOOOOOOOOOO         OOOOOOOOOOO   ",
"      R    OOOOOOOOOOOOOOOOOOOOOOOOOOOO   R       OOOOOOO   R ",
"            OOOOOOOOOOOOOOOOOOOOOOOOOO                        ",
"              OOOOOOO   OOOOOOOOOOOOO          R   R          ",
"    R      R             OOOOOOOOOOO      R                 R ",
"                           OOOOOOO                            ",
NULL
};

constexpr static const char *shape_fireball3[] =
{
"R               R       RRRRRRR   R    R ",
"      RRRRRRR         RRRRRRRRRRR        ",
"    RRRRRRRRRRR   R  RRRRRRRRRRRRR       ",
"   RRRRRRRRRRRRR    RRRRRRRRRRRRRRR    R ",
"  RRRRRRRRRRRRRRR  RRRRRRRRRRRRRRRRR     ",
" RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR     ",
" RRRRRRRRRRRRRRRRRRRRRRR  RRRRRRRRRRR    ",
"RRRRRRRRRRRRRRRRRRRRRRR     RRRRRRRRR    ",
"RRRRRRRRRRRRRRRRRRRRRRRR  RRRRRRRRRRR R  ",
"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR    ",
"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR    ",
"RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR    ",
"RRRRRR   RRRRRRRRRRRRRRRRRRRRRRRRRRRR    ",
"RRRRRRR   RRRRRRRRRRRRRRRRRRRRRRRRRR   R ",
" RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR     ",
" RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR  R   ",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR      ",
"   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR     R",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR R    ",
" R   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR      ",
"     RRRRRRRRRRRRRRRRRRRRRRRRRRRRR       ",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR    R  ",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR      ",
"R   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR    ",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR   ",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR  ",
"    RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR ",
"   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR ",
"   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRR   RRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRR  RRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR",
"  RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR ",
"   RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR ",
"   RRRRRRRRRRRRRRRRRRR RRRRRRRRRRRRRRRR  ",
"    RRRRRRRRRRRRRRRRR    RRRRRRRRRRRRR  R",
" R   RRRRRRRRRRRRRRR      RRRRRRRRRRR    ",
"      RRRRRRRRRRRR     R    RRRRRRR      ",
"    R   RRRRRRR    R                R   R",
NULL
};

enum
{
  SH_ALIEN1R=0,  SH_ALIEN1U, SH_ALIEN1L, SH_ALIEN1D,
  SH_ALIEN2R=4,  SH_ALIEN2U, SH_ALIEN2L, SH_ALIEN2D,
  SH_ALIEN3R=8,  SH_ALIEN3U, SH_ALIEN3L, SH_ALIEN3D,
  SH_ALIEN4R=12, SH_ALIEN4U, SH_ALIEN4L, SH_ALIEN4D,
  SH_ALIEN5R=16, SH_ALIEN5U, SH_ALIEN5L, SH_ALIEN5D,
  SH_SHIP1R=20, SH_SHIP1U, SH_SHIP1L, SH_SHIP1D, SH_SHIP2,
  SH_ALIEN_SUCTION1, SH_ALIEN_SUCTION3, SH_ALIEN_SUCTION5, SH_ALIEN_SUCTION7, SH_ALIEN_SUCTION9, SH_ALIEN_SUCTION11,
  SH_MISSILE0, SH_MISSILE1, SH_MISSILE2, SH_MISSILE3,
  SH_BLOCK_RED, SH_BLOCK_ORANGE, SH_BLOCK_YELLOW, SH_BLOCK_GREEN, SH_BLOCK_CYAN, SH_BLOCK_BLUE, SH_BLOCK_VIOLETT, SH_BLOCK_WHITE,
  SH_FIREBALL0, SH_FIREBALL1, SH_FIREBALL2, SH_FIREBALL3,
  SH_PLACEHOLDER,
};

// struct to reference all shapes from one place
struct shape
{
  const struct charcolors *colors; // array of colors to apply for ASCII-art
  const char* const* lines; // array of ASCII-art lines
};

constexpr static const struct shape Shape[] =
{
  { std_colors, shape_alien1r },
  { std_colors, shape_alien1u },
  { std_colors, shape_alien1l },
  { std_colors, shape_alien1d },

  { std_colors, shape_alien2r },
  { std_colors, shape_alien2u },
  { std_colors, shape_alien2l },
  { std_colors, shape_alien2d },

  { std_colors, shape_alien3r },
  { std_colors, shape_alien3u },
  { std_colors, shape_alien3l },
  { std_colors, shape_alien3d },

  { std_colors, shape_alien4r },
  { std_colors, shape_alien4u },
  { std_colors, shape_alien4l },
  { std_colors, shape_alien4d },

  { std_colors, shape_alien5r },
  { std_colors, shape_alien5u },
  { std_colors, shape_alien5l },
  { std_colors, shape_alien5d },

  { std_colors, shape_ship1r },
  { std_colors, shape_ship1u },
  { std_colors, shape_ship1l },
  { std_colors, shape_ship1d },
  { std_colors, shape_ship2u },

  { std_colors, shape_alien_suction1 },
  { std_colors, shape_alien_suction3 },
  { std_colors, shape_alien_suction5 },
  { std_colors, shape_alien_suction7 },
  { std_colors, shape_alien_suction9 },
  { std_colors, shape_alien_suction11 },

  { std_colors, shape_missile0 },
  { std_colors, shape_missile1 },
  { std_colors, shape_missile2 },
  { std_colors, shape_missile3 },

  { std_colors, shape_block_red },
  { std_colors, shape_block_orange },
  { std_colors, shape_block_yellow },
  { std_colors, shape_block_green },
  { std_colors, shape_block_cyan },
  { std_colors, shape_block_blue },
  { std_colors, shape_block_violett },
  { std_colors, shape_block_white },

  { std_colors, shape_fireball0 },
  { std_colors, shape_fireball1 },
  { std_colors, shape_fireball2 },
  { std_colors, shape_fireball3 },

  {NULL,NULL},
};
