#include "sorts.h"

void buble_sort(int* arr, int size)
{
  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size - 1 - j; i++) {
      // neu arr[i+1] nho hon arr[i],
      // thi swap 2 phan tu do.
      if (less(arr[i + 1], arr[i])) {
        swap(arr, i, i + 1);
      }
    }
  }
}

void insertion_sort(int* arr, int size)
{
  for (int i = 1; i < size; ++i) {
    int j = i - 1;
    int memory = arr[i];
    // chi quan tam den compare giua cac phan tu ben trong array,
    // khong quan tam den compare index.
    while (less(memory, arr[j]) && (j >= 0)) {
      arr[j + 1] = arr[j];
      count_swap++;
      --j;
    }

    arr[j + 1] = memory;
    count_swap++;
  }
}

void quick_sort_recursive(int* arr, int start, int end)
{
  // if array has 0 or 1 element, no need to do anything
  if (end - start <= 1) {
    return;
  }

  int pivot = arr[start];
  int left = start;
  int right = end - 1;

  while (strict_less(left, right)) {
    while (strict_less(left, right) && less(arr[left], pivot)) {
      left++;
    }
    while (strict_less(left, right) && strict_less(pivot, arr[right])) {
      right--;
    }

    if (strict_less(left, right)) {
      swap(arr, left, right);
    }
  }

  if (strict_less(arr[left], pivot)) {
    swap(arr, start, left);
  }
  int mid = left;
  quick_sort_recursive(arr, start, mid);
  quick_sort_recursive(arr, mid, end);
}

void quick_sort(int* arr, int size) { quick_sort_recursive(arr, 0, size); }

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
    experiment(quick_sort, size);
  }
  return 0;
}
