#include <stdio.h>
int main()
{
	int ch; 
	int count = 0;

	printf("Enter text: \n");

	while ( (ch = getchar()) != EOF)
		count++;

	printf("\nThe number of characters in the input is %d.\n", count);
	return 0;
}
