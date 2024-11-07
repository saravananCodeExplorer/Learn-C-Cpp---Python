//looping

//Syntax
//while (condition) {
  // code block to be executed
}
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  return 0;
}

//Syntax
//do {
  // code block to be executed
//}
//while (condition);
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  return 0;
}

//Syntax
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
  return 0;
}

//nested for

#include <iostream>
using namespace std;

int main() {
  // Outer loop
  for (int i = 1; i <= 2; ++i) {
    cout << "Outer: " << i << "\n";  // Executes 2 times
    
    // Inner loop
    for (int j = 1; j <= 3; ++j) {
      cout << " Inner: " << j << "\n";  // Executes 6 times (2 * 3)
    }
  }
  return 0;
}

//C++ Break and Continue

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  return 0;
}

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue;
    }
    cout << i << "\n";
  }   
  return 0;
}




	
