#include <stdio.h>
#include <stdlib.h>

// argc is length cua array argv
// argv is an array, that:
// - starts with "name" of the program
// - following are the rest of the arguments
int main(int argc, char* argv[])
{
  // if we only have 1 argument,
  // then print a message to ask user for file name.
  if (argc == 1) {
    printf("Need file name");
    return 0;
  }

  // note that argv[0] is the program name.
  char const* filename = argv[1];

  // fopen: to open a file given its name
  // https://www.cplusplus.com/reference/cstdio/fopen
  FILE* file = fopen(filename, "r");
  char line[512];

  // fgets: to read a line in a file
  // https://www.cplusplus.com/reference/cstdio/fgets
  int lineNum = 1;
  while (fgets(line, sizeof(line), file)) {
    printf("%d| %s", lineNum, line);
    lineNum++;
    break;
  }

  // fclose: close the opening file
  // https://www.cplusplus.com/reference/cstdio/fclose
  fclose(file);
  return 0;
}

byte[8] byteArray;
char[8] charArray;
short[4] shorts; //  1 short = 2 bytes
int[4] ints;     //  1 int = 4 bytes

1 word = 4 bytes = 1 int = 1 float = 1 size_t = 1 unsigned int = ...

8 * 5 + 3 = 43
43 / 8 = 5
43 % 8 = 3

byteArray=8
byteArray[i] -> doc data cua phan tu thu i ben trong array
*byteArray = byteArray[0]
byteArray[3]

ints=36
*ints = ints[0]
ints[2]
*(ints+sizeof(int))   = ints[1]
*(ints+sizeof(int)*2) = ints[2]
*(ints+sizeof(int)*3) = ints[3]

*(36 + 4)
*(40)

Memory Address
Pointer: con tro tro den 1 vung nho (memory area)
Dereference
Pointer arithmetic

Row\Column:  0|     1|     2|     3|     4|     5|     6|     7|
 0     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 1     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 2     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 3     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 4     | Byte | Byte | Byte | Byte |*ints*| Byte | Byte | Byte |
 5     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 6     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 7     | Byte |*Byte*| Byte | Byte | Byte | Byte | Byte | Byte |
 8     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
 9     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
10     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |
11     | Byte | Byte | Byte | Byte | Byte | Byte | Byte | Byte |





