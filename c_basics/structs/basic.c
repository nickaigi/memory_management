#include <stdio.h>
#include <string.h>

struct Player
{
  char name[12];
  int score;
};

int main()
{
  // struct = collection of related members ("variables")
  // they can be of different data types.
  // listed under one name in a block of memory
  // Simmilar to classes, but structs do not have methods
  struct Player players[2];

  char *names[] = {
    "Nick",
    "Nate",
  };
  char *name;

  int i;
  for (i = 1; i <= 2; i++)
  {
    sprintf(name, "player-%d", i);
    strcpy(players[i].name, name);
    players[i].score = i * 2;
  }

  for (i = 1; i <= 2; i++)
  {
    printf("%d: Player: %s\n", i, players[i].name);
    printf("Score%d\n", players[i].score);
  }


  return 0;
}
