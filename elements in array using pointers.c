#include <stdio.h>

int main()
{
	int Size, i;

	printf("Please Enter the Array size = ");
	scanf("%d", &Size);

	int arr[Size];

	int *parr = arr;

	printf("Enter the Array Elements = ");
	for (i = 0; i < Size; i++)
	{
		scanf("%d", parr + i);
	}

	printf("Printing Array Elements using Pointer\n");
	for (i = 0; i < Size; i++)
	{
		printf("%d  ", *(parr + i));
	}
	printf("\n");
}

     
