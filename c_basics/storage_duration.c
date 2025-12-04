/*
 * Demonstrates the use of the static storage duration
 * Objects declared in file scope have static storage duration.
*/
#include <stdio.h>

void increment(void){
  static unsigned int counter = 0;  // acts like a global
  counter++;
  printf("%d ", counter);
}

int main(int argc, char *argv[]) {
  for (int i = 0; i < 5; i++) {
    increment();
  }
  printf("\n");
  return 0;
}
