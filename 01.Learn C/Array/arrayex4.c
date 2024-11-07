//Array3D
//Sum of two matrices
#include<stdio.h>
int main()
{
	int i,j,k;
	float a[2][3][4],b[2][3][4],store[2][3][4];
	
	printf("Enter the element of 1st matrices \n");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				printf("Enter a%d%d%d:",i+1,j+1,k+1);
				scanf("%f",&a[i][j][k]);
			}
		}
	}
	printf("Enter the element of 2nd matrices\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				printf("Enter b%d%d%d :",i+1,j+1,k+1);
				scanf("%f",&b[i][j][k]);
			
			}
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				store[i][j][k] = a[i][j][k]+b[i][j][k];
				
			}
		}
	}
	printf("The sum of matrice is :\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			for(k=0;k<4;k++){
				printf("%.1f",store[i][j][k]);
				if(k==3){
					printf("\n");
					
				}
			}
		}
	}
	return 0;
	
}
