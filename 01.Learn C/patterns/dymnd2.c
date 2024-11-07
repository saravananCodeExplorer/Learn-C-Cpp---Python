#include <stdio.h>

int main(){

int i,j,k=0;
for(i=1;i<=5;i++)
{
  for(j=1;j<=5-i;j++)
       {
       printf(" ");
       }
        
     for(k=5;k>=5-i+1;k--)
     {
     printf("%2d",k);
       }    
     printf("\n");
}
   return 0;

}
/*
     5
    5 4
   5 4 3
  5 4 3 2
 5 4 3 2 1
 
 */
	
