//Recursion
#include<stdio.h>
void func();
void main()
{
   func();
}   

func(){
   printf("Rcursion means function call itself:");
   
   func();
}
   


