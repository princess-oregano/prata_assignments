#include <stdio.h>
#include <ctype.h>
char get_first();
int main()
{
	int choice; 

	printf("This programm prints the first non-whitespace\n"
		"character encountered.\n"
		"Enter text:\n");
	choice = get_first();
	putchar(choice);
	printf("\n");
	return 0;
}

char get_first()
{
	int ch;
	while ( isspace( ch = getchar() ))
		continue;
	return ch;
}
