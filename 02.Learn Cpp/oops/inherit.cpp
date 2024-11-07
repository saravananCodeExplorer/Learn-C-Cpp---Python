//Inheritance	

   // derived class (child) - the class that inherits from another class
   // base class (parent) - the class being inherited from


#include <iostream>
#include <string>
using namespace std;

// Base class
class Parent {
  public: 
    string str  = "base class (parent) ";
    void func() {
      cout << "Single Inheritance\n" ;
    }
};

// Derived class
class Child: public Parent {
  public: 
    string str2 = "derived class (child)";
};

int main() {
  Child obj;
  obj.func();
  cout << obj.str << "and " << obj.str2;
  return 0;
}
