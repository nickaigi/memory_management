/*
* argc = argument counter
* argv = argument vector
*/
#include <stdio.h>
#include <string.h>


// lauch the program like
// ./a.out hello there
int main(int argc, char **argv){
  while (*argv != NULL){
    while (**argv != '\0'){
      printf("%c", *(*argv)++);
    }
    puts("");
    ++argv;
  }
  return 0;
}
