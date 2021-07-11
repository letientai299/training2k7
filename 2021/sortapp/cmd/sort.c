#include <stdio.h>
#include "../lib/debug.h"

void hello(char* name){
  debugf("name: %s", name);
  printf("Hello %s\n", name);
}

int main() {
  printf("sort program\n");
  hello("Tai");
}
