#include <stdio.h>       //calculates time required for downloading a file
int main()
{
	float speed, size, time;
	printf("Enter your internet speed in megabits per second:\n");
	scanf("%f", &speed);
	printf("Enter the size of a dowloading file in megabytes:\n");
	scanf("%f", &size);
	time = size / speed * 8;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n\
downloads in %.2f secons.\n", speed, size, time);

	return 0;
}
