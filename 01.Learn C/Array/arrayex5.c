//3d array simply 3*3
//multiplecation of two
#include<stdio.h>
int main(){
   float a[1][2][3],b[1][2][3],result[1][2][3];
   int i,j,k;
   printf("Enter the element of 1st matrices :\n");
   
   for(i=0;i<1;i++){
   	for(j=0;j<2;j++){
   		for(k=0;k<3;k++){
   			printf("Enter a%d%d%d:",i+1,j+1,k+1);
   			scanf("%f",&a[i][j][k]);
   			
		   }
	   }
   }
   printf("Enter the 2nd matrices :\n");
    for(i=0;i<1;i++){
    	for(j=0;j<2;j++){
    		for(k=0;k<3;k++){
    			printf("Enter b%d%d%d:",i+1,j+1,k+1);
    			scanf("%f",&b[i][j][k]);
			}
		}
	}
	
	for(i=0;i<1;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				result[i][j][k]=a[i][j][k]*b[i][j][k];
			}
		}
	}
	printf("The sum of matrice is :");
	for(i=0;i<1;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){
				printf("%.1f",result[i][j][k]);
				if(k==2){
					printf("\n");
				}
			}
		}
	}
}
