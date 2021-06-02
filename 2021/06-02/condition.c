#include <stdio.h>

int main()
{
  int n;
  scanf("%d", &n);

  if (n >9) {
    printf("Greater than 9");
    return 0;
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
  return 0;
}
