//C++ <cmath> Library

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  cout << sqrt(64) << "\n";
  cout << round(2.6) << "\n";
  cout << log(2) << "\n";
  cout<<min(4,5)<<"\n";
  cout<<max(34,5)<<"\n";
  cout<<ceil(1.1)<<"\n";
  cout<<floor(2.2)<<"\n";
  
  return 0;
}

//boolean
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false)

int x = 10;
int y = 9;
cout << (x > y);//1

int x = 10;
cout << (x == 10)//1

cout << (10 == 15);//0


int myAge = 25;
int votingAge = 18;

cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!
