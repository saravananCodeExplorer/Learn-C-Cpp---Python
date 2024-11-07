#include<stdio.h>
int main()
{
	//formula
	//1).pir*2h
	float pi=3.14,r = 5,h = 10;
	 float result;
	result=pi*r*r*h;
	printf("pir*2h:\n%f\n",result);
	
	
	//2).4pir*2h
	float pi_ = 4,r_ = 2,h_ = 20; 
	      pi_ *= 3.14;
	float result_  = pi_*r_*r_*h_;
	      printf("4pir*2h:\n%f\n",result_);
	
	//3).(l+w)
	float l,w;
	 printf("'(l+w)' Enter a value l:");
	 scanf("%f",&l);
	 printf("'(l+w)'' Enter a value w:");
	 scanf("%f",&w);
	 float store = (l+w);
	 printf(" The total sum is:%f\n",store);
	 
	 //4). 1/2bh
	 float off = 0.5;
	 float b,h_1;
     printf(" '1/2(bh)' formula'Enter a value b:");
	 scanf("%f",&b);
	 printf("'1/2(bh)' formula'Enter a vlaue h:");
	 scanf("%f",&h_1);
	 float Total = off*b*h_1;
	 printf("'1/2(bh)' the total sum is:%f\n",Total);
	 
	 //5).1/2(l+w)
	 float off_Val = 0.5;
	 float l_1,w_1;
	  printf("'1/2(l+w)'Enter a value l_1:");
	 scanf("%f",&l_1);
	 printf("'1/2(l+w)'Enter a vlaue h:");
	 scanf("%f",&w_1);
	 float Total_1 = off_Val*l_1*w_1;
	 printf("'1/2(l+w)' total sum is:%f\n",Total_1);
	 
	 //6).a*2+ab+b*2
	 float a_ = 100,b_ = 200;
	 float rlst = a_*2+a_*b_+b_*2;
	 printf("the final result is:%f\n",(rlst));
	 
	 
	 
	 
	 
   return 0;	      
	      
}
