#include "../lib/debug.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int lower_bound = 0;
int upper_bound = 1000;
int size_of_array = 10;

const char* help_text = // force a new line when auto format code
    "Generate a text file contains numbers for sorting\n"
    "\n"
    "The created file name will look like test_<num>.txt,\n"
    "where <num> is the size of generated array. For example:\n"
    "test_10.txt will contains 10 integers. Use the flags below\n"
    "to customize the result.\n"
    "\n"
    "     -h  show this help\n"
    "     -s  size of array, default is %d\n"
    "     -u  upper bound of the generated value, default is %d\n"
    "     -l  lower bound of the generated value, default is %d\n";

void show_help();
int rand_between(int min, int max);

int main(int argc, char* argv[])
{
  int opt;
  while ((opt = getopt(argc, argv, "hs:u:l:")) != -1) {
    switch (opt) {
    case 'h':
      show_help();
      return 0;
    case 's':
      size_of_array = atoi(optarg);
      break;
    case 'u':
      upper_bound = atoi(optarg);
      break;
    case 'l':
      lower_bound = atoi(optarg);
      break;
    }
  }

  if (size_of_array <= 0) {
    debugf("Invalid size of array: %d", size_of_array);
    // return non-zero value in main means the program fail to execute
    // due to some error.
    return 1;
  }

  if (upper_bound <= lower_bound) {
    debugf("Upper bound must be larger than lower bound, upper=%d, lower=%d",
        upper_bound, lower_bound);
    return 1;
  }

  debug("All input are valid");

  char out_file_name[20];
  snprintf(out_file_name, sizeof(out_file_name), "test_%d.txt", size_of_array);
  debugf("Generating %s contains %d numbers, upper=%d, lower=%d", out_file_name,
      size_of_array, upper_bound, lower_bound);

  FILE* out = fopen(out_file_name, "w");
  int char_per_line = 0;

  int n = rand_between(lower_bound, upper_bound);
  char_per_line += fprintf(out, "%d", n);

  for (int i = 0; i < size_of_array; i++) {
    if (char_per_line >= 75) {
      fprintf(out, "\n");
      char_per_line = 0;
    } else {
      char_per_line += fprintf(out, " ");
    }
    n = rand_between(lower_bound, upper_bound);
    char_per_line += fprintf(out, "%d", n);
  }

  fclose(out);

  return 0;
}

void show_help() { printf(help_text, size_of_array, upper_bound, lower_bound); }
int rand_between(int min, int max) { return rand() % (max - min) + min; }
