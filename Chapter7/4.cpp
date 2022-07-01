#include <stdio.h>
#define STOP '#'
int main()
{
	char ch;
	int i = 0;

	while ( (ch = getchar()) != STOP )
	{
		if ( ch == '.' ) {
			putchar('!');
			i++;
		}
		else if ( ch == '!')
		{
			putchar('!');
			putchar(ch);
			i++;
		}
		else
			putchar(ch);
	}
	printf("\n%d substitution(-s) were made.\n", i);
	return 0;
}
