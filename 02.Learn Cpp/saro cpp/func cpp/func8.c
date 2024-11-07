#include <iostream>
using namespace std;

int myFunction(int x, int y) {
  return x + y;
}

int main() {
	int store =myFunction(5,5);
	cout<<store<<endl;
  cout << myFunction(5, 3);
  return 0;
}

