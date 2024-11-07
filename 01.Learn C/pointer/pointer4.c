#include <stdio.h>

int main(){

   float var1 = 10.55;
   float *floatptr = &var1;
   
   printf("var1: %f \nAddress of var1: %d \n\n",var1, &var1);
   printf("floatptr: %d \nAddress of floatptr: %d \n\n", floatptr, &floatptr);
   printf("var1: %f \nValue at floatptr: %f", var1, *floatptr);
}
