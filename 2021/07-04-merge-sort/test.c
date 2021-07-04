#include "common.h"
#include "merge_sort.h"

int main()
{
  int arr[] = {
    8,
    4,
    2,
    5,
    3,
    7,
  };

  int n = sizeof(arr) / sizeof(int);
  print_array(arr, n);
  merge_sort(arr, n);
  print_array(arr, n);
  if (check(arr, n) == false) {
    printf("Wrong!!!");
  }
}
