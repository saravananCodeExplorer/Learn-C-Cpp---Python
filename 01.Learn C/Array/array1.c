//Array

/*Arrays are used to store multiple values in a single variable,
 instead of declaring separate variables for each value.*/
#include<stdio.h>
int main(){

  int myNumbers[] = {5, 10, 15, 20};
      printf("%d ", myNumbers[1]);
      
  //Change an Array Element
  //myNumbers[0] = 33;
  
  int myNumbers[] = {25, 50, 75, 100};
    myNumbers[0] = 33;

    printf("%d", myNumbers[0]);// Now outputs 33 instead of 25
    
  //Loop Through an Array
    int my_Numbers[4] = {25, 50, 75, 100};
      int i;
	  for (i = 0; i < 4; i++) {
            printf("%d\n", my_Numbers[i]);
        }  
		
		
	//Set Array Size
	// Declare an array of four integers:
      int myNumbers_1[4];

        // Add elements
          myNumbers_1[0] = 5;
          myNumbers_1[1] = 6;
          myNumbers_1[2] = 7;
          myNumbers_1[3] = 8;	  
		  
		  printf("%d\n", myNumbers[0]);
 
           return 0; 
  }
