char* are_you_playing_banjo(const char* name) {
  // to be implemented
  char *ret = malloc(128);
  if( *name == 'R' || *name == 'r') 
    sprintf(ret,"%s plays banjo", name);
  else 
    sprintf(ret,"%s does not play banjo", name);
  return ret;
}
