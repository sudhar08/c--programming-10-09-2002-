#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   char h[60];
   FILE *fptr;
   printf("enter the file name");
   scanf("%s",h);
   // use appropriate location if you are using MacOS or Linux
   fptr = fopen(h,"r");

   if(fptr == NULL)
   {
      printf("The file is not found");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);

   return 0;
}

