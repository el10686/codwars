#include <stdbool.h>

// Key definitions
// Please do not modify them - attempts to do so
// may lead to unexpected behavior

// A node in our linked list
typedef struct node {
  int data;
  struct node *next;
} Node;

// Our stack, implemented as a wrapper around our linked list
typedef struct {
  Node *root;
} Stack;

// Modify the code below to implement the key operations for our stack
void stack_push(Stack *stack, int data) {
  // TODO
  Node *new = malloc(sizeof(Node));
  new->next = stack->root;
  new->data = data;
  stack->root = new;
}
int stack_pop(Stack *stack) {
  Node *temp = stack->root;
  int val = temp->data;
  stack->root = stack->root->next;
  free(temp);
  return val; // TODO
}
int stack_peek(const Stack *stack) {
  return stack->root->data; // TODO
}
bool stack_is_empty(const Stack *stack) {
  return !(stack->root); // TODO
}
