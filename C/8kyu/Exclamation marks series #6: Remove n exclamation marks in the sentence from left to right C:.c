#include <stdlib.h>

char *remove(char *strin, int n) {

    // <---- hajime!
    char *strout = malloc(strlen(strin) + 1);
    char *ret = strout;
    while(*strin) {
      if(*strin == '!' && n > 0) {
        strin++;
        n--;
      }
      else
        *strout++ = *strin++;
    }
    *strout = '\0';
    return ret;

}
