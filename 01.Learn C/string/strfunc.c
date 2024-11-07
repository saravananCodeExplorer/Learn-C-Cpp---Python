#include <stdio.h>
#include <string.h>
 
int main() {
//str length and sizeof

  char alphabet[] = "ABCDEF";
  printf(" lenth is:%d\n", strlen(alphabet));
   printf("size of:%d\n", sizeof(alphabet));
   
      char alphabet_1[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d\n", strlen(alphabet_1));   
printf("%d\n", sizeof(alphabet_1));  
  
  //2.strcmp
char str1[] = "Akhilesh";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
  
  
  
//3.strcpy
//To copy the value of one string to another, you can use the strcpy() function:

char str1[20] = "c and c++ !";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);

//4.strrev
    char str[50] = "123456789";
 
    printf("The given string is =%s\n", str);
 
    printf("After reversing string is =%s", strrev(str));*/
 
 
 //5.strcat
      char str1[20] = "Hello ";
  char str2[] = "World!";
 
  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2);
  
  // Print str1
  printf("%s", str1);*/
  return 0;
}

