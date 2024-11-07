//Class Methods

//There are two ways to define functions that belongs to a class:

//1.Inside class definition


#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Sysway technologies";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

//2.Outside class definition

#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod();    // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {      //scope resolution :: operator
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}


