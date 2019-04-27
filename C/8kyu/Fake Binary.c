void fakeBin(const char *digits, char *buffer) {
  // Please place result in the memory pointed to by
  // the buffer parameter. Buffer has enough memory to
  // accommodate the answer as well as the null-terminating
  // character.
  while(*digits != '\0') {
    if(*digits < '5')
      *buffer = '0';
    else
      *buffer = '1';
    digits++;
    buffer++;
  }
  *buffer = '\0';
}
