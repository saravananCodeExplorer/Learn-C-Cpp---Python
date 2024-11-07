
//4.Sum of two matrices
// C program to find the sum of two matrices of order 2*2
#include<stdio.h>
int main()
{     
      int i,j;
	int a[2][2],b[2][2],result[2][2];
	
	printf("Enter element of 1st matrices:\n");
	
	for( i=0;i<2;i++){
		for( j=0;j<2;j++){
			printf("Enter a:[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("Enter element of 2nd matrices:\n");
		
		for( i=0;i<2;i++){
			for(j=0;j<2;j++){
				printf("Enter b:[%d][%d]:",i,j);
				scanf("%d",&b[i][j]);
				
			}
		}
		
		for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				result[i][j]=a[i][j]+b[i][j];
			}
		}
		printf("\nDisplaying the sum matrice is:");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("[%d][%d]=>[%d]\n",i,j,result[i][j]);
				
			}
		}
		return 0;
		
}
