#include <stddef.h>

struct node {
    int data;
    struct node *next;
};

size_t len_r(const struct node *list)
{
  if(list)
    return 1 + len_r(list->next);
  else 
    return 0;
}
