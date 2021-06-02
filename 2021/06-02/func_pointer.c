#include <stdio.h>

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int mul(int a, int b) { return a * b; }

int main()
{
  int a = 100;
  int b = 3;

  // int (* pointer_name)    (int _, int _)
  int (*func)(int, int) = &mul;
  printf("func(%d, %d) == %d\n", a, b, func(a, b));

  int (*func_array[])(int, int) = { &add, &sub, &mul };
  char* func_name[] = { "add", "sub", "mul" };

  for (int i = 0; i < 3; i++) {
    int (*f)(int, int) = func_array[i];
    char* name = func_name[i];
    printf("%s(%d, %d) == %d\n", name, a, b, f(a, b));
  }
}

/*
Sorting algorithms:
- O(n^2)
  - buble sort
  - selection
  - insertion
  - shell
  - ...

- O(n log(n))
  - quick sort
  - heap sort
  - merge sort

- O(n)
  - radix
  - counting

Function for sorting in-place

void sort_algo(int * arr, int size)

void quick_sort(int * arr, int size)
void merge_sort(int * arr, int size)
void ...(int * arr, int size)

input: array chua sort
ouyput: kiem tra array da sort chua

int main() {
  int * array = ... // input
  // goi ham sort
  ...()
  // kiem tra output
}
*/
