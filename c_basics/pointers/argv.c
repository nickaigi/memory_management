/*
* argc = argument counter
* argv = argument vector
*/
#include <stdio.h>


// lauch the program like
// ./a.out hello there
int main(int argc, char **argv){
  int j, k;

  j = 0;
  while (argv[j]){
    k = 0;
    while (argv[j][k]){
      printf("%c", argv[j][k]);
      ++k;
    }
    puts("");
    ++j;
  }
  return 0;
}
