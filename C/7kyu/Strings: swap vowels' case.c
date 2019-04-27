#include <stddef.h> /* NULL */

char* swapVowelCase(const char *str, char *buffer) 
{
    char *ret = buffer;
    
    while(*str != '\0') {
      switch(*str) {
        case 'A': 
          *buffer = 'a';
          break;
        case 'a': 
          *buffer = 'A';
          break;
        case 'E':
          *buffer = 'e';
           break;
        case 'e':
          *buffer = 'E';
          break;
        case 'o':
          *buffer = 'O';
           break;
        case 'O': 
          *buffer = 'o';
            break;
        case 'u':
          *buffer = 'U';
          break;
        case 'U':
           *buffer = 'u';
           break;
        case 'I':
          *buffer = 'i';
          break;
        case 'i':
          *buffer = 'I';
          break;
        default: 
          *buffer = *str;
      }
        str++;
        buffer++;
    }
    *buffer = '\0';
    
    return ret;  
}
