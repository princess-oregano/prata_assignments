#include <stdio.h>
double harmonic(double a, double b);
int main()
{
	double x, y;

	printf("Enter two floating-point numbers: ");
	scanf("%lf %lf", &x, &y);
	printf("The harmonic mean of these numbers is %.4lf.\n", harmonic(x, y));
	return 0;
}
double harmonic(double a, double b)
{
	return 1 / ( 0.5 * (1/a + 1/b) );
}
