char* playPass(char* s, int n) {
  // your code
  char *ret = strdup(s);
  for(int i = 0; i < strlen(ret); i++)
  {
    if(isupper(ret[i]))
    {
      ret[i] = ret[i] + n;
      if(ret[i] > 'Z')
        ret[i] = ret[i] - 26;
    }
    else if(isdigit(ret[i]))
    {
      ret[i] = '0' + '9' - ret[i];
    }
    if(i % 2)
      ret[i] = tolower(ret[i]);
  }
  ret = strrev(ret);
  return ret;
}
