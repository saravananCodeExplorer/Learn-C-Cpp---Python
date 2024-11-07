#include <iostream>
using namespace std;
 
enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
    cout<<"Low level"<<LOW;
      break;
    case 2:
     cout<<"Medium level"<<MEDIUM;
      break;
    case 3:
    cout<<"High level"<<HIGH;
      break;
  }
  return 0;
}

