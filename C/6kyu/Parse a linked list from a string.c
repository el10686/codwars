#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// "Preloaded Code" (do NOT modify!)
typedef struct node {
  int data;
  struct node *next;
} Node;

Node *parse(char *s) {
    //TODO: return the linked list represented by the provided string
    if(*s < '0' || *s > '9')
      return NULL;
      
    Node *new = malloc(sizeof(Node));
    Node *start = new;
    
    while (*s != '\0')
    {
      int data;
      sscanf(s, "%d", &data);
      printf("%d ", data);
      if(data == 0)
        s += 5;
      else
      {
        int nDigits = floor(log10(abs(data))) + 1;
        s += 4 + nDigits;
      }
      new->data = data;
      if(*s < '0' || *s > '9') 
      {
        new->next = NULL;
        break;
      }
      else
      {
        Node *next = malloc(sizeof(Node));
        new->next = next;
        new = next;
      }
    }
    return start;
}
