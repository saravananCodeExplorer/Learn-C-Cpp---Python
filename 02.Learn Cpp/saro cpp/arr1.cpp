#include<iostream>
using namespace std;
int main(){
////	C++ Arrays
string cars[4] = {"Volvo", "BMW", "Ford", "Mahindra"};
//Access the Elements of an Array
cout << cars[0]<<endl;

//Change an Array Element
cars[1]="R15";
cout<<cars[1]<<"\n";

//Loop Through an Array
int i;
for(i=0;i<5;i++){
	cout<<cars[i]<<endl;
}
//declare the array insert the value
   string car[5];
  car[0] = "Volvo";
  car[1] = "BMW";
  car[2] = "Ford";
    car[3] = "Maruthi";
 car[4] = "Tesla";
  
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }


int myNumbers[5] = {10, 20, 30, 40, 50};
  int j;
for ( j= 0; j < 5; j++) {
  cout << myNumbers[j] << "\n";
}

//Get the Size of an Array

int myNumber[5] = {10, 20, 30, 40, 50};
cout << sizeof(myNumber);

return 0;
}
