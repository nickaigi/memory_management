#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
  char *name = "nickson";
  int v[5] = {1, 2, 3, 4, 5};
  int *pV = &v;
  int i = 0;

  for(i=0; i < 5; i++) {
    printf("v[%i] = %i\n", i, *(pV + i));
  }

  printf("Name:");

  for(i = 0; i < strlen(name); i++){
    printf("%c", *(name + i));
  }
  printf("\n");
  return 0;
}
