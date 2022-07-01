#include <stdio.h> 
void mixer(double *a, double *b, double *c);
int main()
{
	double x, y, z;

	printf("Enter three floating-point numbers:\n");
	scanf("%lf", &x);
	scanf("%lf", &y);
	scanf("%lf", &z);
	printf("x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
	mixer(&x, &y, &z);
	printf("Now x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
	return 0;
}
void mixer(double *a, double *b, double *c)
{
	double temp;

	if (*c < *b)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
	if (*b < *a)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
	if (*c < *b)
	{
		temp = *b;
		*b = *c;
		*c = temp;
	}
}

