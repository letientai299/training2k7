#include <stdio.h>

int main(int argc, char* argv[])
{
  // printf nhan 2 input:
  // - format string
  // - 1 chuoi cac tham so
  float percent = 0.123456789;
  printf("Percentage %f %%\n", percent * 100);
  printf("Percentage %.2f %%\n", percent * 100);

  int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31 };
  // sizeof return length in bytes
  int length_primes = sizeof(primes) / sizeof(int);
  for (int i = 0; i < length_primes; i++) {
    int prime = primes[i];
    printf("Prime[%2d] = %2d\n", i, prime);
  }

  int number_lenght = 4;
  // Printf in ra cai gi?
  // %4d| %s
  char buffer[512];

  sprintf(buffer, "%%%dd| %%s", number_lenght);

  printf("%s\n", buffer); // %4d| %s
  printf(buffer, 123, "A string");
  return 0;
}
