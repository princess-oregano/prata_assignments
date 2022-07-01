#include <stdio.h>
void to_base_n(unsigned long n, int b);
int main()
{
	unsigned long num;
	int base;

	printf("Enter an integer (q to quit):\n");
	while (scanf("%lu", &num) == 1)
	{
		printf("Enter a base:\n");
		scanf("%d", &base);
		printf("%lu in base %d is ", num, base);
		to_base_n(num, base);
		putchar('\n');
		printf("Enter an integer (q to quit):\n");
	}
	printf("Done.\n");
	return 0;
}
void to_base_n(unsigned long n, int b)
{
	int r;

	r = n % b;
	if (n >= b)
		to_base_n(n / b, b);
	printf("%d", r);
	return;
}
