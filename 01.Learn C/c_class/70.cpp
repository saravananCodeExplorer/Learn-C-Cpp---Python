#include<stdio.h>
int main()
{
	int i,j,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ""%d",n*5);
			n=n+1;
		}
		printf("\n");
	}
	n++;
	return 0;
}
