#include <stdlib.h>

char *no_space(char *strin) {

    // <---- hajime!
    char *strout = malloc(strlen(strin) + 1);
    char *ret = strout;
    while(*strin) {
      if(*strin != ' ') {
        *strout++ = *strin;
      }
      strin++;
    }
    *strout = '\0';
    return ret;
}
