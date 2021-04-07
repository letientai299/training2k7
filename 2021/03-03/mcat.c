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
  }

  // fclose: close the opening file
  // https://www.cplusplus.com/reference/cstdio/fclose
  fclose(file);
  return 0;
}
