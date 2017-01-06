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

gcc may not yet be ready for prime time.
Only very short examples like "shapes.h"
can compile.

Shapes from "galaga.h" will abort with
"out of memory error" after few minutes
compiling on 4GB linux gcc (Debian 6.2.1-5) 6.2.1 20161124
