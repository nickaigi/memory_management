/*
* Demonstration of multilevel pointers
*/
#include <stdio.h>

int main(int argc, char **argv){
  int n;
  int *pn;
  int *ppn;
  int ***pppn;

  n = 42;
  pn = &n;
  ppn = &pn;
  pppn = &ppn;

  printf("%d\n", ***pppn);

  printf("%p == %p\n", **pppn, pn);  // double dereference will yield a pointer to int

  return 0;
}
