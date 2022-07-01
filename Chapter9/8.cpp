#include <stdio.h>

double power(double base, int exp);

int main()
{ 
	double base = 0;
	int exp = 0;

	printf("Enter a base number: ");
	scanf("%lf", &base);

	printf("Enter an exponent: ");
	scanf("%d", &exp);

	printf("%.2lf^%d = %.2lf\n", base, exp, power(base, exp));

	return 0;
}

double power(double base, int exp)
{
	double pow = 1;
	int i = 0;

	if(base == 0 && exp == 0)
	{
		printf("The value is undefined. The programm is using a value of 1.\n");
		return 1;		
	}

	if(base == 0)
	{
		return 0;
	}

	if(exp == 0)
	{
		return 1;
	}

	if(exp > 0)
	{
		for (i = 1; i <= exp; i++)
			pow *= base;
		return pow;
	}

	if(exp < 0)
	{
		base = 1 / base;
		exp = -exp;
		for (i = 1; i <= exp; i++)
			pow *= base;
		return pow;
	}

	return 0;
}

