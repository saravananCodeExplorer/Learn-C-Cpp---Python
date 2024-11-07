//2.What does this program do, and what will be its output if the user inputs the following integer: 12345?
#include <stdio.h>

int main() {
    int number;  

     int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}


