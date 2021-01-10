#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  // maximum size of array
  const int size = 1000;
  // khoi tao 1 cai mang chua int voi size cho truoc
  int* primes = (int*)calloc(size, sizeof(int));

  primes[0] = 2; // so nguyen to thu nhat
  primes[1] = 3; // so nguyen to thu hai

  printf("2 3 ");

  // tim cac so nguyen tiep theo sau 2 va 3
  int p = 4;
  for (int i = 2; i < size;   ) {
    bool isPrime = true;
    float sq = floor(sqrt(p));

    for (int j = 0; j < i; j++) {
      if (primes[j] > sq) {
        break;
      }

      if (p % primes[j] == 0) {
        isPrime = false;
        break;
      };
    }

    if (isPrime) {
      primes[i] = p;
      printf("%d ", p);
      i++;
    }
    p++;
  }

  return 0;
}
