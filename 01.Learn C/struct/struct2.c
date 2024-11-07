#include<stdio.h>
int main (){
struct student{
   char name[25];
   int rollno;
   int mark;
};
 
struct student s1;
printf("Enter Name:");
scanf("%s",&s1.name);


printf("Enter rollno:");
scanf("%d",&s1.rollno);

printf("Enter mark:");
scanf("%d",&s1.mark);

printf("\nName :%s",s1.name);
printf("\nrollno :%d",s1.rollno);
printf("\nmark :%d",s1.mark);



return 0;
}
