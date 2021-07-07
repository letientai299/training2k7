#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

const char* version_text = "sample getopt v1.0\n";
const char* help_text = "Sample app for demo getopt\n"
                        "\n"
                        "     -h  show this help\n"
                        "     -d  enable debug log\n"
                        "     -q  use quick sort\n"
                        "     -m  use merge sort\n"
                        "     -b  use buble sort\n"
                        "     -s  use selection sort\n"
                        "     -i  use insertion sort\n";
bool debug = false;
void debugf(char* msg)
{
  if (debug) {
    printf("[Debug] %s\n", msg);
  }
}

void quick_sort() { printf("Use quick sort\n"); }
void merge_sort() { printf("Use merge sort\n"); }
void bubble_sort() { printf("Use buble sort\n"); }
void insertion_sort() { printf("Use insertion sort\n"); }
void selection_sort() { printf("Use selection sort\n"); }

int main(int argc, char* argv[])
{
  bool use_vietnamese = false;
  void (*sort_algo)() = quick_sort;
  int opt;
  while ((opt = getopt(argc, argv, "hdvqmbsi")) != -1) {
    switch (opt) {
    case 'h':
      printf("%s", help_text);
      return 0;
    case 'v':
      printf("%s", version_text);
      return 0;
    case 'd':
      debug = true;
      break;
    case 'q':
      sort_algo = quick_sort;
      break;
    case 'm':
      sort_algo = merge_sort;
      break;
    case 'b':
      sort_algo = bubble_sort;
      break;
    case 's':
      sort_algo = selection_sort;
      break;
    case 'i':
      sort_algo = insertion_sort;
      break;
    }
  }

  debugf("finish process flags");
  sort_algo();
  debugf("program finish");
  return 0;
}
