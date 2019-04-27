#include <stdbool.h>
#include <stddef.h>

// Key definitions
// Please do not modify them - attempts to do so
// may lead to unexpected behavior

typedef struct node {
  int data;
  struct node *prev, *next;
} Node;

typedef struct {
  Node *front, *back;
} Deque;

// Modify the code below to implement all of the key operations
void deque_push_front(Deque *deque, int data) {
  // TODO
  Node *new = malloc(sizeof(Node));
  new->data = data;
  new->prev = NULL;
  new->next = deque->front;
  
  if(!(deque->back))
  {
    deque->front = deque->back = new;
  }
  
  else
  {
    deque->front->prev = new;
    deque->front = new;
  }
}

int deque_pop_front(Deque *deque) {
  // TODO
  Node *temp = deque->front;
  int data = temp->data;
  
  if(deque->front == deque->back)
  {
    deque->front = deque->back = NULL;
  }
  else
  {
    deque->front = deque->front->next;
  }
  free(temp);
  return data;
}

int deque_peek_front(const Deque *deque) {
  return deque->front->data; // TODO
}

void deque_push_back(Deque *deque, int data) {
  // TODO
  Node *new = malloc(sizeof(Node));
  new->data = data;
  new->prev = deque->back;
  new->next = NULL;
  
  if(!(deque->front))
  {
    deque->front = deque->back = new;
  }
  else
  {
    deque->back->next = new;
    deque->back = new;
  }
}

int deque_pop_back(Deque *deque) {
  // TODO
  Node *temp = deque->back;
  int data = temp->data;
  
  if(deque->front == deque->back)
  {
    deque->front = deque->back = NULL;
  }
  else
  {
    deque->back = deque->back->prev;
  }
  free(temp);
  return data;
}

int deque_peek_back(const Deque *deque) {
  return deque->back->data; // TODO
}

bool deque_is_empty(const Deque *deque) {
  return !(deque->front); // TODO
}
