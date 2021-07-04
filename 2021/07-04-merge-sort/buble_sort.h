#include "common.h"

void buble_sort(int* arr, int size)
{
  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size - 1 - j; i++) {
      // neu arr[i+1] nho hon arr[i],
      // thi swap 2 phan tu do.
      if (less_or_equal(arr[i + 1], arr[i])) {
        swap(arr, i, i + 1);
      }
    }
  }
}

