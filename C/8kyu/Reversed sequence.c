/* Note: allocate memory yourself */
/* return NULL in case num == 0 */

#include <stdlib.h>

unsigned short *reverse_seq(unsigned short num)
{ 
    if(num == 0)
      return NULL;
    unsigned short *ret = malloc(sizeof(num) * num);
    
    for(int i = 0; i < num; i++)
      ret[i] = num - i;
      
    return ret;
}
