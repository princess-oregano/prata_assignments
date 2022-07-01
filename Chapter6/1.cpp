#include <stdio.h>
int main ()
{
	char letter[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		letter[i]='a' + i;
		printf("%c", letter[i]);
	}
	
	printf("\n");
	return 0;
}

	
