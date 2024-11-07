#include <stdio.h>
union carsales {
   int month;
   int saleamount;
} j;

int main() {
	printf("Enter month");
	scanf("%d",&j.month);
  if(j.month==1||j.month==3||j.month==5||j.month==7||j.month==9||j.month==11)
  {
  	j.saleamount=100000;
  }
  else
  {
  	j.saleamount=200000;
  }

   

   printf("Month = %d\n", j.month);
   printf("Amount of Sales = %d", j.saleamount);
   return 0;
}
