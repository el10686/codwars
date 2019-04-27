/* Note:
    Allocate memory yourself!
*/

#include <stdlib.h>

char *dna_strand(const char *dna)
{
    char *ret = malloc(strlen(dna) * sizeof(char) + 1);
    
    if(!dna)
      return NULL;
    
    for(int i = 0; i < strlen(dna); i++) {
      if(dna[i] == 'A') ret[i] = 'T';    
      if(dna[i] == 'T') ret[i] = 'A';    
      if(dna[i] == 'C') ret[i] = 'G';    
      if(dna[i] == 'G') ret[i] = 'C';    
    }
    ret[strlen(dna)] = '\0';
    return ret;
}
