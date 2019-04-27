#include <stddef.h>
#include <string.h>

char *rot13(const char *src)
{
  char *ret = malloc(strlen(src) + 1);
  memset(ret, NULL, strlen(src) + 1);
  char *dst = ret;
  
  while(*src != '\0') {
    if(*src >= 'A' && *src <= 'Z') {
      if((*src + 13) <= 'Z')
        *ret = *src + 13;
      else
        *ret = *src - 13;
    }
    else if(*src >= 'a' && *src <= 'z') {
      if((*src + 13) <= 'z')
        *ret = *src + 13;
      else
        *ret = *src - 13;
    }
    else
      *ret = *src;
    src++;
    ret++;
  }
  ret = '\0';
  return dst;
  
}
