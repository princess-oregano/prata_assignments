#include <stdio.h> 
int main ()
{
	int min, max, i, sum;

	printf("Enter lower and upper integer limits: ");
	while (scanf("%d", &min) == 1, scanf("%d", &max) == 1, max > min)
	{
		for (i = min; i <= max; i++)
			sum = sum + i*i;
		printf("The sums of squares from %d to %d is %d.\n", min*min, max*max, sum);
		printf("Enter next set of limits: ");
	}

	printf("Done.\n");
	return 0;
}

