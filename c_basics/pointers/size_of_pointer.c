/*
 * Code to demonstrate that the size of a pointer will always be the same
 * i.e 8 bytes
*/
#include <stdio.h>

typedef struct s_big{
  int v[1000000];

} t_big;

int main(int argc, char **argv){

  char c;
  short sh;
  int i;
  double d;
  t_big big;
  printf(
    "%zu bytes ptr char \n"
    "%zu bytes ptr short \n"
    "%zu bytes ptr int \n"
    "%zu bytes ptr double \n"
    "%zu bytes ptr big stuct \n",
    sizeof(&c),
    sizeof(&sh),
    sizeof(&i),
    sizeof(&d),
    sizeof(&big));
  return 0;
}
