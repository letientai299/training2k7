#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
  if (argc == 1) {
    printf("You need me");
    return 0;
  }
  char const* filename = argv[1];
  FILE* file = fopen(filename, "r");
  char line[512];
  while (fgets(line, sizeof(line), file)) {
    if (max < strlen(line)) {
      max = strlen(line);
    }
    line_number++;
  }
  fclose(file);
  max += 3;

  print_horizonal_line(line_number, max);

  printf("%c", '\n');
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

  print_horizonal_line(line_number, max);
  return 0;
}
