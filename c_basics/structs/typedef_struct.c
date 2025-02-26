#include <stdio.h>
#include <string.h>

// we use typedef keyword to create an alias name for data types.
// commonly used with structures to simplify the syntax of declaring variables

// struct with a typedef person
typedef struct Person{
  char *name;
  int age;
} person;

int main(int argc, char **argv){
  // create a person variable
  person p1;

  strcpy(p1.name, "Nick");
  p1.age = 21;

  printf("Person name: %s\n", p1.name);
  printf("Person age: %d\n", p1.age);
  return 0;
}
