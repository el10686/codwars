#include <stddef.h>

size_t get_count(const char *s)
{
    size_t cnt = 0;
    
    while(*s != '\0') {
      if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        cnt++;
      s++;
    }
    return cnt;
}
