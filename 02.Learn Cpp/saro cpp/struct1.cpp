#include <iostream>
#include <string>
using namespace std;

int main() {
	
//	struct {             // Structure declaration
//  int myNum;         // Member (int variable)
//  string myString;   // Member (string variable)
//} myStructure;       // Structure variable 

  struct {    
    int myNum;
    string myString;
    float percentage;
  } myStructure;

  myStructure.myNum = 1;
  myStructure.myString = "Hello World!";
  myStructure.percentage=44.44;

  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  cout<<myStrucrure.percentage<<"\n";
  return 0;
}

