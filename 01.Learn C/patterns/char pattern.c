#include<stdio.h>
int main(){
/*
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE

	int i,j;
	for(i =1;i<=5;i++){
	    for(j=1;j<=5;j++){
	    	printf("%c",64+j);
		}
		printf("\n");
	}
	*/
	
	/*A
	  A B
	  A B C
	  A B C D
	  A B C D E
	int i,j;
	for(i=1;i<=5;i++){
		for(j =1;j<=i;j++){	
			printf("%c",64+j);
		}
		printf("\n");
	}*/
    /*A
      BB
      CCC
      DDDD
      EEEEE

		int i,j;
	for(i=1;i<=5;i++){
		for(j =1;j<=i;j++){	
			printf("%c",64+i);
		}
		printf("\n");
	}
		*/
	
		
		/*
		E
        DD 
        CCC
        BBBB
        AAAAA
		

		int i,j;
		for(i=69;i>=65;i--){
			for(j=69;j>=i;j--){
				printf("%c",i);
			}
			printf("\n");
		}*/
		/*
		ABCDE
		ABCD
		ABC
		AB
		A
		
		*/
		int i,j;
		for(i=5;i>=1;i--){
			for(j=1;j<=i;j++){
				printf("%c",64+j);
			}
			printf("\n");
		}
		
	

	return 0;
}



