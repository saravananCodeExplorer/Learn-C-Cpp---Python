//1.C++ What is OOP?
//OOP stands for Object-Oriented Programming.

//Procedural programming is about writing procedures or functions that perform operations on the data, 
//while object-oriented programming is about creating objects that contain both data and functions.

//2.C++ What are Classes and Objects?

//Classes and objects are the two main aspects of object-oriented programming.

//Look at the following illustration to see the difference between class and objects:

//3.
//Access specifiers (private, protected, and public) control access to class members.



class
  Fruit

objects 
  Apple

   Banana

     Mango
class
Car

objects
 Volvo

  Audi

   Toyota
     
     


#include<iostream>
using namespace std;
class demo
{
	public:
		void display()
		{
			int number,square;
			cout << "enter number";
			cin >>number;
			square=number*number;
			cout<<square;
		}
};
int main()
{
demo d;
d.display();
}
