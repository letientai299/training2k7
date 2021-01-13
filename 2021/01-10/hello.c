#include <stdio.h> // thu vien mac dinh, co san
#include "my_math.h" // thu vien cua rieng minh

int main(){
  int a = 123;
  int b = 456;
  printf("%d + %d = %d\n", a, b, add(a, b));
  printf("%d - %d = %d\n", a, b, sub(a, b));
}

