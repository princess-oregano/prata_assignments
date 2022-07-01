#include <stdio.h>

double min(double x, double y);

int main()
{
	double a = 0;
	double b = 0;

	printf("Enter two float-pointing numbers(q to quit):\n");
	while (scanf("%lf %lf", &a, &b) == 2)
	{
		printf("%.4lf is the smaller number.\n", min(a, b));
		printf("Enter two float-pointing numbers(q to quit):\n");
	}

	return 0;
}

double min(double x, double y)
{
	return (x < y) ? x : y;
}
