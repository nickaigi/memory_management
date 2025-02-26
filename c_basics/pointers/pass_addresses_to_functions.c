#include <stdio.h>

void swap(int*, int*);


int main(int argc, char **argv){
  int num1 = 5, num2 = 10;
  printf("Before swap:\n");
  printf("num1 = %d\n", num1);
  printf("num2 = %d\n", num2);

  swap(&num1, &num2);

  printf("After swap:\n");
  printf("num1 = %d\n", num1);
  printf("num2 = %d\n", num2);
  return 0;
}

void swap(int *n1, int *n2){
  int temp;
  temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
