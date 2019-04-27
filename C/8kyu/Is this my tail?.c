#include <string.h>

int correct_tail(const char *body, const char *tail) {
 if(body[strlen(body) - 1] == tail[strlen(tail) - 1])
    return 1;

  return 0;
}
