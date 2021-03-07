#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calculate the length to print the line number
int num_of_digits(int line_number)
{
  int number_lenght = 0;
  while (line_number > 0) {
    line_number /= 10;
    number_lenght++;
  }
  return number_lenght;
}

// Print a horizontal line that should be longer than any line in the input
// file, plus the space to display the line number columns.
void print_horizonal_line(int line_number, int max)
{
  int number_lenght = num_of_digits(line_number);
  // prints the space
  for (int i = 0; i < number_lenght; i++) {
    printf(" ");
  }

  // print the plus (+) chracter
  printf("+");

  // print the series of hyphen (-)
  for (int i = 0; i < max; i++) {
    printf("-");
  }

  // end the line with another plus and a new line character
  printf("+\n");
  return;
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

  // TODO: if the file has any line longer than 512, then this code will has a
  // bug.
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

  // print the top line
  print_horizonal_line(line_number, max);

  int number_lenght = num_of_digits(line_number);

  char line_format[10];
  // Prepare the string format to be used for printing the line of text.
  // If the number_lenght is 3, our string format should be "%3d| %s".
  // Note that "%%" means a single "%" in the output string, and here,
  // we're using sprintf to print INTO A STRING, instead of print into stdout.
  sprintf(line_format, "%%%dd| %%s", number_lenght);

  // read the file again, and print the line number column together with the
  // line in file.
  FILE* file1 = fopen(filename, "r");
  while (fgets(line, sizeof(line), file1)) {
    printf(line_format, i, line);
    i++;
  }
  fclose(file1);

  // finally, print the bottom line
  print_horizonal_line(line_number, max);
  return 0;
}
