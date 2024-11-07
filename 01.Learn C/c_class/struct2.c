#include <stdio.h>
struct student {
   char name[50];
   int salary;
};

// function prototype
void display(struct student s);

int main() {
   struct student s1;

   printf("Enter name: ");

   // read string input from the user until \n is entered
   // \n is discarded
   scanf("%s", s1.name);

   printf("Enter salary: ");
   scanf("%d", &s1.salary);

   display(s1); // passing struct as an argument

   return 0;
}

void display(struct student s) {
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nAnnual income is: %d", s.salary*12);
}
