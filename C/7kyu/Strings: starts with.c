int startsWith(const char *string, const char *prefix) {
	if(strlen(prefix) == 0)
    return 1;
  if(strlen(prefix) > strlen(string))
    return 0;
    
  while(*prefix != '\0') {
    if(*prefix != *string)
      return 0;
    prefix++;
    string++;
  }
  
  return 1;
}
