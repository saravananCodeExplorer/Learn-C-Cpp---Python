#include <stdio.h>
void swapnum( int var1, int var2 )
{
   int tempnum ;
   /*Copying var1 value into temporary variable */
   tempnum = var1 ;

   /* Copying var2 value into var1*/
   var1 = var2 ;

   /*Copying temporary variable value into var2 */
   var2 = tempnum ;
   printf("\nAfter swapping: %d, %d", var1, var2);

}
int main( )
{
    
    /*calling swap function*/
    swapnum(32,42 );
    
}
