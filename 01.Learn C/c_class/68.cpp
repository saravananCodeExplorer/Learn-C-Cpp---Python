#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=1;j--)
		{
			if(i=i%2)
			{
				printf( " " "%d",i);
			}
			printf("\n");
		}
	}
	return 0;
}
