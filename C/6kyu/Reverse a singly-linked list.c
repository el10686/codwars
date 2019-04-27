#include <stddef.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node * reverse_list(struct Node *node)
{
    // Reverse the list that starts with 'node' and return the first node of the reversed list.
    // Do the reversal in-place, i.e. do not create new nodes.
    struct Node *curr = node;
    struct Node *prev = NULL, *next = NULL;
    
    while(curr)
    {
      next = curr->next;
      curr->next = prev;
      prev = curr;
      curr = next;
    }
    node = prev;
    return node;
}
