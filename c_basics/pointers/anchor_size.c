#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void print_elements(int *v, int size){
  for (int i = 0; i < size; ++i)
    printf("%d\n", v[i]);
}

int main(int argc, char **argv){
  int v[SIZE];
  for (int i = 0; i < SIZE; ++i)
    v[i] = rand() % 101;

  print_elements(v, SIZE);

  return 0;
}
