#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// han che dung _global_ variable

int main()
{
  const int size = 600;
  int i, j, d = 100;

  // a[i] is true if i is a prime.
  bool a[size];

  a[0] = a[1] = false;
  for (i = 2; i <= size; ++i) {
    a[i] = true;
  }

  for (i = 2; i <= floor(sqrt(size)); ++i) {
    if (a[i] == true) {
      for (j = i * i; j <= size; j += i) {
        a[j] = false;
      }
    }
  }

  i = 1;
  while (d > 0) {
    i++;
    if (a[i] == true) {
      printf("%d ", i);
      d--;
    }
  }
}
