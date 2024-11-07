//patterns 
#include<stdio.h>
int main(){
/*
5
56
567
5678
56789
    int i;
	int j;
	for (i = 5;i<=9;i++){
		for(j=5;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	*/
	
	/*
	5
	44
	333
	2222
	11111
	
	int x,y;
   	for(x = 5;x>=1;x--){
	  for(y=5;y >= x;y--){
			printf("%d",x);
		}
		printf("\n");
	}
	*/
	/*12345
	  12345
	  12345
	  12345
      12345
      int i,j;
      for(i = 1;i<=5;i++){
      	for(j=1;j<=5;j++){
      		printf("%d",j);
		  }
		  printf("\n");
	  }*/
	  
	  /*
	  54321
	  54321
	  54321
	  54321
	  54321
	 
      int i,j;
      for(i = 5;i>=1;i--){
      	for(j=5;j>=1;j--){
      		printf("%d",j);
		  }
		  printf("\n");
	  }
	  */
	  /*
	  1
	  22
	  333
	  4444
	  55555
	  
	  int i;
	  int j;
	  for(i=1;i<=5;i++){
	  	for(j=1;j<=i;j++){
	  		printf("%d",i);
		  }
		  printf("\n");
	  }
	  */
	  /*
	  1
	  10
	  101
	  1010
	  10101
	  */
	  int i,j;
	  for(i = 1;i<=5;i++){
	  	for(j = 1;j<=i;j++){
	  		if(j % 2 == 0){
	  		   printf("0");
			  }
			  else{
			  	printf("1");
			  }
		}
		  printf("\n");
	  }
	  
	return 0;
}
#include <stdio.h>

int main(){

int i,j,k;
for(i=1;i<=5;i++){
  for(j=1;j<=i;j++){
        printf(" ");
     for(k=1;k<=i;k++){
     printf("%d",k);
            
}     

}
printf("\n");
}
   return 0;

}
 1
 12 12
 123 123 123
 1234 1234 1234 1234
 12345 12345 12345 12345 12345

