#include <stdio.h>
int main()
{
	double enter[8];
	double sum[8]; 
	int i;

	printf("Enter 8 floating-point numbers: ");

	for (i=0; i<8; i++)                //filling enter array
		scanf("%lf", &enter[i]);

	sum[0] = enter[0];
	i = 1;

	while (i < 8) {                    //filling sum array
		sum[i] = sum[i-1] + enter[i];
		i++; }

	i = 0;

	while (i < 8) {                   // printing enter array
		printf("%10.3lf ", enter[i]);
		i++; }

	printf("\n");
	i = 0;

	while (i < 8) {                    // printing sum array  
		printf("%10.3lf ", sum[i]);
		i++; }
	
	printf("\n");
	return 0;
}
