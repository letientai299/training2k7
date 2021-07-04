#include "buble_sort.h"
#include "common.h"
#include "insertion_sort.h"
#include "merge_sort.h"
#include "quick_sort.h"

int main()
{
  // seed the random generator to avoid generate same numbers everytime
  time_t t;
  srand((unsigned)time(&t));

  int sizes[] = {
    0,
    1,
    2,
    4,
    8,
    16,
    128,
    1024,
    10240,
  };

  int number_of_sizes = sizeof(sizes) / sizeof(int);
  for (int i = 0; i < number_of_sizes; i++) {
    int size = sizes[i];
    experiment(merge_sort, size);
  }
  return 0;
}
