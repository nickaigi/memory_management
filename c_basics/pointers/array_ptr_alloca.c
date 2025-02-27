/*
 * The array name is synonymous with the address of the first element in the array
 *
 * alloca() -> void * alloca(size_t, size);
 * - The alloca() macro allocates size bytes of space in the stack frame of the caller.
 *   The temporary space is automatically freed on return.
 *   returns a pointer to the beginning of the allocated space.
 *
 * Use of alloca is discouraged; there is no way to check for failure but failure may stil
 * occur, resulting in a possibly exploitable security vulnerability.
*/
#include <alloca.h>
#include <stdio.h>

int main(int argc, char **argv){
  // array that lives in the stack
  int arr[10];
  printf("%p == %p\n", arr, &arr[0]);  // 0x7ffdf7350250 == 0x7ffdf7350250
  arr[0] = 42;
  arr[1] = 1337;
  arr[2] = 10;

  // sizeof
  printf("Size of array: %zu\n", sizeof(arr));  // 40 bytes
  // &
  printf("%p\n", &arr);
  printf("%p\n", arr);  // same as &arr

  puts("\n\n");

  // ptr array that lives in the stack
  int *ptr = alloca(10 * sizeof(int));  // allocates 40 bytes in the stack. Same as arr[10]
  *(ptr + 0) = 42;
  *(ptr + 1) = 1337;
  *(ptr + 2) = 10;
  printf("Size of ptr: %zu\n", sizeof(ptr));  // sizeof a pointer is always 8 bytes
  // &
  printf("%p\n", &ptr);
  printf("%p\n", ptr);  // same as &arr

  return 0;
}
