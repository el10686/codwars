char* arbitrate(const char* input, int len){
  // TODO: implement this function
  char *temp = malloc(len + 1);
  char *out = temp;
  int flag = 1;
  
  while(*input != '\0') 
  {
    if(*input == '1' && flag)
    {
      *temp = '1';
      flag = 0;
      input++;
      temp++;
    }
    else 
    {
      *temp = '0';
      input++;
      temp++;
    }
  }
  *temp = '\0';
  return out;
}
