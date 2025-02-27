/*
* Function Pointers
* - The only thing you can do with a function is to "call" it or take its address
*   IF the name isn't followed by a "(" to signify a funciton call, then the name
*   evaluates to the address with no ambiguity
*/
#include <stdio.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);

int performOperation(int a, int b, int (*operation)(int, int)){
  return operation(a, b);
}

int main(int argc, char **argv){
  int a = 10, b = 5;

  int sum = performOperation(a, b, add);
  int difference = performOperation(a, b, subtract);
  int product = performOperation(a, b, multiply);
  int quotient = performOperation(a, b, divide);

  printf("Sum of %d and %d: %d\tsum address %p\n", a, b, sum, add);
  printf("Difference of %d and %d: %d\tsubtract address %p\n", a, b, difference, subtract);
  printf("Product of %d and %d: %d\tmultiply address %p\n", a, b, product, multiply);
  printf("Quotient of %d and %d: %d\tdivide address %p\n", a, b, quotient, divide);
  return 0;
}

int add(int a, int b){
  return a + b;
}
int subtract(int a, int b){
  return a - b;
}
int multiply(int a, int b){
  return a * b;
}
int divide(int a, int b){
  return a / b;
}
