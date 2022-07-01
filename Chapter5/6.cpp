#include <stdio.h>
int main(void)
{
	int count, num, sum, threshold;
	count = 0;
	sum = 0;

	printf("Enter a number to which the program should sum:\n");
	scanf("%d", &threshold);

	while (count++ < threshold) {
	sum = sum + count*count;
	}	
	printf("sum = %d\n", sum);

	return 0;
}
