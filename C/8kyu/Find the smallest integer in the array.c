#include <stddef.h>

int find_smallest_int(int *vec, size_t len)
{
    int min = vec[0];
    
    for(int i = 1; i < len; i++)
    {
        if(vec[i] < min)
          min = vec[i];
    }
    return min;
}
