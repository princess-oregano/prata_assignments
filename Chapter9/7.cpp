#include <stdio.h>
#include <ctype.h>

int nalpha(char ch);

int main()
{
	char ch; 
	
	printf("Enter characters: ");
	while ( (ch = getchar()) != EOF)
	{
		if (nalpha(ch) == -1 && ch != '\n') 
			printf ("\n\"%c\" is not a letter.", ch);
		else if (nalpha(ch) == -1 && ch == '\n') 
			printf("\nEnter characters: ");
		else 
			printf(" \n\"%c\" is a letter, It's numerical location is %d.", ch, nalpha(ch));
	}
	printf("\nBye.\n");
	return 0;
}

int nalpha(char ch)
{
	int num;

	if (!isalpha(ch))
		return -1;

	ch = toupper(ch);
	num = (int) ch - 64;

	return num;
}

