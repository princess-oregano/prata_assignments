#include <stdio.h>
int main()
{
	int col, row;

	for (col=0; col<6; col++)
	{
		for(row=0; row<=col; row++)
			printf("%c", 'F' - row);
		printf("\n");
	}

	return 0;
}
