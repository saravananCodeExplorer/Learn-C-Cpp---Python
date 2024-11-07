// Two-dimensional array
//user define the value how to store the array.
//// C Program to store and print 6 values entered by the user.
#include<stdio.h>
int main()
{
	int arr[3][3];
	int i,j;
	printf("Enter the six values\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter the value%d%d:",i,j);\
			
			
			
			scanf("%d",&arr[i][j]);
		}
	}
	printf("After display the values is :\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
		}
	}
}
