#include<stdio.h>
#include<math.h>
int main(){
	int number;
	printf("ENTER THE NEGATIVE VALUE:");
	scanf("%d",&number);
	while(number>=0){
			printf("re-ENTER THE NEGATIVE VALUE:");
          	scanf("%d",&number);
		
	}
	printf("THE abs VALUES IS %d:",abs(number));
	
}
