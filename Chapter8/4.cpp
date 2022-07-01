#include <stdio.h>
#include <ctype.h>
int main()
{
	char ch;
	int letter, word;
	letter = 0;
	word = 0;
	bool inword = false;

	printf("Enter text:\n");

	while(1)
	{
		while ( (ch=getchar()) != EOF)
		{
			if (isalpha(ch))  
				letter++;
			if (!isspace(ch) && !inword)
			{
				inword = true; 
				word++;
			}
				if (isspace(ch) && inword)
				inword = false;
		}

		if (letter == 0) 
		{
			printf("Enter text:\n");
			continue;
		}
		else
		{	
			printf("\nThe average number of letters in a word is %.2f.\n", (double) letter / word);
			break;
		}
	}
	return 0;
}
