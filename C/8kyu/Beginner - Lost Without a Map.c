#include <stddef.h>

// return a *new, dynamically allocated* array with each element doubled.
int *maps(const int *arr, size_t size)
{
  int *ret = malloc(sizeof(int) * size);
  
  for(int i = 0; i < size; i++)
    ret[i] = 2 * arr[i];
    
  return ret;
}
