

// C Program to create a file
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    // file pointer
    FILE* fptr;
    char name[20];
    // creating file using fopen() access mode "w"
    fptr = fopen("file.txt", "w");
 
    // checking if the file is created
    if (fptr == NULL) {
        printf("The file is not opened. The program will "
               "exit now");
        exit(0);
    }
    /*else {
        printf("The file is created Successfully.");
    }*/
    printf("Enter name: ");
   scanf("%s",&name);

   fprintf(fptr,"%s",name);
   fclose(fptr);

   
    return 0;
}
