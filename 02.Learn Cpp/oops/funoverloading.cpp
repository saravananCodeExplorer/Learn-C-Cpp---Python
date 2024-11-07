#include <iostream>
using namespace std;
 
class Data {
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(int  f,int a) {
        cout << "Printing float: " << f<<a << endl;
      }
      void print(string c) {
        cout << "Printing character: " << c << endl;
      }
};
class bike
{
	public:
	void print(int price,int year)
	{
		cout<<"price"<<price<<endl;
		cout<<"year"<<year<<endl;
	}
};

int main() {
   bike b;
   Data d;
 
   // Call print to print integer
   d.print(5);
   
   // Call print to print float
   d.print(7,6);
   
   // Call print to print character
   d.print("Hello C++");
   
   b.print(50000,2020);
 
   return 0;
}
