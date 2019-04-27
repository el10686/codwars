#include <stdlib.h>

char** capitalize(char* strin) {

    // <---- hajime!
    char **ret = malloc(2 * sizeof(char *));
    int size = strlen(strin);
    ret[0] = malloc(size + 1);
    ret[1] = malloc(size + 1);

    for(int i = 0; i < size; i++) {
      if(i % 2 == 0)
        ret[0][i] = toupper(strin[i]);
      else
        ret[0][i] = strin[i];
    }
    ret[0][size] = '\0';
    
    for(int i = 0; i < size; i++) {
      if(i % 2 != 0)
        ret[1][i] = toupper(strin[i]);
      else
        ret[1][i] = strin[i];
    }
    ret[1][size] = '\0';
    
    printf("%s %s", ret[0], ret[1]);

    
