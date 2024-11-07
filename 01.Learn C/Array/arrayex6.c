// Three-dimensional array
//user define the value how to store the array.
//// C Program to store and print 12 values entered by the user.
#include<stdio.h>

int main(){
	int arr[2][3][2];
	int i,j,k;
	
	printf("Enter 12 values: \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				printf("Enter value%d%d%d: ",i,j,k);
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	// Printing values with the proper index.
	printf("\n Display the values:\n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<2;k++){
				printf("arr[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
			}
		}
	}
	return 0;
}
