#include <stdio.h>
int main()
{
	char ch;
	int col, row;
	int sum = 0;

	scanf("%c", &ch);
	printf("\n");

	for (col=0; col<5; col++)
	{ 
		for (row = 0; row < 4 - col; row++)
			printf(" "); 
		for (row = 0; row < col; row++)
			printf("%c", ch + row);
		for (row = row++; row >= 0; row--)
			printf("%c", ch + row);
		for (row = 0; row < col + 5; row++)
			printf(" "); 
		printf("\n"); 
	}

	return 0;
}
