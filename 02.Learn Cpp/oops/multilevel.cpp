//Multilevel Inheritance
#include <iostream>
using namespace std;

// Parent class
class Parent {
  public: 
    void myFunc1() {
      cout << "Some content in parent class." <<endl;
    }
};

// Child class
class MyChild: public Parent{
       
       public:
           void myFunc2(){
             cout<<"This is child"<<endl;
           }

};

// Grandchild class 
class MyGrandChild: public MyChild {
       public:
           void myFunc3(){
             cout<<"This is grand child"<<endl;
           }


 
};

int main() {
  MyGrandChild myObj;
    myObj.myFunc1();
     myObj.myFunc2();
      myObj.myFunc3();
  return 0;
}

