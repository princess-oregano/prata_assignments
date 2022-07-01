#include <stdio.h>
int main(void)
{
	int count, sum, reach;
	count = 0;
	sum = 0;

	printf("Enter a number to which the program should sum:\n");
	scanf("%d", &reach);

	while (count++ < reach)
	sum = sum + count;
	printf("sum = %d\n", sum);

	return 0;
}
