//5.Without argument and with retutn type;
#include<stdio.h>
float getInput();
int main()
{
	float f1,f2;
	f1 = getInput();
	f2 = getInput();
	printf("\nProduct of two numbers is %.0f",f1*f2);
	
	
}
 float getInput()
 {
 	float f;
 	printf("Enter a number: ");
 	scanf("%f",&f);
 	
 	return f;
 }

