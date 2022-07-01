#include <stdio.h>
#define STOP '#'
int main()
{
	char ch;
	int i = 0;

	printf("Enter the line(# to end the input):\n");

	while ( (ch = getchar()) != STOP )
	{
		switch(ch)
		{
			case '.' : {
				putchar('!');
				i++;
				break;
				}

			case '!' : {
				putchar('!');
				putchar(ch);
				i++;
				break;
				}

			default : putchar(ch);
		}
	}
	printf("\n%d substitution(-s) were made.\n", i);
	return 0;
}
