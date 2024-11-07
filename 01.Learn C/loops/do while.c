//do while
#include<stdio.h>
int main(){
	// true condition
	/*int i = 1;
	do{
		printf("%d\n",i);
	
		if(i == 3){
			break;
		}
		i++;
	}while(i<=5);*/
	

	//false condition
	int j = 10;
	do{
		printf("%d\n",j);
		if(j == 20){
	     j+=20;
	     continue;
		}
		j+=10;
	}while(j<=50);
	
	
 int i = 1;
  
  do {
    printf("%d\n", i);
    i++;
  }
  while (i < 5);
	
	return 0;
	
}
