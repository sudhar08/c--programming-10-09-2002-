#include <stdio.h>
int main() {
	char name[50];
	int marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("C:/Users/Asif Hussain/Documents/aseen.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter roll number: ");
		scanf("%d",&marks);
		fprintf(fptr,"\nName: %s \nroll_number=%d \n",name,marks);
	}
	fclose(fptr);
	return 0;
}

