#include <stddef.h>

void invert(int *values, size_t values_size)
{
  if (values_size == 0)
    return NULL;
  
  for(int i = 0; i < values_size; i++)
    values[i] = -values[i];
    
  return values;
}
