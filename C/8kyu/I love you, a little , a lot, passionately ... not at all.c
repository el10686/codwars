#include <stddef.h> // NULL

const char* how_much_i_love_you(int nb_petals) {
  
  char *str[] = {"I love you", "a little", "a lot", "passionately", "madly", "not at all"};
  
  printf("%s", str[0]);
  
  return str[(nb_petals - 1) % 6];
}
