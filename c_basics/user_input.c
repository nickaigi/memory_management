#include <stdio.h>
#define MAX 100

int main()
{
  char name[MAX];
  printf("Please enter your name: ");
  scanf("%99s", name);  // use %99s to prevent buffer overflow
  printf("Welcome %s\n", name);
  return 0;
}
