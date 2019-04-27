#include <stdbool.h>
#include <stddef.h>

// Key definitions
// Please do not modify these - doing so may
// lead to unexpected behavior

typedef struct node {
  int data;
  struct node *next;
} Node;

typedef struct {
  Node *front, *back;
} Queue;

// Modify the code below to implement the key operations for queues
void queue_enqueue(Queue *queue, int data) {
  // TODO
  Node *new = malloc(sizeof(Node));
  new->next = NULL;
  new->data = data;
  if(!(queue->back)) {
    queue->front = queue->back = new;
    return;
  }
  queue->back->next = new;
  queue->back = new;
}
int queue_dequeue(Queue *queue) {
  // TODO
  Node *temp = queue->front;
  int val = temp -> data;
  queue->front = queue->front->next;
  free(temp);
  if(!(queue->front))
    queue->back = queue->front;
  return val;
  
}
int queue_front(const Queue *queue) {
  return queue->front->data; // TODO
}
bool queue_is_empty(const Queue *queue) {
  return !(queue->front); // TODO
}
