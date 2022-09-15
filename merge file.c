#include <stdio.h>
#include <stdlib.h>
  
int main()
{
   FILE *fp1 = fopen("bun.txt", "r");
   FILE *fp2 = fopen("aseen.txt", "r");
  
   FILE *fp3 = fopen("pathu.txt", "w");
   char c;
  
   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }
  
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);
  
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);
  
   printf("Merged file1.txt and file2.txt into file3.txt");
  
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
