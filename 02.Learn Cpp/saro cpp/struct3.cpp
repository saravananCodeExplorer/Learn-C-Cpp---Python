//Named Structures

//struct myDataType { // This structure is named "myDataType"
//  int myNum;
//  string myString;
//};
#include <iostream>
#include <string>
using namespace std;

// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Mruthi";
  myCar2.model = "800";
  myCar2.year = 1969;
  
  car myCar3;
  myCar3.brand="mahindra";
  myCar3.model="Thar";
  mycar3.year=2020;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    cout<<myCar3.brand<<" "<< myCar3.model << " "<< myCar3.year<< "\n";
 
  return 0;
}

