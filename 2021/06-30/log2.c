#include <math.h>
#include <stdio.h>

int main()
{
  int sizes[] = { 0, 1, 2, 4, 8, 16, 128, 1024, 10240 };
  int n = sizeof(sizes) / sizeof(int);
  for (int i = 0; i < n; i++) {
    int x = sizes[i];
    printf("%d*log(%d) = %0.4lf\n", x, x, x * log2(x));
  }
}
