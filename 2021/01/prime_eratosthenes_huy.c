#include <math.h>
#include <stdbool.h>
#include <stdio.h>
int i, j, d = 100;

bool a[600];

int main()
{
  a[0] = a[1] = false;
  for (i = 2; i <= 600; ++i) {
    a[i] = true;
  }
  for (i = 2; i <= floor(sqrt(600)); ++i) {
    if (a[i] == true) {
      for (j = i * i; j <= 600; j += i) {
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
