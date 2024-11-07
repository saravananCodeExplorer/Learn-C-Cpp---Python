#include <stdio.h>  
int fact (int n);  
int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);  
    f = fact(n);  
    printf("factorial = %d",f);  
}  
int fact(int n)  
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }  
}  

/*
fact(5)
    fact(4)
        fact(3)
            fact(2)
                fact(1) -> 1
            fact(2) -> 2 * 1 = 2
        fact(3) -> 3 * 2 = 6
    fact(4) -> 4 * 6 = 24
fact(5) -> 5 * 24 = 120
*/
