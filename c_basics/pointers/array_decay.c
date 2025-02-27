/*
 * Array Decay
 *
 * Array decay has the following advantages:
 *
 * Efficiency
 * - By employing "array decay" (decaying an array into a pointer) it allows for more
 *   efficient memory usage.
 *   When passing an array to a function, instead of creating a copy of the entire array,
 *   only the memory address of the first element is passed. This reduces the overhead
 *   of memory allocation and copying when dealing with large arrays.
 *
 * Flexibility
 * - in function calls, array decay allows more flexible function calls.
 *   Since arrays decay into pointers, functions can accept array of different sizes
 *   without the need to define multiple function signatures
 *   This flexibility simplifies the code and enhances reusability
 *
 * Disadvantages
 *
 * Loss of size information makes it nescessary to pass the siz eof the array as a
 * separate paramenter to functions, or to use a sentinel value
 * e.g
 *      void foo(int arr[], int size);
*/
#include <stdio.h>


int main(int argc, char **argv){
  int v[5];
  v[0] = 42;
  v[1] = 50;
  v[1] = 60;
  printf("%d\n", v[0]);             // 42
  printf("%d\n", *(v));             // 42
  printf("%d\n", *(v + 1));         // 50

  printf("%c\n", "hello"[0]);
  printf("%c\n", *"hello");
  printf("%c\n", 2["hello"]);
  return 0;
}
