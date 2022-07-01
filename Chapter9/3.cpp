#include <stdio.h>
void chline(char ch, int i, int j);
int main()
{
	char ch;
	int col, row;

	printf("Enter a single character: ");
	ch = getchar();

	printf("Enter a number of columns and characters in a row: ");
	scanf("%d %d", &col, &row);
	chline(ch, col, row);

	return 0;
}
void chline(char ch, int i, int j)
{
	int x, y;

	for (x = 0; x < i; x++)
	{
		for (y = 0; y < j; y++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}

