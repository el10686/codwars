#include <stdbool.h>

bool IsLeapYear(int year) {
  // Your code here...
  if(year % 4 == 0) {
    if(year % 100 == 0) {
      if(year % 400 == 0)
        return 1;
      return 0;
    }
    return 1;
  }
  return 0;
}
