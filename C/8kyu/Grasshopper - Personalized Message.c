const char* greet(const char *name, const char *owner) 
{
  if(strcmp(name, owner))
    return "Hello guest";
  return "Hello boss";
}
