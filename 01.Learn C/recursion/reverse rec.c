//Reverse recursion
#include <stdio.h>
void rev(int x);

void main()
{
rev(10);
}  

void rev(int x){
if(x<=0){
  printf("ended");
}
else{
printf("%d",x);
rev(x-1);
}

}
