#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int lower, upper, other;

	lower = upper = other = 0;
	printf("Enter text:\n");

	while ( (ch=getchar()) != EOF)
	{
		if (islower(ch))
			lower++;
		else if (isupper(ch))
			upper++;
		else other++;
	}
	printf("\nThis text has %d uppercase letters, %d lowercase letters,\n"
		"and %d other symbols.\n", upper, lower, other);
	return 0;
}

