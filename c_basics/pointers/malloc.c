/*
 * When do we use void pointers ?
 * - malloc:
 *   gives you some memory in the HEAP
 *   It doesn't care about the pointer type. Its upto the programmer to assign it a type
 *
 * malloc() -> void *malloc(size_t size);
*    The  malloc()  function  allocates  size  bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is 0, then malloc() returns a unique pointer
*    value that can later be successfully passed to free().  (See "Nonportable behavior" for portability issues.)
*
* free() -> void free(void *_Nullable ptr);
*    The free() function frees the memory space pointed to by ptr, which must have been returned by a previous call to malloc() or related functions.  Otherwise, or if ptr  has  already
*    been freed, undefined behavior occurs.  If ptr is NULL, no operation is performed.
*
* Both malloc() and free() come from the stdlib.h
*/

#include <stdio.h>
#include <stdlib.h>

int *foo(){
  int *n;
  n = (int*)malloc(sizeof(int));
  if (n == NULL){
    printf("Memory not allocated\n");
    exit(0);
  }
  *n = 42;
  return n;
}

int main(int argc, char **argv){
  int *pn;
  pn = foo();
  printf("%d\n", *pn);
  free(pn);
  return 0;
}
