#include <stdio.h>

struct Person{
  char name[64];
  int age;
};

int main(int argc, char *argv[]){
  struct Person people[100];

  struct Person *p_Person = &people;

  int i = 0;
  for (i = 0; i < 100; i++){
    // initialize the age of each person to zero
    p_Person->age = 0;
    p_Person += 1;
  }
  return 0;
}
