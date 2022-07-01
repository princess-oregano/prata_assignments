#include <stdio.h>
void Temperatures(double t);
int main()
{
	double f;	
	printf("Enter a Fahrenheit temperature: ");
	scanf("%lf", &f);
	Temperatures(f);
	printf("Enter a new Fahrenheit temperature(q to quit): ");
	while (scanf("%lf", &f) == 1) {
		Temperatures(f);
		printf("Enter a new Fahrenheit temperature(q to quit): ");		
		}
	printf("Done.\n");
	return 0;
}
void Temperatures(double t)
{
	const double FAR1 = 5.0/9.0;
	const double FAR2 = 32.0;
	const double KEL = 273.16;

	double Celsius, Kelvin;

	Celsius = FAR1 * (t - FAR2);
	Kelvin = Celsius + KEL;
	printf("%.2lfF equals to %.2lfC or %.2lfK.\n", t, Celsius, Kelvin);
}
