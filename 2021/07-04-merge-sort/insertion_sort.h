#include "common.h"

void insertion_sort(int* arr, int size)
{
  for (int i = 1; i < size; ++i) {
    int j = i - 1;
    int memory = arr[i];
    // chi quan tam den compare giua cac phan tu ben trong array,
    // khong quan tam den compare index.
    while (less_or_equal(memory, arr[j]) && (j >= 0)) {
      arr[j + 1] = arr[j];
      count_swap++;
      --j;
    }

    arr[j + 1] = memory;
    count_swap++;
  }
}

