//Change Values
#include <stdio.h>

enum Level {
  LOW =55,
  MEDIUM, 
  HIGH 
};
  
int main() {
  enum Level myVar = LOW;
  printf("%d", myVar);
  
  return 0;
}
