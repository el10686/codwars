#include<string.h>

int isPalindrom (const char *s)
{ 

  for(int i = 0; i < strlen(s) / 2; i++)
    if(tolower(s[i]) != tolower(s[strlen(s) - 1 - i]))
      return 0;
      
  return 1;
    
}
