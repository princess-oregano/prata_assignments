#include <stdio.h>
#include <ctype.h>
#define STOP '#'
int main()
{
	char prev, ch;
	int i = 0;
	prev = 'a';

	printf("Enter text(# to end the input):\n");

	while ( (ch = getchar()) != STOP)
	{
		ch = tolower(ch);
		if ( prev == 'e' && ch == 'i')
		{
			i++;
			prev = ch;
		}
		else prev = ch;
	}

	printf("Sequence \"ei\" occurs %d times.\n", i);
	return 0;
}
