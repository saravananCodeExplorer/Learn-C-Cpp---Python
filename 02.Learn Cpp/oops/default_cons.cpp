//Constructors
//A constructor in C++ is a special method that is automatically called when an object of a class is created.

//To create a constructor, use the same name as the class, followed by parentheses ():

#include<iostream>
using namespace std;
class employee
{
	public:
		employee()
		{
			int leave,salary; 
			cout<<"enter salary";
			cin>>salary;
			cout<<"how many days take leave";
			cin>>leave;
			int detection=leave*200;
			int final_salary=salary-detection;
			cout << final_salary;
		}
};
int main()
{
	employee e1;
}



//2.ex
#include <iostream>
using namespace std;

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      	int x; 
        cout << "Enter a number: "; 
          cin >> x;
            cout << "The square is: " << x*x;
    }
};

int main() {
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

