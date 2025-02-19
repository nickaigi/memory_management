#include <stdio.h>

int main(){
  int v[5] = {1, 2, 3, 4, 5};
  for(int i=0; i < 5; i++)
    printf("v[%i] = %i\n", i, v[i]);
  return 0;
}
