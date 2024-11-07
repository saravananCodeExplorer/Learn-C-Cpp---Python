#include<iostream>
using namespace std;
class employee
{
	public:
	int id;
	string name;
	float salary;
	employee(int i,string n,float s)
	{
		id=i;
		name=n;
		salary=s;
		
	}
	void display()
	{
		cout<<id<<" "<<name<< " "<<salary<<endl;
	}
};
int main()
{
	int a,b;
	string c;
	cout<<"enter id";
	cin>>a;
	cout<<"enter name";
	cin>>c;
	cout<<"enter salary";
	cin>>b;
		
	employee e1=employee(a,c,b);
	e1.display();
}
