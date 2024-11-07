//3.With argument and without return type;
#include<stdio.h>
  void drawline(int n);//function prototype
  int main()
 {
	drawline(30);//argument passing 30
     printf("\n\t\t with argument and without return type:\n");	
   // drawline(100);
    drawline(5);
   void drawline(int n)
   {
 	int i;
 	for (i=1;i<=n;i++){     // function definition  
 		printf(i);
	 }
	 return;//return is optional no use;
   }
