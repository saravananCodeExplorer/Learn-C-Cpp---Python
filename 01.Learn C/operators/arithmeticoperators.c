//operators
// 1.Arithmetic operators;
#include<stdio.h>
int main(){
   //addition;+operator
   int a = 10;
   int b = 20;
   int c = a+b;
   printf("Get the addition output is:%d\n",c);

   //subtraction;- operator
   int Num1 = 200;
   int Num2 = 100;
   int Total = Num1-(Num2);
   printf("Get the subtraction output is:%d\n",Total);
   
   //Multiplication;* operators
   int Val_1 = 20;
   int Val_2 = 30;
   int Total_Val = Val_1*Val_2;
     printf("Get the Multiplication output is:%d\n",Total_Val);
     
   //divsion;/ operators
   int Val_3= 20;
   int Val_4 = 5;
   int Total_ = Val_3/Val_4;
     printf("Get the Division output is:%d\n",Total_);
     
   //Modules; % operators
   int x =10;
   int y = 3;
   int z = x % y;
     printf("Get the modules output is:%d\n",z);
     
   //Increment;++ operator
   int m = 5;
      printf("Get the pre increment output is:%d\n",++m);
      printf("Get the post increment output is:%d\n",m++);
      printf("Get the post increment output is:%d\n",m);
      
	//Example
	int add = 2;
	int result = ++add + 5 + add++ + 7 + add;
	printf("the result is: %d\n",result);
	
   //Decrement;-- operator
       int n = 5;
      printf("Get the pre decrement output is:%d\n",--n);
      printf("Get the post decrement output is:%d\n",n--);
      printf("Get the post decrement output is:%d\n",n);
      
    //Example
	int sub = 5;
	int result_ = --sub + 1 + sub-- + 4 + sub;
	printf("the result is: %d\n",result_);
      
    return 0;
   

}
