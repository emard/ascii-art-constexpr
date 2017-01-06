#include <stdint.h>

//#define pixel_t uint8_t
//#define pixel_t uint16_t
#define pixel_t uint32_t

struct charcolors
{
  const char c;
  const pixel_t color;
};

constexpr static const struct charcolors std_colors[] =
{
  {'W', 0xFFFFFF},
  {'R', 0xFF0000},
  {'G', 0x00FF00},
  {'B', 0x0000FF},
  {' ', 0x000000},
  { 0 , 0}
};

// ASCII-art line
struct shape_line
{
  const char *line;
};

constexpr static const char *shape_a[] =
{
"  W",
" W W",
"W   W",
"W   W",
"WRGBW",
"W   W",
"W   W",
NULL
};

constexpr static const char *shape_b[] =
{
"WWWW",
"W   W",
"W   W",
"WRGB",
"W   W",
"W   W",
"WWWW",
NULL
};

constexpr static const char *shape_c[] =
{
" WWWW",
"W",
"W",
" WWWW",
NULL
};

// struct to reference all shapes from one place
struct shape
{
  const struct charcolors *colors; // array of colors to apply for ASCII-art
  const char* const* lines; // array of ASCII-art lines
};

constexpr static const struct shape Shape[] =
{
  [0] = { std_colors, shape_a },
  [1] = { std_colors, shape_b },
  [2] = { std_colors, shape_c },
  [3] = { NULL, NULL }
};
