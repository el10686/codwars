#include <stddef.h>
char* printerError(char *s) {
    // your code
    int total = strlen(s);
    int bad = 0;
    
    while(*s != '\0') {
      if(*s < 'a' || *s > 'm')
        bad++;
      s++;
    }
    char *ret = malloc(10);
    memset(ret, NULL, 10);
    sprintf(ret, "%d/%d", bad, total); 
    ret[10] = '\0';
    return ret;
}
