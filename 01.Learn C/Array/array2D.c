//Two-Dimensional Arrays
#include<stdio.h>
int main()
{
	////////Access the Elements of a 2D Array
	int matrix_[2][3] = { {1, 4, 2}, {3, 6, 8} };
         printf("%d", matrix_[1][2]);  // Outputs 4
         
	////Change Elements in a 2D Array
	
  int matrix[2][3] = { {10, 47, 24}, {43, 65, 38} };
  matrix[0][0] = 9;
  matrix[1][1] =22;
  printf("\n%d", matrix[0][0]);  // Now outputs 9 instead of 10
  
 //////// //Loop Through a 2D Array
   int matrix_1[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
     for (i = 0; i < 2; i++) {
       for (j = 0; j < 3; j++) {
           printf("\n%d\n", matrix_1[i][j]);
    }
  }
}
