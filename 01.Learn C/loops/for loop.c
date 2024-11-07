//for loop
#include<stdio.h>
int main(){

   int i;
    for(i = 1;i<5;i++){
	  printf("%d\n",i);
    }
    //for loop using break and continue;
    int m;
    for(m = 1;m<=5;m++){
    	if(m == 4){
    		break;
    		
	}
	printf("%d\n",m);
	}
	 int n;
    for(n = 1;n<=5;n++){
    	if(n == 2){
    		continue;
    		
		}
		printf("%d\n",n);
	}
	//nested for loop
	int x,y;
	for(x= 1;x<=4;x++){
		printf("Outer for:%d\n",x);
		for(y = 1;y<=3;y++){
			printf("inner for loop:%d\n",y);
		}
	}
	
	

	return 0;
}
