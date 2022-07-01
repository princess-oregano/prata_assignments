#include <stdio.h>
#define STOP '#'
int main()
{
	char ch;
	int i = 0;

	printf("Enter a line of symbols(# to end the input): ");

	while ( (ch = getchar()) != STOP)
	{
		i++;
		if ( i % 8 == 0)
			printf("%-5d\n", ch);
		else printf("%-5d ", ch);
	}

	printf("\nDone.\n");

	return 0;
}
