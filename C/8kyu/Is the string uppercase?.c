#include <stdbool.h>

bool is_uppercase(const char *source)
{
  for(int i = 0; i < strlen(source); i++)
    if(source[i] > 96 && source[i] < 123)
      return false;
      
  return true;
}
