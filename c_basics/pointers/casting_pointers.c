/*
* demostrates dereferencing a pointer and casting it to another type
* The pointer type tells the compiler how to interpret the memory at that address
*/
#include <stdio.h>

int main(int argc, char **argv){
  int nb;
  int *ptr;

  nb = 42;
  ptr = &nb;

  printf("%d %e\n", *ptr, *(float *)ptr);  // ptr will act like a float pointer
  return 0;
}
