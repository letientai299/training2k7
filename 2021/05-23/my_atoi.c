#include <stdio.h>
#include <stdlib.h>

const int max_str_lenght = 1024;

int my_atoi(char* str) {
  // TODO: complete this function, make it work with all kind of input.
  //  whatever atoi returns, my_atoi must return the same.
  int result = 0;

  for(int i = 0; i<max_str_lenght; i++ ) {
    char c = str[i];
    if (c == 0) {
      // ket thuc chuoi
      break;
    }

    if (c <'0' || c > '9') {
      // day khong phai la 1 chu so
      break;
    }

    result = result*10 + c-'0';
  }

  return result;
}

int main() {
  printf("Input: ");
  char* str = calloc(max_str_lenght, sizeof(char));
  scanf("%1024[^\n]", str);

  int atoi_result = atoi(str);
  printf("atoi(\"%s\") = %d\n", str, atoi_result);

  int my_atoi_result = my_atoi(str);
  printf("my_atoi(\"%s\") = %d\n", str, my_atoi_result);

  if (atoi_result == my_atoi_result) {
    printf("Correct\n");
  } else {
    printf("Incorrect!!!\n");
  }
}
