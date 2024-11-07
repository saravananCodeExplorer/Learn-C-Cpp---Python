#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";  // A string variable
  string *ptr = &food;  // A pointer variable that stores the address of food

  
  cout << food << "\n";

  cout << &food << "\n";

  cout << ptr << "\n";
  
  cout<<&ptr<<"\n";
  
  cout<<*ptr<<"\n";
  
  *ptr = "Chicken pizza";
  cout<<*ptr<<"\n";
  
  
  return 0;
}

