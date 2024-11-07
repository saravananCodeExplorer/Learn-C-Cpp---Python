//function

// User-defined function

#include<stdio.h>
int add(int x,int y);    // function prototype

int main()
{
	int a,b,c;//a,b,c local variable
	printf("Enter the a value:");
	scanf("%d",&a);
	printf("Enter the b value:");
	scanf("%d",&b);
	c=add(a,b);//add function call//a,b actual args/parameters
	printf("%d",c);
	
}
//add called function 
//int x,int y formal arg/parameters
   
   int add(int x,int y)                         
{
	int z;     // function definition  
	z = x+y;
	return z;         // return statement
}


//Advantages of functions
//Reusability of code
//Easy maintance
