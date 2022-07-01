#include <stdio.h> 
#define STOP '#'
int main()
{
	char ch;
	int space, enter, other;
	space = enter = other = 0;

	printf("Enter the text(# to end the input):\n");

	while ( (ch = getchar()) != STOP)
	{
		if ( ch == ' ')
			space++;
		else if (ch == '\n')
			enter++;
		else other++;
	}

	if ( other == 0) 
		printf("You didn't enter any text!\n");
	else
	{	printf("This text contains %d %s, %d newline %s and"
			" %d other %s.\n", space, space != 1 ? "spaces" : "space",
			enter, enter != 1 ? "characters" : "character",
			other, other != 1 ? "characters" : "character");
	}
	return 0;
}
