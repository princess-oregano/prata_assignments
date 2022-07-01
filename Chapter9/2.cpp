#include <stdio.h>
void chline(char ch, int i, int j);
int main()
{
	char ch;
	int a, b;

	printf("Enter a single character: ");
	ch = getchar();
	printf("Enter two thresholds: ");
	scanf("%d %d", &a, &b);

	chline(ch, a, b);

	return 0;
}
void chline(char ch, int i, int j)
{
	int x;

	for (x = 0; x < i; x++)
		printf(" ");
	for ( ; x < j; x++)
		printf("%c", ch);
	printf("\n");
}
