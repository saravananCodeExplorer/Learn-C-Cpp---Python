#include<stdio.h>
void rect_area()
{
	int l,w;
	l=2;w=4;
     int area;
     area=l*w;
     printf("%d",area);
     
}
void rect_perimeter()
{
	int l,w;
	l=2;w=4;
     int p;
     p=2*(l+w);
      printf("\n%d",p);
     
    
}
int main()
{
     
     rect_area(); // calling function rect_area
     rect_perimeter(); // calling function perimeter
     
     return 0;
 }
