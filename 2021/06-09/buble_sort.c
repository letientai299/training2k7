#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int limit = 100;

// generate an array of number with given size
// and upper limit.
int* gen_array(int size, int limit)
{
  int* arr = calloc(size, sizeof(int));
  for (int i = 0; i < size; i++) {
    int n = rand() % limit;
    arr[i] = n;
  }
  return arr;
}

// print array as space delimited list of number.
void print_array(int* arr, int size)
{
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void buble_sort(int* arr, int size)
{
  for (int j = 0; j < size; j++) {
    for (int i = 0; i < size - 1 - j; i++) {
      int x = arr[i];
      int y = arr[i + 1];
      if (x > y) {
        arr[i + 1] = x;
        arr[i] = y;
      }
    }
  }
}

int main()
{
  // seed the random generator to avoid generate same numbers everytime
  time_t t;
  srand((unsigned)time(&t));

  printf("Input size of array:\n");
  int size;
  scanf("%d", &size);

  int* arr = gen_array(size, limit);

  printf("Generated array:\n");
  print_array(arr, size);

  buble_sort(arr, size);

  printf("Sorted array:\n");
  print_array(arr, size);

  free(arr);
  return 0;
}
