#include <stdio.h>      //prints the value of the number cubed
void cube(double n);
int main()
{
	double num;
	printf("Enter a number:\n");
	scanf("%lf", &num);
	cube(num);
	return 0;
}
void cube(double n)
{
	printf("%.3lf cubed is %.3lf.\n", n, n*n*n);
}
