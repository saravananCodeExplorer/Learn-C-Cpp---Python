//ex1

#include <stdio.h>

int main() {
    int N, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

if(N<=0){
printf("re enter");
}
else{

    while (i <= N) {
        sum += i;//sum = sum + i
        i++;
    }

    printf("Sum of first %d natural numbers is %d\n", N, sum);
}
    return 0;
}



//ex2.while
#include<stdio.h>  
int main(){    

int i=1,number=0;    
printf("Enter a number: ");    
scanf("%d",&number);    
while(i<=10){    
printf("%d \n",(number*i));    
i++;    
}    
return 0;  
} 

//ex4
int main() {
    int number, i = 1;
    int factorial = 1;


    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
       
        while (i <= number) {
            factorial *= i;//fact = fact*i > 1*1>1*2>2*3>3*4>4*5
            i++;
        }

        
        printf("Factorial of %d = %d\n", number, factorial);
    }

    return 0;
}  
