#include<stdio.h>
int main()
{
FILE *fp;
fp = fopen ("first.txt ", "w");
fprintf(fp,"some text");
fclose(fp);
}


