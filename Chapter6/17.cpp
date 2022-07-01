#include <stdio.h>
int main()
{
	int i = 0;
	double sum = 1000000.00;

	do {
		sum *= 1.08;
		sum -= 100000;
		i++;
	} while (sum > 0 );

	printf("It will take less than %d years for"
	" Chuckie to empty his account.\n", i);
	return 0;
}
