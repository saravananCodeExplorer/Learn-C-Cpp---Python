#include <iostream>
using namespace std;

int main() {
  string letters[2][2][2] = { { { "A", "B" },{ "C", "D" } },{ { "E", "F" },{ "G", "H" } } };
  
  cout<<letters[0][0][0] <<endl;
  
  letters[0][1][0]="Vv";

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << letters[i][j][k] << "\n";
      }
    }
  }
  
  string arr[2][2][2];
    arr[0][0][0] ="a";
    arr[0][0][1]="b";
    arr[0][1][0]="c";
	arr[0][1][1] ="d";
	arr[1][0][0]="e";
	arr[1][0][1] ="f";
	arr[1][1][0]="g";
	arr[1][1][1]="h";
	  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << arr[i][j][k] << "\n";
      }
    }
  }
  return 0;
}
