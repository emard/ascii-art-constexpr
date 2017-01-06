/*
AUTHOR=EMARD
LICENSE=BSD

Compile-time converter from ASCII-art
to bitmaps for sprites and fonts.
Input format is similar to XPM.
Needs C++14 or higher
*/

#include <iostream>
#include "shape.h"
// #include "galaga.h" // out of memory compiling on 4GB machine

// 1-debug, include ASCII-art source in output binary.
// 0-normal, output binary should not contain ASCII-art
#define KEEP_ASCII_ART 0

#define PRINT_INTERMEDIATE_RESULTS 0

// compile-time run strlen function
constexpr size_t ct_strlen(const char *s)
{
  size_t len = 0;
  for(size_t i = 0; s[i] != 0; i++)
    len++;
  return len;
}

// compile-time run function for number of shapes
constexpr size_t ct_shape_count(const struct shape *s)
{
  size_t len = 0;
  for(size_t i = 0; s[i].colors != NULL; i++)
    len++;
  return len;
}

// count lines in shapes
template<int TNS> // N=number of shapes must be known in advance
struct shape_line_count
{
  constexpr shape_line_count(const struct shape *s)
  : lines(), first_line(), lines_total() // constructor will "write" to them
  {
    int t = 0;
    for(int i = 0; i < TNS; i++)
    {
      int j = 0;
      for(; s[i].lines[j] != NULL; j++);
      lines[i] = j;
      first_line[i] = t;
      t += j;
    }
    lines_total = t;
  }
  size_t lines[TNS]; // how many lines each shape has
  size_t first_line[TNS]; // flat index of the first line in each shape
  size_t lines_total; // total number of the lines in all shapes
};

constexpr static auto Shape_line_count = 
  shape_line_count
  <ct_shape_count(Shape)>
  (Shape);

// flatten all lines
template<int TNS, int TNL> // N=number of shapes TNL=total number of lines. both must be known in advance
struct shape_flat_lines
{
  constexpr shape_flat_lines(const struct shape *s)
  : shape(), shline(), line_len(), first_pixel(), total_pixels() // constructor will "write" to them
  {
    int t = 0;
    int total = 0;
    for(int i = 0; i < TNS; i++)
    {
      int j = 0;
      for(; s[i].lines[j] != NULL; j++)
      {
        // const char const *l = &(s[i].lines[j]);
        shape[t] = i;
        shline[t] = j;
        line_len[t] = ct_strlen(s[i].lines[j]);
        first_pixel[t] = total;
        total += line_len[t];
        t++;
      }
    }
    total_pixels = total;
  }
  size_t shape[TNL]; // back-index of the shape to which this line belongs
  size_t shline[TNL]; // line index in the shape
  size_t line_len[TNL]; // pixel count in the line
  size_t first_pixel[TNL]; // first pixel for each line (index to flat pixels)
  size_t total_pixels; // total pixel count in all the lines
};

constexpr static auto Shape_flat_lines = 
  shape_flat_lines
  <ct_shape_count(Shape), Shape_line_count.lines_total>
  (Shape);

// flat pixels: flat_lines converted to flat_pixels
template<int TNL, int TNP> // TNP=total number of pixels,  TNL=total number of lines. both must be known in advance
struct shape_flat_pixels
{
  constexpr shape_flat_pixels(const auto &fl, const struct shape *s)
  : 
#if KEEP_ASCII_ART
  chr(),
#endif
  pixel() // constructor will "write" to them
  {
    int t = 0; // total pixel counter
    for(int i = 0; i < TNL; i++)
    {
      int j = 0;
      const struct charcolors *colors = s[fl.shape[i]].colors;
      const char *shl = s[fl.shape[i]].lines[fl.shline[i]];
      for(; shl[j] != 0; j++) // each ascii-art line null-terminated string
      {
#if KEEP_ASCII_ART
        chr[t] = shl[j];
#endif
        int k = 0;
        for(; colors[k].c != 0 && colors[k].c != shl[j]; k++);
        pixel[t] = colors[k].color;
        t++;
      }
    }
  }
  pixel_t pixel[TNP]; // flat pixel storage
#if KEEP_ASCII_ART
  char chr[TNP];
#endif
};

constexpr static auto Shape_flat_pixels = 
  shape_flat_pixels
  <Shape_line_count.lines_total, Shape_flat_lines.total_pixels>
  (Shape_flat_lines, Shape);

// we have it converted to bitmap now.
// run again thru all the lines,
// and relink them to use previous content
// after that new size will be known.
// make a trimmed copy of the bitmap

// relink lines for space saving
// create new 'first_pixel'
// here it will copy the pixel content
// so no "holes" will be left
// here it will start with max total nomber
// of pixels, later it will be trimmed down
// to actual size

template<int TNL, int TNP> // TNL=total number of lines. TNP=total num of pixels, must be known in advance
struct shape_relink_lines
{
  constexpr shape_relink_lines(const auto &fl, const auto &fp)
  : first_pixel(), pixel(), total_pixels() // constructor will "write" to them
  {
    int i = 0;
    int t = 0; // pixel counter
    for(; i < TNL; i++)
    {
      int len = fl.line_len[i]; // this length we want to find
      // search in flat pixels, if same content
      // is here already...
      int si = fl.first_pixel[i]; // source index
      int k = 0; // index that searches for pattern
      int m = 0; // number of pixels found matching
      for(; k < t-len && m < len; k++); // search until current total counter
        for(m = 0; m < len && fp.pixel[si+m] == pixel[k+m]; m++); // travel each char and count matching
      if(m == len)
        first_pixel[i] = k; // found previous content
      else
      { // not found, need to copy from source
        first_pixel[i] = t;
        for(int j = 0; j < len; j++)  // currently just copy everything
          pixel[t++] = fp.pixel[si+j];
      }
    }
    total_pixels = t;
  }
  size_t first_pixel[TNL]; // first pixel for each line (index to flat pixels)
  pixel_t pixel[TNP]; // max possible size for now
  size_t total_pixels; // total pixel count in all the lines
};

