#include <stdio.h>
double power(double a, int b);
int main()
{ 
	double x;
	int y;

	printf("Enter a base number: ");
	scanf("%lf", &x);
	printf("Enter an exponent: ");
	scanf("%d", &y);
	printf("%.2lf^%d = %.2lf\n", x, y, power(x, y));
	return 0;
}
double power(double a, int b)
{
	double pow = 1;
	int n = b;

	if (a == 0 && b == 0)
	{
		printf("The value is undefined. The programm is using the value 1.\n");
		return 1;		
	}
	if (a == 0)
		return 0;
	if (b == 0)
		return 1;
	if (b > 0)
	{
		if (n > 0)
			pow = a * power(a, n - 1);
		return pow;
	}
	if (b < 0)
	{
		a = 1 / a;
		b = -b;
		if (n > 0)
			pow = a * power(a, n - 1);
		return pow;
	}
	return 0;
}
