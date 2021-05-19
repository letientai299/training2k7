#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned long size = 1024*1024*1024;
  size *= 10240;
  void* pointer = malloc(size);
  // Program won't crash, because we have not ACTUALLY use the memory yet
  printf("%p", pointer);
  free(pointer);
}
