#include <stdio.h>
int main()
{
	char line[255];
	int i;

	printf("Enter a line:\n");

	do {
		scanf("%c", &line[i]);
		i++;
	}
	while (line[i-1] != '\n');\

	printf("Your line backwards: ");

	for ( ; i >= 0; i--)
		printf("%c", line[i]);

	printf("\n");
	return 0;

}
