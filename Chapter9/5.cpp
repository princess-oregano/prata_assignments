#include <stdio.h>
void larger_of(double *a, double *b);
int main()
{
	double x, y;

	printf("Enter two floating-point numbers: ");
	scanf("%lf %lf", &x, &y);
	printf("x = %lf, y = %lf\n", x, y);
	larger_of(&x, &y);
	printf("Now x = %lf, y = %lf\n", x, y);

	return 0;
}
void larger_of(double *a, double *b)
{
	if(*a > *b) 
		*b = *a;
	else 
		*a = *b;
}
