#include <stdio.h>
int main()
{
	int ch, i; 
	i = 0;

	while ( (ch = getchar()) != EOF)
	{
		if ( i % 10 == 0)
			printf("\n");
		if ( ch > 31)
			printf("\"%c\"-%d ", ch, ch);
		else if ( ch == 9 )
			printf("\"\\t\"-9 ");
		else if (ch == 10 )
		       printf("\"\\n\"-10 ");
		else printf("\"^%c\"-%d ", ch + 64, ch);
		i++;
	
	}
	printf("\n");
	return 0;
}	
