#include <stdio.h>

void addOne(int *ptr){
  (*ptr)++;  // add 1 to the whatever is pointed to by ptr
}


int main(int argc, char **argv){
  int i = 10, *pi;
  pi = &i;
  printf("Before addOne: i = %d\n", i);
  addOne(pi);
  printf("After addOne: i = %d\n", i);
  return 0;
}
