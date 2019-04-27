#include <stdlib.h>
#include <stddef.h>

int *reverse_list(const int *array, size_t length) {
    
    int *ret = malloc(sizeof(int) * length);
    // <--- hajime!
    for(int i = 0; i < length; i++) {
      ret[i] = array[length - 1 - i];
    }
    return ret;
}
