//2.Function without argument and without return type:
#include<stdio.h>
void drawline();  // function prototype
main()
{ 
    drawline();   // function call
          printf("\n\t\t without argument and without return type:\n");	
    drawline();
}
 void drawline()
 {
 	int i;
 	for (i=1;i<=20;i++){
 		printf("#");
	 }
	 return;//return is optional no use;
 }
