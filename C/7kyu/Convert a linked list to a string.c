#include <stdio.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

// Main Solution
char *stringify(Node *list) {
  // TODO: Return a string representation of the linked list provided
  char *ret = malloc(sizeof(char) * 2048);
  memset(ret, NULL, strlen(ret));
  
  while(list)
  {
    sprintf(ret + strlen(ret), "%d -> ", list->data);
    list = list -> next;
    ret[strlen(ret)] = '\0';
  }
  
  sprintf(ret + strlen(ret), "NULL");
  ret[strlen(ret)] = '\0';
  
  printf("%s", ret);
  return ret;
}