constexpr static auto Shape_relink_lines =
  shape_relink_lines
  <Shape_line_count.lines_total, Shape_flat_lines.total_pixels>
  (Shape_flat_lines, Shape_flat_pixels);

// final storage: clean-rewrite of shapes, lines and pixels
// Shapes can be fully drawn using this struct only.
template<int TNS, int TNL, int TNP> // TNL=total number of lines. TNP=total num of pixels, must be known in advance
struct shape_compact
{
  constexpr shape_compact(const struct shape *s, const auto &lc, const auto &fl, const auto &rl)
  : first_line(), lines(), first_pixel(), line_len(), pixel() // constructor will "write" to them
  {
    // copy shape data
    for(int k = 0; k < TNS; k++)
    {
      first_line[k] = lc.first_line[k];
      lines[k] = lc.lines[k];
    }
    // copy line data
    for(int j = 0; j < TNL; j++)
    {
      first_pixel[j] = rl.first_pixel[j];
      line_len[j] = fl.line_len[j];
    }
    // copy pixel data
    for(int i = 0; i < TNP; i++)
      pixel[i] = rl.pixel[i];
  }
  // shapes
  size_t total_shapes = TNS; // total number of shapes
  size_t first_line[TNS]; // first line of the shape
  size_t lines[TNS]; // number of lines shape has
  // lines
  size_t total_lines = TNL; // usually not needed, total line count in all shapes
  size_t first_pixel[TNL]; // first pixel for each line (index to flat pixels)
  size_t line_len[TNL]; // pixel count in the line
  // pixels
  size_t total_pixels = TNP; // usually not needed, total pixel count in all shapes
  pixel_t pixel[TNP]; // max possible size for now
};

constexpr static auto Shape_compact = 
  shape_compact
  <ct_shape_count(Shape), Shape_line_count.lines_total, Shape_relink_lines.total_pixels>
  (Shape, Shape_line_count, Shape_flat_lines, Shape_relink_lines);

// human readable display: reverse search pixel_t
// to print ascii art
char pixel2char(const struct charcolors *colors, const pixel_t p)
{
  int i;
  for(i = 0; colors[i].c != 0; i++)
    if(colors[i].color == p)
      return colors[i].c;
  return '?';
}

int main()
{

#if PRINT_INTERMEDIATE_RESULTS

#if 1
  printf("shape count sizeof=%d\n", sizeof(Shape_line_count));
  for(int i = 0; i < ct_shape_count(Shape); i++)
  {
    printf("shape=%d line_count=%d first_line=%d\n", i, Shape_line_count.lines[i], Shape_line_count.first_line[i]);
  }
  printf("total lines %d\n", Shape_line_count.lines_total);
#endif

#if 1
  printf("flat lines sizeof=%d\n", sizeof(Shape_line_count));
  for(int i = 0; i < Shape_line_count.lines_total; i++)
  {
    printf("line_num=%4d len=%4d first=%5d\n",
      i,
      Shape_flat_lines.line_len[i],
      Shape_flat_lines.first_pixel[i]
      );
  }
#endif

#if 1
  printf("total_pixels=%d pixels\n", Shape_flat_lines.total_pixels);
  printf("flat pixels sizeof=%d\n", sizeof(Shape_flat_lines));
  for(int i = 0; i < Shape_flat_lines.total_pixels; i++)
  {
#if KEEP_ASCII_ART
    printf("%5d %c -> 0x%06X\n", i, Shape_flat_pixels.chr[i], Shape_flat_pixels.pixel[i]);
#else
    printf("%5d %c -> 0x%06X\n", i, pixel2char(std_colors, Shape_flat_pixels.pixel[i]), Shape_flat_pixels.pixel[i]);
#endif
  }
#endif

  printf("lines compaction\n");
  for(int i = 0; i < Shape_line_count.lines_total; i++)
  {
    printf("line %4d \"", i);
    int first_pixel = Shape_relink_lines.first_pixel[i];
    for(int j = 0; j < Shape_flat_lines.line_len[i]; j++)
    {
      printf("%c", pixel2char(std_colors, Shape_relink_lines.pixel[first_pixel+j]));
    }
    printf("\"\n");
  }
  printf("reduced total pixels %d\n", Shape_relink_lines.total_pixels);
#endif // PRINT_INTERMEDIATE_RESULTS
  
  printf("compact output sizeof=%d\n", sizeof(Shape_compact));
  for(int i = 0; i < Shape_compact.total_shapes; i++)
  {
    int first_line = Shape_compact.first_line[i];
    printf("shape %d lines %d (first line %d)\n", i, Shape_compact.lines[i], first_line);
    for(int j = 0; j < Shape_compact.lines[i]; j++)
    {
      int line_len = Shape_compact.line_len[Shape_compact.first_line[i]+j];
      int first_pixel = Shape_compact.first_pixel[Shape_compact.first_line[i]+j];
      // printf("line %5d (pixels %5d) ", j, line_len);
      printf("\"");
      for(int k = 0; k < line_len; k++)
        printf("%c", pixel2char(std_colors, Shape_compact.pixel[first_pixel+k]));
      printf("\"\n");
    }
  }
  printf("reduced total pixels %d\n", Shape_compact.total_pixels);
  
}
