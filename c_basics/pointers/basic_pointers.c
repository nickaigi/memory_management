#include <stdio.h>

void printAge(int *);

int main(int argc, char **agrv){
  int age = 21;
  int *pAge = &age;

  printf("Address of age: %p\n", &age);                     // 0x7fff81bbadfc
  printf("Value of pAge %p\n", pAge);                       // 0x7fff81bbadfc

  printf("size of age: %ld bytes\n", sizeof(age));           // 4 bytes
  printf("size of pAge: %ld bytes\n", sizeof(pAge));         // 8 bytes enough to store a HEX address

  printf("Value of age: %d\n", age);                        // 21
  printf("Value at stored Address *pAge %d\n", *pAge);      // 21

  printAge(pAge);

  return 0;
}

void printAge(int *pAge){
  printf("You are %d years old\n", *pAge);
}
