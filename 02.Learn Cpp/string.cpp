//C++ Strings
//A string variable contains a collection of characters surrounded by double quotes:
#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "prands";
  cout << greeting;
  return 0;
}
//1.String Concatenation
#include <iostream>
#include <string>
using namespace std;
 
int main () {
  string firstName = "Saravanan";
  string lastName = "sekar";
  string fullName = firstName + lastName;
  cout << fullName;
  return 0;
}
//ex.2
string firstName = "Hello";
string lastName = "Friends";

string fullName = firstName + " " + lastName;
cout << fullName;

//ex.3
string firstName = "welcome";
string lastName = "buddys";
string fullName = firstName.append(lastName);
cout << fullName;

//2.Adding Numbers and Strings
string x = "100";
string y = "200";
string z = x + y;   // z will be 100200 (a string)

// num + srt = error
#include <iostream>
#include<string>
using namespace std;
 
int main () {
string x = "10";
int y = 20;
string z = x + y;
  cout << z;
  return 0;
}
//3.String Length length() function;
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
//length() or size():
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.size();


//4.Access Strings
//ex.1
string myString = "Hello";
cout << myString[0];


//ex.2

string myString = "Hello";
cout << myString[myString.length() - 1];

//Change String Characters
//ex.3
string myString = "Hello";
myString[0] = 'J';
cout << myString;


//ex.4 The at() function

#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Hello";
  cout << "Original string: " << myString << "\n";
  
  cout << "First character: " << myString.at(0) << "\n";
  cout << "Second character: " << myString.at(1) << "\n";
  cout << "Last character: " << myString.at(myString.length() - 1) << "\n";
  
  myString.at(0) = 'J';
  cout << "Changed string: " << myString;
  return 0;
}


//Strings - Special Characters

//The sequence \'  inserts a single quote in a string:
#include <iostream>
using namespace std;

int main() {
  string txt = "It\'s alright.";
  cout << txt;
  return 0;
}
//The sequence \"  inserts a single quote in a string:

#include <iostream>
using namespace std;

int main() {
  string txt = "We are the so-called \"Vikings\" from the north.";
  cout << txt;
  return 0;
}
//User Input Strings
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

//not using namespace
#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}

#include <iostream>
using namespace std;

int main() {
string str1 = " World";
str1.append("!");
cout<<str1<<"\n";

str1.insert(3, "INSERTED");  // Inserts at index 5
cout<<str1<<endl;


string ss ="saravanan";
ss.erase(5, 3);  // Erases 3 characters starting at index 5
cout<<ss;
return 0;
}


