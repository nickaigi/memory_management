#include <stdio.h>
#include <string.h>

// struct = collection of related members ("variables")
// they can be of different data types.
// listed under one name in a block of memory
// Simmilar to classes, but structs do not have methods

struct Player {
  char name[12];
  int score;
} player_one;  // added a variable player_one

int main(int argc, char **argv){
  // assign value to the name of player_one
  strcpy(player_one.name, "Nick");
  player_one.score = 21;

  printf("Player Name: %s\n", player_one.name);
  printf("Player Score: %d\n", player_one.score);
  return 0;
}
