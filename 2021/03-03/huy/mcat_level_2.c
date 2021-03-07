#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Print a horizontal line that should be longer than any line in the input
// file, plus the space to display the line number columns.
void print_horizonal_line(int line_number, int max)
{
  if (line_number > 99) {
    printf("%s", "   ");
    for (int i = 0; i <= max; ++i) {
      if (i == 0 || i == max) {
        printf("%c", '+');
      } else {
        printf("%c", '-');
      }
    }
  } else {
    if (line_number > 9) {
      printf("%s", "  ");
      for (int i = 0; i <= max; ++i) {
        if (i == 0 || i == max) {
          printf("%c", '+');
        } else {
          printf("%c", '-');
        }
      }
    } else {
      printf("%s", " ");
      for (int i = 0; i <= max; ++i) {
        if (i == 0 || i == max) {
          printf("%c", '+');
        } else {
          printf("%c", '-');
        }
      }
    }
  }
}

int main(int argc, char* argv[])
{
  int i = 1, line_number = 0, max = 0, column;

  // if we don't have enough argument (missing file name), then exit the
  // program.
  if (argc == 1) {
    printf("You need me");
    return 0;
  }

  char const* filename = argv[1];
  FILE* file = fopen(filename, "r");
  char line[512];
  while (fgets(line, sizeof(line), file)) {
    if (max < strlen(line)) {
      // keep track of the length of longest line in the file,
      // so that we can calculate the length of horizontal lines.
      max = strlen(line);
    }
    // count how many line in the input file, but don't print anything yet.
    line_number++;
  }
  fclose(file);

  // TODO: this is a bug, we don't really know how many characters we need for
  // the left column yet. 3 will only works for file with less than 100 lines.
  max += 3;

  // print the top line
  print_horizonal_line(line_number, max);
  printf("%c", '\n');

  // read the file again, and print the line number column together with the
  // line in file.
  FILE* file1 = fopen(filename, "r");
  if (line_number < 1000 && line_number > 99) {
    while (fgets(line, sizeof(line), file1)) {
      if (i > 99) {
        printf("%d| %s", i, line);
        i++;
      }
      if (i < 100 && i > 9) {
        printf(" %d| %s", i, line);
        i++;
      }
      if (i < 10) {
        printf("  %d| %s", i, line);
        i++;
      }
    }
  } else {
    if (line_number < 100 && line_number > 9) {
      while (fgets(line, sizeof(line), file1)) {
        if (i >= 10) {
          printf("%d| %s", i, line);
          i++;
        }
        if (i <= 9) {
          printf(" %d| %s", i, line);
          i++;
        }
      }
    } else {
      if (line_number < 10) {
        while (fgets(line, sizeof(line), file1)) {
          printf("%d| %s", i, line);
        }
      }
    }
  }
  fclose(file1);

  // finally, print the bottom line
  print_horizonal_line(line_number, max);
  return 0;
}
