//1.What does this program do, 
//and what will be its output if the user inputs the following sequence of numbers: 8, 9, 15?
#include <stdio.h>

int main() {
    int number;  

    printf("Enter a number greater than 10: ");
    scanf("%d", &number); 

    
    while (number <= 10) {
        printf("The number is not greater than 10. Try again.\n");
        printf("Enter a number greater than 10: ");
        scanf("%d", &number); 
    }
   

    printf("Thank you! You entered %d, which is greater than 10.\n", number);

    return 0;
}


