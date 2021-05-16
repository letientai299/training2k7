#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void show(char* msg){
  printf("pointer='%p', dec=%ld, string='%s'\n",
          msg,         (long)msg, msg);
}

int main()
{
  char* msg = "Hello world";
  show(msg);
  show(msg+1);
  show(msg+6);
  show(msg-20); // dangerous!
  show(0); // dangerous!

  // copy constant string into a new memory
  char* mutableMsg = (char*)malloc(11);
  strcpy(mutableMsg, (const char*) msg);
  show(mutableMsg);

  // set value inside string using bracket syntax
  mutableMsg[5] = '-';
  show(mutableMsg);
  show(msg);

  // set value inside string using pointer arithmetic
  *(mutableMsg+7) = 'O';
  *(mutableMsg+8) = 'R';
  show(mutableMsg);

  return 0;
}

