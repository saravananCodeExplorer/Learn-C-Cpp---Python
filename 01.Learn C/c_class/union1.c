#include <stdio.h>

union Data{
   int i;
   float f;
   char str[20];
};

int main(){
   union Data data;        
   printf("Memory occupied by Union Data: %d \n", sizeof(data));
   return 0;
}
