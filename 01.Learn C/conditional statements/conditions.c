//conditional statements

//if condition
#include <stdio.h>
int main(){
	int a = 10;
	int b = 20;
	//if
	if(a<b){
		printf(" Yes a leesthan b:\n");
	} 
	    int number;
//if user input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Simple if statement
    if (number > 0) {
        printf("The number is positive.\n");
    }
    
    
	//if else
    int	x = 5;
	int y = 10;
	if(x>y){
		printf("x greater than y \n");
	}
	else{
		printf(" No x less than y\n");
	}
	
	
	//else if
	int a_1 = 5,b_1 = 10,c_1 = 3;
	if(a_1 == b_1){
		printf("equal");
	}
	else if(a_1 != b_1){
		printf("yes this is not equal\n");
	}
	else{
		printf("all are not same\n");
	}
	
	
	
	
	//else if user define.
	int number=0;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
 // Conditional statement
    if (number <= 0) {
  
    } 
       printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else() {
   
     printf("The number is zero.\n");
    }
    
    //2.ex user define 
    	int a ;
	int b;
      char select;
	printf("Select operations form + - * % /:\n");
	scanf("%c",&select);
	
	printf("Enter the a value:");
	scanf("%d",&a);
	
	printf("Enter the b value:");
	scanf("%d",&b);
	
	if (select == '+'){
	printf("%d",a+b);
        }
        else if (select == '-'){
	printf("%d",a-b);
        }
        else if (select == '*'){
	printf("%d",a*b);
        }
        
            else if (select == '/'){
	printf("%d",a/b);
        }
            else if (select == '%'){
	printf("%d",a%b);
	}
	
	else{
	("invalid input");
	}
	
	//shord hand if else
	//Example 1: Checking if a Number is Even or Odd
	
	  int num = 4;
             (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
             
             
          //Example 2: Finding the Maximum of Two Numbers
              int a = 10, b = 20;
            int max = (a > b) ? a : b;
             printf("The maximum is %d.\n", max);
	
	//Example 3: Assigning a Grade Based on a Score
	
	   int score = 85;
          char grade = (score >= 90) ? 'A' :
                 (score >= 80) ? 'B' :
                 (score >= 70) ? 'C' :
                 (score >= 60) ? 'D' : 'F';
                 printf("The grade is %c.\n", grade);
                 
           //Example 4: Checking if a Character is a Vowel or Consonant      
        char ch = 'v';
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ?
    printf("%c is a vowel.\n", ch) : printf("%c is a consonant.\n", ch);
		
	//short hand  else if is a (Ternary operator)
	float time = 8.30;
      (time < 5.00) ? printf("Good day.\n") :
	  (time>1.00) ? printf("Good afternoon\n"): printf("Good evening.\n");
	
	
//switch case
//1.ex

  int day = 10;
      switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }


//2.ex

    char grade = 'B';

    switch (grade) {
        case 'A':
            printf("Excellent\n");
            break;
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Fair\n");
            break;
        case 'D':
            printf("Poor\n");
            break;
        case 'F':
            printf("Fail\n");
            break;
        default:
            printf("Invalid grade\n");
            break;
    }

//3.ex
  char category = 'B';
    int subcategory = 2;

    switch (category) {
        case 'A':
            switch (subcategory) {
                case 1:
                    printf("Category A, Subcategory 1\n");
                    break;
                case 2:
                    printf("Category A, Subcategory 2\n");
                    break;
                default:
                    printf("Category A, Unknown Subcategory\n");
            }
            break;
        case 'B':
            switch (subcategory) {
                case 1:
                    printf("Category B, Subcategory 1\n");
                    break;
                case 2:
                    printf("Category B, Subcategory 2\n");
                    break;
                default:
                    printf("Category B, Unknown Subcategory\n");
            }
            break;
        default:
            printf("Unknown Category\n");

}

