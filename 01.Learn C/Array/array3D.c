//Three dimensional Array

#include<stdio.h>
int main()
{
	//Initialization of a 3d array
	int test[2][3][4] = {
    {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
    
    
    {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}
    
    };
    
    printf("%d",test[1][2][3]);
    //Change Elements in a 3D Array
    test[0][1][2] = 200;
   // printf("%d\n", test[0][1][2]);// Now outputs 9 instead of 200
    
    //Loop Through a 3D Array
    int i,j,k;
    for(i=0;i<=1;i++){
    	for(j=0;j<3;j++){
    		for(k=0;k<4;k++){
    			printf("%d\n",test[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	
}
