#include <stdio.h>
#include <stdlib.h>

int main() {
  // Example scanf
  // -------------
  // int i = 10;
  // float f = 3.14;
  //      format string
  // scanf(  "i=%d, f=%f",         &i, &f);
  // &i co nghia la dia chi cua bien i
  // printf( "i=%d, f=%f",         i, f);

  // Example mot vai ham trong stdlib
  // --------------------------------
  printf("Xin moi input data: ");
  // Khoi tao nhu the nay se chi tao ra NULL pointer,
  // khong the chua duoc data cua scanf
  // char* str; // NULL
  char* str = calloc(1024, sizeof(char));

  // scanf voi %s chi co the lay duoc word dau tien trong input
  // input: "hello world"
  // scanf chi lay duoc "hello"
  // scanf("%s", str);

  // De doc duoc string co khoang trang, xem them link:
  // https://stackoverflow.com/a/1248017/3869533
  scanf("%1024[^\n]", str);

  printf("Ban da nhap vao: %s\n", str);
  printf("atoi(\"%s\") = %d\n", str, atoi(str));
  printf("atof(\"%s\") = %lf\n", str, atof(str));
  printf("atol(\"%s\") = %ld\n", str, atol(str));

  char* remain;
  printf("strtol(\"%s\") = %ld\n", str, strtol(str, &remain, 10));
  printf("remain after strtol: %s\n", remain);

  printf("strtod(\"%s\") = %f\n", str, strtod(str, &remain));
  printf("remain after strtod: %s\n", remain);
}
