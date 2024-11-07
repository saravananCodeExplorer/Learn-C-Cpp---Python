//lopping
#include<stdio.h>
int main(){
//while loop
  int i = 1;
   while(i<=5)
   {
   	if(i == 3)
   	{	   
   		
   	continue;   
	printf("%d\n",i);
	}
	
	i++;

   }	
   
   /*
   int j = 2;
   while(j<=10){
   	printf("%d\n",j);
   	j++;
   }
  // example
  //reverse numbers in while loop
  int num = 123,t,s = 0;
  while(num){
  	t = num % 10;
  	s = s*10 + t;
  	num = num / 10;
  	printf("%d\n",s);
  	
  }
   */
   
   return 0;
}


#include <stdio.h>


int main() {

int number;
printf("Enter a number greater than 10 :");
scanf("%d",&number);

while(number<=10){

printf("The number id not greater than 10. Please Try Again:");
scanf("%d",&number);
}

printf("Thank you!:) you entered %d,which is greater than 10.\n", number);

  
   
   return 0;
}
