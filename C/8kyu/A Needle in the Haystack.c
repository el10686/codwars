#include <stddef.h>
#include <string.h>

char *find_needle(const char **haystack, size_t count)
{
  char *buf = malloc(sizeof(char) * 32);
  for(int i = 0; i < count; i++)
  {
    if(strcmp(haystack[i], "needle") == 0)
    {
      sprintf(buf, "found the needle at position %d", i);
      printf("%s",buf);
      return buf;
    }
  }
}
