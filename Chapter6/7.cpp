#include <stdio.h>
#include <string.h>
int main()
{
	char word[40];
	int last, i;
	
	printf("Enter a word:\n");
	scanf("%s", word);
	last = strlen(word);
	printf("Your word backwards:\n");

	for (i = last; i >= 0; i--)
		printf("%c", word[i]);

	printf("\n");
	return 0;
}
