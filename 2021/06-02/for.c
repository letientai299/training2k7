#include <stdio.h>

void print(int n)
{
  if (n > 9) {
    if (n % 2 == 0) {
    } else {
      printf("odd\n");
    }
    return;
  }

  char* nums[] = {
    "one",   // n=1, index=0
    "two",   // n=2
    "three", // n=3
    "four",  // n=4
    "five",  // n=5
    "six",   //
    "seven", //
    "eight", //
    "nine"   //
  };
  printf("%s\n", nums[n - 1]);
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);
  for (int i = a; i <= b; i++) {
    print(i);
  }
}
