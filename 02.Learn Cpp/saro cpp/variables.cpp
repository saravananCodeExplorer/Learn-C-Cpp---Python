#include<iostream>
using namespace std;
int main(){
	//1.declare a variable assign the value
	int n= 10;
	cout<<n<<endl;
	//2.You can also declare a variable without assigning the value,
	// and assign the value later:
	int m;
	m=100;
	cout<<m;
	
	//3.you can also assign the one variable to another variables
	int a=6;
	int b=3;
	a=b;
	cout <<"\n"<<a;
	//4.copy values to empty values
	int q=10;
	int w;
	w=q;
	cout<<"\n"<<w<<"\n";
	
	//5.add two variables using '+' operators;
	float val1 = 100.4444;
	int val2 = 200;
//	float val = val1+val2;
	cout<<val1+val2<<"\n";
	
	//6.declare multiple variables;
	int i=10,j=20,k=30;
	cout<<i+j+k;
	//7.declare multiple variables to single values;
	int g,h,f;
	g=h=f=222;
	cout<<endl<<g+h+f;
	
	//8.constant
    const int ww =400;
      cout<<"\n"<<ww;
	
	
}
