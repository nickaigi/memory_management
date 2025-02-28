#include <stdlib.h>
#include <stdio.h>


struct node {
  int value;
  struct node *next;
};

typedef struct node node_t;

void printList(node_t *head){
  node_t *temp = head;

  while (temp != NULL) {
    printf("%d ->", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

node_t *create_new_node(int value){
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

int main(int argc, char **argv){
  node_t *head = NULL;
  node_t *tmp;

  for (int i = 0; i < 20; i++){
    tmp = create_new_node(i);
    tmp->next = head;
    head = tmp;
  }
  printList(head);
  return 0;
}
