#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
FILE *fp;
char ch,file[10];
//clrscr();
printf("Enter file name:");
scanf("%s",file);


fp=fopen(file,"w");   
if(fp==NULL)   
{
printf("File could not open!!");
exit(0);
}

printf("Enter data(* to exit)n");
while(1)
{
ch=getche();
if(ch=='*')     
exit(0);
putc(ch,fp);

}


fclose(fp);  
}


