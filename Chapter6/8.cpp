#include <stdio.h>
int main()
{
	double one, two;
	int true1, true2;

	do {
		printf("Enter the first number(q to quit):\n");
		true1 = scanf("%lf", &one);
		printf("Enter the second number(q to quit):\n");
		true2 = scanf("%lf", &two);
		printf("Requested number is %.4lf.\n", (one - two) / (one * two));
		} while (true1 == 1, true2 == 1);
		
	printf("Done.\n");

	return 0;
}

