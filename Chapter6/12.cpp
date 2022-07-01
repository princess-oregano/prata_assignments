#include <stdio.h> 
#include <math.h>
int main()
{
	double sum1, sum2, i, count;
	long long limit;

	printf("This programm evaluates running totals of series \n"
		"1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ... and \n"
		"1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ... \n"
		"up to some limit of number of terms.\n");

	printf("Enter the limit: ");
	scanf("%d", &limit); 

	while (limit > 0)
	{
		for (i=1.0, sum1 = 0; i<=limit; i = i + 1.0) 
			sum1 = sum1 + 1.0/i;
		for (i=1.0, sum2 = 0, count = 1.0; i<=limit; i = i + 1.0) { 
			sum2 = sum2 + count/i;
			count *= -1.0;
		}
		printf("The total of series are %.4lf and %.4lf.\n", sum1, sum2);
		printf("Enter the new limit(0 to quit): ");
		scanf("%d", &limit); 

	}
	printf("Done.\n");
	return 0;
}
