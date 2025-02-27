#include <stdio.h>

// void foo(int arr[]){
// but here we use the pointer notation
void foo(int *arr){
  printf("All foo here!\n");
}

int main(int argc, char **argv){
  int arr[1000000];
  foo(arr);
  return 0;
}
