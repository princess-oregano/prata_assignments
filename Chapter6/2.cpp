#include <stdio.h>
int main()
{
	int row, col;

	for (col=0; col<5; col++) 
	{
		for (row=0; row <= col; row++)
			printf("$");
		printf("\n");
	}

	return 0;
}
