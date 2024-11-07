
 #include<stdio.h>
int main()
{
    char str[] = "saravnan";
    printf("%s",str);
    
    char greetings[] = "Hello World!";
printf("%c", greetings[7]);


char greetings[] = "Hello World!";
greetings[0] = 'J';
printf("%s", greetings);


char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s", greetings);


char message[] = " see you,";
char fname[] = "friends";

printf("%s %s!", message, fname);

char carName[] = "Volvo";
int i;

for (i = 0; i < 5; ++i) {
  printf("%c\n", carName[i]);
}


char carName[] = "saravanan";
int i,j;

for (i = 0; i < 4; ++i) {
     for(j=0;j<9;j++){
     printf("%c",carName[j]);
     
     }
     printf("\n");
     
}
char carName[] = "saravanan";
//printf("%d\n",strlen(carName));
int i,j;

for(i=0;i<9;i++){
   for(j=0;j<=i;j++){
   printf("%c",carName[j]);
}
   printf("\n");
   
   
   
   
   
   
// C program to demonstrate
// example of strrev() function
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50] = "geeksforgeeks";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s", strrev(str));
 
    return 0;
}


// C program to demonstrate
// example of strrev() function
 
#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[50] = "123456789";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s", strrev(str));
 
    return 0;
}



#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    
    char str1[] = "Geeks"; 
    
    char str2[] = "For"; 
   
    char str3[] = "Geeks"; 
  
    
    int result1 = strcmp(str1, str2); 
   
    int result2 = strcmp(str2, str3); 
 
    int result3 = strcmp(str3, str1); 
  
    
    printf("Comparison of str1 and str2: %d\n", result1); 
    
    printf("Comparison of str2 and str3: %d\n", result2); 
 
    printf("Comparison of str3 and str1: %d\n", result3); 
  
    return 0; 
}
