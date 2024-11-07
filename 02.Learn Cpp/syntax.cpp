//syntax
//1.using namesspace

/*#include <iostream>
using namespace std;

int main() {
  cout  <<"Welcome to the World of C++:)";
  return 0;
}*/

//2.not using namespace and newline character and endl manipulator
#include <iostream>

int main() {
  std::cout << "Hello World!"<<"\n\n\n";
   std::cout << "Hello World!"<<std::endl;
    std::cout << "Hello World!";
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++"<<"\n";
    cout << "I am learning C++\n";
      cout << "I am learning C++\n";
  
  return 0;
}

