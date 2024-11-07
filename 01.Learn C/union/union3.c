
#include <stdio.h>
int main(){
 union un{
     int a;
     char b;
     float c;
     double d;
 
 };
 
union un o;
o.a=10;
o.b='B';
o.c =66.66;
o.d= 777.77777;

printf("%d\n",sizeof(o));

printf(" memory int:%d\n",sizeof(o.a));
printf("memory char:%d\n",sizef(o.b));
printf("memory float:%d\n",sizeof(o.c));
printf("memory double:%d\n",sizeof(o.d));
  
  return 0;
}

