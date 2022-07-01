#include <stdio.h>
void fibonacci(int n);
int main()
{
	int limit;

	printf("Enter a number of how many Fibonacci numbers you want to see:\n");
	while (scanf("%d", &limit) == 1)
	{
		if (limit < 3) 
		{
			printf("Enter a larger number: ");
			continue;
		}
		fibonacci(limit);
		printf("\nEnter a number of how many Fibonacci numbers you want to see:\n");
	}
	return 0;
}
void fibonacci(int n)
{
	int a = 1;
	int b = 0;
	int c = 1;

	for (int i = 0; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;

		printf("%d ", c);
	}
}
