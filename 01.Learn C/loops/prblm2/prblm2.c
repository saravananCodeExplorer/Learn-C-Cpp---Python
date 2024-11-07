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



















#include <stdio.h>

int main() {
    int number, i = 1;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        while (i <= number) {
            fact *= i;
            i++;
        }
        printf("The factorial of %d is %llu\n", number, fact);
    }

    return 0;
}
