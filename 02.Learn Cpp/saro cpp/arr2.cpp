//Multi-Dimensional Arrays
#include<iostream>
using namespace std;
int main(){

string letters[2][4] = {{ "Aa", "Bb", "Cc", "Dd" },{ "Ee", "Ff", "Gg", "Hh" }};


cout <<letters[0][2]<<endl; 

letters[1][1]="Zz";

cout<<letters[1][1]<<endl;

for (int i = 0; i < 2; i++) {
  for (int j = 0; j < 4; j++) {
    cout << letters[i][j] << "\n";
  }
} 

string letter[2][2];
letter[0][0]="saro";
letter[0][1]="rajesh";
letter[1][0]="kadal";
letter[1][1]="harish";

for(int i=0;i<2;i++){
	for(int j=0;j<2;j++){
		cout<<letter[i][j]<<endl;
	}
	cout<<"\n";
	}
return 0;
}
