#include <stdio.h>

int main() {
///////////////////////////////////////////////////////////////////////////////
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    
    //2.prime/////////////////////////////////////////////////////////////////
     int n, i, flag = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 0;
    } 
    else {
        for (i = 2; i <= n/2 ; ++i) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    
    ///////////////////////////////////////////////////////////////////
    
     int n, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //for loop.1
      int i;

    // Print numbers from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
     //ex.210X10 table nexted for loop 
         int i,j;
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    ////////////////////////////////////////////
    
    
    
    #include <stdio.h>

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= 16; ++i) {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}










/////////////////////////////////////////////
///factorial//////////////////////////////////////
#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}


//////////////////////////////////////////////////////////////
//while loop ex2
    int i = 0;
    int f=0;

    while (f=1) {
        printf("%d ", i);
        i++;

        if (i >= 10) {
            break; 
        }
    }
    
    
    //do while
        int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);

//break and continue
 int i;

    // Print numbers from 1 to 10, but skip 5
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // Skip the rest of the loop body when i is 5
        }
        printf("%d ", i);
    }

    printf("\n");

    // Print numbers from 1 to 10, but stop at 7
    for (i = 1; i <= 10; i++) {
        if (i == 7) {
            break; // Exit the loop when i is 7
        }
        printf("%d ", i);
    }
    
    return 0;
}

