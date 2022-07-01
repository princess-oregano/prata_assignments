#include <stdio.h>    //converts time in minutes to time in hours and minutes
#define M_PER_H 60    //minutes per hour
int main()
{
	int min;          //time in minutes
	int dmin, dhour;  //time in minutes & hours

	printf("Enter a number of minutes(<=0 to quit):\n");
	scanf("%d", &min);

	while (min > 0) {
	dhour = min / M_PER_H;
	dmin = min % M_PER_H;
	printf("%d minutes equals to %d hour(-s) and %d minute(-s).\n", min, dhour, dmin);
	printf("Enter a new number of minutes(<=0 to quit):\n");
	scanf("%d", &min);
	}

	printf("Good bye!\n");

	return 0;
}
