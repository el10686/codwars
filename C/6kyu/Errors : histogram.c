#include <stddef.h>

char *hist(const char *s) {
    
    char *temp = malloc(1024);
    memset(temp, NULL, 1024);
    int err[4];
    
    for(int i = 0; i < 4; i++)
      err[i] = 0;
    
    while(*s != '\0')
    {
      if(*s == 'u')
        err[0]++;
      else if(*s == 'w')
        err[1]++;
      else if(*s == 'x')
        err[2]++;
      else if(*s == 'z')
        err[3]++;
      s++;
    }
    
    if(err[0])
    {
      sprintf(temp + strlen(temp), "u  %-6d", err[0]);
      for(int i = 0; i < err[0]; i++)
        sprintf(temp + strlen(temp), "*");
      if(err[1] || err [2] || err[3])
        sprintf(temp + strlen(temp), "\r");   
    }
    if(err[1])
    {
      sprintf(temp + strlen(temp), "w  %-6d", err[1]);
      for(int i = 0; i < err[1]; i++)
        sprintf(temp + strlen(temp), "*");
      if(err[2] || err [3])
        sprintf(temp + strlen(temp), "\r");   
    }
    if(err[2])
    {
      sprintf(temp + strlen(temp), "x  %-6d", err[2]);
      for(int i = 0; i < err[2]; i++)
        sprintf(temp + strlen(temp), "*");
      if(err[3])
        sprintf(temp + strlen(temp), "\r");   
    }
    if(err[3])
    {
      sprintf(temp + strlen(temp), "z  %-6d", err[3]);
      for(int i = 0; i < err[3]; i++)
        sprintf(temp + strlen(temp), "*");
    }
    
    if(!err[0] && !err[1] && !err[2] && !err[3]) 
      sprintf(temp, "");
    
    else 
      temp[strlen(temp)] = '\0';
    return temp; // the returned string will be free()-d
}
