#include<stdio.h>
#include <string.h>
int isPlaindrome(char str[])
int main()
{

  char str[100];
  printf("Enter a string:");
  scanf("%s",&str);
  
  
  if(isPalindrome(str)){
  printf("The string is a palindrome\n");
  }
  else{
  printf("The string is not a palindrome\n");
  }
	
   return 0;
}

 isPalindrome(char str[]){
    int left =0;
    int right = strlen(str)-1;
    
    
    while(left<right){
    if(str[left]!=str[right]){
    return 0;
    }
    left++;
    right--;
    
    }
    return 1;
    
}


