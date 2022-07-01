#include <stdio.h>    //asks youe height and name and prints that
int main()
{
	char name[40];
	float height;
	float heightmeters;
	printf("Enter your name:\n");
	scanf("%s", name);
	printf("%s, what is your height in centimeters?\n", name);
	scanf("%f", &height);
	heightmeters = height / 100;
	printf("%s, you are %.2f meters tall.\n", name, heightmeters);

	return 0;
}
