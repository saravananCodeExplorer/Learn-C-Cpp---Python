//Creating References
#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "saro";
  string &store = name;
  cout <<"Memory address is :"<< &name<<endl;
  //  Memory Address
  
  cout << name << "\n";
  cout << store << "\n";
  return 0;
}

