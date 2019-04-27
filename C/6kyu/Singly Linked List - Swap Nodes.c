#include <stdio.h>  // For sample visualisation code, you may remove that ^^

typedef struct Node {
    int value;
    struct Node *next;
} Node, *LinkedList;

char* listToString(LinkedList list);  // Preloaded visualisation tool

int swapNodes(LinkedList *listPointer1, unsigned int index1, LinkedList *listPointer2, unsigned int index2)
{
    
    Node *curr1 = *listPointer1;
    Node *curr2 = *listPointer2;
    Node *prev1 = NULL;
    Node *prev2 = NULL;
    int flag1 = 1;
    int flag2 = 1;
    
    for(int i = 0; i < index1; i++) {
      if(curr1->next) {
        prev1 = curr1;
        curr1 = curr1->next;
      }
      else {
        flag1 = 0; 
        break;
      }
    }
    
    for(int i = 0; i < index2; i++) {
      if(curr2->next) {
        prev2 = curr2;
        curr2 = curr2->next;
      }
      else {
        flag2 = 0; 
        break;
      }
    }
    
    if(flag1 && flag2) {
      if(prev1 != NULL) 
        prev1->next = curr2;
      else
        *listPointer1 = curr2;
      if(prev2 != NULL) 
        prev2->next = curr1;
      else
        *listPointer2 = curr1;
      Node *temp = curr2->next;
      curr2->next = curr1->next;
      curr1->next = temp;
      return 1;
    }
    else
      return (0);
}
