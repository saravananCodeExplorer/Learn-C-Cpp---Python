#include <stdio.h>

int main() {
//1 examles.
  int age = 13;
    int hasLicense = 1; // 1 for true, 0 for false

    if (age >= 18) {
    
        if (hasLicense) {
            printf("You can drive.\n");
        } else {
            printf("You need a license to drive.\n");
        }
        
    } else {
        printf("You are too young to drive.\n");
    }


//2.exmple
    int number = 49;

    if (number > 0) {
        if (number < 50) {
            printf("Number is between 1 and 50.\n");
        } else {
            printf("Number is 50 or greater.\n");
        }
    } else {
        printf("Number is 0 or negative.\n");
    }
    
    
    ////////////////////3.example

    int x = 5;
    int y = 30;

    if (x > 5) {
        if (y > 15) {
            printf("x is greater than 5 and y is greater than 15\n");
        } else {
            printf("x is greater than 5 but y is not greater than 15\n");
        }
    } else {
        if (y > 15) {
            printf("x is not greater than 5 but y is greater than 15\n");
        } else {
            printf("x is not greater than 5 and y is not greater than 15\n");
        }
    }

///////////////////////////4.example

    int a = 5, b = 10, c = 15;

    if (a < b) {
    
        if (b < c) {
            if (a < c) {
                printf("a is the smallest\n");
            }
             else {
                printf("c is smaller than a\n");
            }
        }
         else {
            printf("b is not smaller than c\n");
        }
        
    } else {
        printf("a is not smaller than b\n");
    }
    
//////////////////////////////5.example .

    int score =55;

    // Input the score
    printf("Enter the score: ");
    scanf("%d", &score);

    // Check the score and determine the grade
    if (score >= 90) {
        if (score >= 95) {
            printf("Grade: A+\n");
        } else {
            printf("Grade: A\n");
        }
    } else if (score >= 80) {
        if (score >= 85) {
            printf("Grade: B+\n");
        } else {
            printf("Grade: B\n");
        }
    } else if (score >= 70) {
        if (score >= 75) {
            printf("Grade: C+\n");
        } else {
            printf("Grade: C\n");
        }
    } else if (score >= 60) {
        if (score >= 65) {
            printf("Grade: D+\n");
        } else {
            printf("Grade: D\n");
        }
    } else {
        printf("Grade: F\n");
    }

    return 0;
}
//////////////////////////////6.example

#include <stdio.h>

int main() {
    double amount, discount;
    printf("Enter the amount spent: ");
    scanf("%lf", &amount);

    if (amount > 1000) {
        if (amount > 2000) {
            discount = amount * 0.20;  // 20% discount for amount > 2000
        } else {
            discount = amount * 0.10;  // 10% discount for amount between 1000 and 2000
        }
    } else {
        if (amount > 500) {
            discount = amount * 0.05;  // 5% discount for amount between 500 and 1000
        } else {
            discount = 0;  // No discount for amount <= 500
        }
    }

    printf("Discount: $%.2lf\n", discount);
    return 0;
}


