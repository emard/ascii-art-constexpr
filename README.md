# ASCII-art C++14 constexpr initializer

Converts ASCII-art shapes into the binary bitmap
at compile-time using C++14 or higher.

It will reuse the content, automatically 
compacting the duplicates.

Intented use is for sprites and fonts drawn in
ASCII-art directly in C++ source.

Input format is similar enough to XPM so that 
real XPM's can be copy-pasted and minimally edited
to compile.

    constexpr const struct charcolors std_colors[] =
    {
      {'W', 0xFFFFFF},
      {'R', 0xFF0000},
      {'G', 0x00FF00},
      {'B', 0x0000FF},
      {' ', 0x000000},
      { 0 , 0}
    };

    constexpr const char *shape_a[] =
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

# Problems

gcc may not yet be ready for prime time.
Only very short examples like "shape.h"
can compile.

Shapes from "galaga.h" will abort with
"out of memory error" after few minutes
compiling on 4GB linux gcc (Debian 6.2.1-5) 6.2.1 20161124
