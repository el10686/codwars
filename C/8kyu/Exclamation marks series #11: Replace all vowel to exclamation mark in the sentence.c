char *replace(const char *s)
{
    char *ret = malloc(sizeof(char) * strlen(s) + 1);
    for(int i = 0; i < strlen(s); i++)
    {
      if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        ret[i] = '!';
      else
        ret[i] = s[i];
    }
    ret[strlen(s)] = '\0';
    return ret; //coding and coding....
}
