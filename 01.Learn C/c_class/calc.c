#include<stdio.h>
int main()
{
	int num1,num2,result;
	char ch;
	printf("enter operator");
	scanf("%c",&ch);
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);

	if(ch=='+')
	{
		result=num1+num2;
		printf("%d",result);
	}
	return 0;
}
