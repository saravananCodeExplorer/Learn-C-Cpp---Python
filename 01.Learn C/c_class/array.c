// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array

#include <stdio.h>

int main() {

  int values[5];
  int i;

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for( i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for( i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}
