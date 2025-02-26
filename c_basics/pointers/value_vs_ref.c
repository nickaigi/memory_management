#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE_ARRAY 50

typedef struct s_fat_boy{
  char v[SIZE_ARRAY];
} t_fat_boy ;

void find_42(t_fat_boy *fat_boy){
  int i;
  i = 0;
  while (1){
    if (fat_boy->v[i] == 42){
      printf("42 is in position %d\n", i);
      break;
    }
    ++i;
  }
}

int main (int argc, char **argv){
  t_fat_boy fat_boy;
  srand(time(NULL));

  for (int i = 0; i < SIZE_ARRAY; i++)
    fat_boy.v[i] = i;

  fat_boy.v[rand() % SIZE_ARRAY] = 42;;
  find_42(&fat_boy);
  return 0;
}
