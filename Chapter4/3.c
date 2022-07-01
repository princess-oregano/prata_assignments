#include <stdio.h>                    //prints numbers in decimal-point and exponential notation
int main()
{
	float num;
	printf("Enter a number:\n");
	scanf("%f", &num);
	printf("Your number in decimal-point and exponential notation:\n %-10.1f %-10.1e \n\n", num, num);
	printf("Alternative:\n %-+10.3f %-10.3E \n", num, num);

	return 0;
}


