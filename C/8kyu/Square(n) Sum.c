#include <stddef.h>

int square_sum(const int *values, size_t count)
{
  int ret = 0;
  
 for(int i = 0; i < count; i++)
  ret += values[i] * values[i];
  
 return ret;
  
}
