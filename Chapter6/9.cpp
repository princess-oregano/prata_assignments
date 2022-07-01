#include <stdio.h>
double count(double a, double b);
int main()
{
	double one, two;
	int true1, true2;

	printf("Enter pairs of values(q to quit):\n");

	while (scanf("%lf", &one) ==1,  scanf("%lf", &two) == 1)
		printf("The result is %lf.\n", count(one, two));

	printf("Done.\n");
	return 0;
}

double count(double a, double b)
{
	double res;
	res = (a-b)/(a*b);
	return res;
}
