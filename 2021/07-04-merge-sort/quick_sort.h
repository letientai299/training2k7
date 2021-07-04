#include "common.h"

void quick_sort_recursive(int* arr, int start, int end)
{
  // if array has 0 or 1 element, no need to do anything
  if (end - start <= 1) {
    return;
  }

  int pivot = arr[start];
  int left = start;
  int right = end - 1;

  while (less(left, right)) {
    while (less(left, right) && less_or_equal(arr[left], pivot)) {
      left++;
    }
    while (less(left, right) && less(pivot, arr[right])) {
      right--;
    }

    if (less(left, right)) {
      swap(arr, left, right);
    }
  }

  if (less(arr[left], pivot)) {
    swap(arr, start, left);
  }
  int mid = left;
  quick_sort_recursive(arr, start, mid);
  quick_sort_recursive(arr, mid, end);
}

void quick_sort(int* arr, int size) { quick_sort_recursive(arr, 0, size); }
