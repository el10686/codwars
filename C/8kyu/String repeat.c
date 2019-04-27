#include <string.h>

char *repeat_str(size_t count, const char *src) {
  
  char *ret = malloc(sizeof(char) * strlen(src) * count);
  
  for(int i = 0; i < count; i++)
    for(int j = 0; j < strlen(src); j++)
      ret[i * strlen(src) + j] = src[j];
      
  ret[strlen(src) * count] = '\0';
  
  return ret;
}
