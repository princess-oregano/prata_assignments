#include <stdio.h>
int main()
{
	int col, row;
	int sum = 0;

	for (col=0; col<6; col++)
	{
		sum = sum + col;
		for(row=0; row<=col; row++)
			printf("%c", 'A' + row + sum);
		printf("\n");
	}

	return 0;
}
