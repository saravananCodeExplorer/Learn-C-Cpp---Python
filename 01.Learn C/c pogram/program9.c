//9. Calculate the Sum of Even Numbers Between 1 and N
#include <stdio.h>

int main() {
    int n = 20; 
    int sum = 0;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    
    }

    printf("Sum of even numbers between 1 and %d is %d\n", n, sum);
    return 0;
}
//Calculate the Sum of All Odd Numbers Between 1 and a Given Number
#include <stdio.h>

int main() {
    int upper_limit = 20; 
    int sum = 0;

    for (int i = 1; i <= upper_limit; i += 2) {
        sum += i;
    }

    printf("Sum of odd numbers between 1 and %d is %d\n", upper_limit, sum);
    return 0;
}

       
