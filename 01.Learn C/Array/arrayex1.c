// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include<stdio.h>
int main()
{
	int values[5]={};
	int i,j;
	  // taking input and storing it in an array
	printf("Enter five Integers: ");
	for(i=0;i<5;i++){
		scanf("%d",&values[i]);
	}
	  // printing elements of an array
	printf("Displaying the Integers: ");
	for(j=0;j<5;j++){
		printf("%d\n",values[j]);
	}
	
	return 0;

}

