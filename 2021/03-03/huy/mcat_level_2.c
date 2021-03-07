#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Row(int LineNumber, int max)
{
  if (LineNumber > 99) {
    printf("%s", "   ");
    for (int i = 0; i <= max; ++i) {
      if (i == 0 || i == max) {
        printf("%c", '+');
      } else {
        printf("%c", '-');
      }
    }
  } else {
    if (LineNumber > 9) {
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
  int i = 1, LineNumber = 0, max = 0, column;
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
    LineNumber++;
  }
  fclose(file);
  max += 3;
  Row(LineNumber, max);
  printf("%c", '\n');
  FILE* file1 = fopen(filename, "r");
  if (LineNumber < 1000 && LineNumber > 99) {
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
    if (LineNumber < 100 && LineNumber > 9) {
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
      if (LineNumber < 10) {
        while (fgets(line, sizeof(line), file1)) {
          printf("%d| %s", i, line);
        }
      }
    }
  }
  fclose(file1);
  Row(LineNumber, max);
  return 0;
}
