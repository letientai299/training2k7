#include "common.h"

// private API (Application Programming Interface)
void merge_sort_recursive(int* arr, int start, int end)
{
  if (end - start <= 1) {
    return;
  }

  int mid = (end + start) / 2;
  merge_sort_recursive(arr, start, mid);
  merge_sort_recursive(arr, mid, end);
  int* temp = (int*)calloc(end - start, sizeof(int));

  int i = start;
  int j = mid;
  int t = 0;
  while (i < mid && j < end) {
    if (arr[i] < arr[j]) {
      temp[t++] = arr[i++];
    } else {
      temp[t++] = arr[j++];
    }
  }

  while (i < mid) {
    temp[t++] = arr[i++];
  }

  while (j < end) {
    temp[t++] = arr[j++];
  }

  for (int i = 0; i < end - start; i++) {
    arr[start + i] = temp[i];
  }

  free(temp);
}

// public
void merge_sort(int* arr, int size) { merge_sort_recursive(arr, 0, size); }
