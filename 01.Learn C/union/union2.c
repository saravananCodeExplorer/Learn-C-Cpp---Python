#include <stdio.h>
union carsales {
   int month;
   int saleamount;
}; 

int main() {
union carsales j;
	printf("Enter month");
	scanf("%d",&j.month);
	 printf("Month = %d\n", j.month);
  if(j.month==1||j.month==3||j.month==5||j.month==7||j.month==9||j.month==11)
  {
  	j.saleamount=1000;
  	printf("Amount of Sales = %d", j.saleamount);
  }
  else
  {
  	j.saleamount=2000;
  	printf("Amount of Sales = %d", j.saleamount);
}
return 0;
}
