//reverse numbers:
#include<stdio.h>
int main()
{
//	int Num = 1223;
//	int t;
//	int s = 0;
//	while (Num) 
//	{
//		t = Num % 10;
//		s = s * 10 + t;
//		Num = Num / 10;
//		
//	}
//	printf("Reverse Numbers:%d\n ",s);	
//	return 0;

//for loop;

    //int Val = 10;
    //int i = 1;
   // for(i = 1;i<=Val;i++){
    //	if(i == 5){
    //		continue;
    	
    //		}
  //  		if(i == 8){
    //			break;
    				
//			}
//	printf("%d\n",i);
//	}
//	return 0;
//pattern even number

    int Val =11;
    int i,j;
    
    if (Val % 2 != 0) {
        printf("This is an odd number: %d\n", Val);
    } else {
        printf("This is an even number: %d\n", Val);
        return 0;
    }
    
    for ( i = 1; i <= Val; i+=2) {
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}







