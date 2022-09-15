#include<stdio.h>

int main()

{

	char str[100];//declare string size 100

	char *ptr=str;/*declare pointer which points to string(str)*/

	int count=0;	

	printf("Enter the string:\n");

	gets(str);	

	/*Iterate string through last element*/

	while(*ptr!='\0')

	{

		count++;

		ptr++;

	}	

	printf("Length of string= %d",count);

	

	return 0;

}


