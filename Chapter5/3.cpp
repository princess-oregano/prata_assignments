#include <stdio.h>    //converts time in days to time in weeks and days
#define D_PER_W 7     //days per week
int main()
{
	int days;          //time in days
	int ddays, dweek;  //time in minutes & hours

	printf("Enter a number of days(<=0 to quit):\n");
	scanf("%d", &days);

	while (days > 0) {
	dweek = days / D_PER_W;
	ddays = days % D_PER_W;
	printf("%d days are %d week(-s) and %d day(-s).\n", days, dweek,ddays);
	printf("Enter a new number of days(<=0 to quit):\n");
	scanf("%d", &days);
	}

	printf("Good bye!\n");

	return 0;
}
