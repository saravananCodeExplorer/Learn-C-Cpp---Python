#include<stdio.h>
int perfect()
{
     int i=1,sum=0,n=28;
      while(i<n)
     {
          if(n%i==0)
               sum=sum+i;
          i++;
     }
     if(sum==n)
          printf("\n%d is a Perfect Number.",i);
     else
          printf("\n%d is NOT a Perfect Number",i);
}
int main()
{
    
     perfect();
     return 0;
}
