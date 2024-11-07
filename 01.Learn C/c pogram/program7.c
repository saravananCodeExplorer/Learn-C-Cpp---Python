//7.Write a C program to generate the following pattern based on the number 5:
54321
54312
54123
51234
12345


#include <stdio.h>

int main(){

int i,j,k;
for(i=1;i<=5;i++)
{
  for(j=5;j>i;j--)
  {
     printf("%d",j);
  }
  
  for(k=1;k<=i;k++)
  {
     printf("%d",k);  
  }
  printf("\n");
}

return 0;
}

