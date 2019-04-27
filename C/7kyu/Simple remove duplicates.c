#include <stdlib.h>
#include <stddef.h>

int* solve(const int* arrin, size_t szin, size_t *szout) {

    // <---- hajime!
    int *temp = malloc(sizeof(int) * szin);
    int count = 0;
    int flag = 1;
    
    for(int i = 0; i < szin; i++) {
      flag = 1;
      for(int j = i + 1; j < szin; j++) {
        if(arrin[i] == arrin[j]) {
         flag = 0;
         break;
        }  
      }
      if(flag)
        temp[count++] = arrin[i];
    }
    
    int *arrout = malloc(sizeof(int) * count);
    
    for(int i = 0; i < count; i++)
      arrout[i] = temp[i];
    
    *szout = count;
      
    free(temp);

    return arrout;
}

// NB: assign the length of your return array to the provided *szout
