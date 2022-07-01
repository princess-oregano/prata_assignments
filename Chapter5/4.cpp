#include <stdio.h>         //converts cm to feet and inches
#define CM_PER_INCH 2.54
#define CM_PER_FOOT 30.48
#define INCH_PER_FOOT 12
int main()
{
	float cm;          //height in cm
	float inch, ffoot; //fractional iches and feet
	int feet;

	printf("Enter your height in cm(<=0 to quit):\n");
	scanf("%f", &cm);

	while (cm > 0) {
		ffoot = cm / CM_PER_FOOT;
		feet = (int) ffoot;
		inch = (ffoot - feet) * INCH_PER_FOOT;
		printf("%.1f cm are %d feet(foot) and %.1f inch(-es).\n", cm, feet, inch);
		printf("Enter a new height(<=0 to quit):\n");
		scanf("%f", &cm);
	}

	printf("Good bye!\n");

	return 0;
}
