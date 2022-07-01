#include <stdio.h>
int main()
{
	int so, fo; 

	printf("This program computes moduli.\nEnter an integer to serve as the second operand: ");
	scanf("%d", &so);
	printf("Now enter the first operand: ");
	scanf("%d", &fo);
	printf("%d %% %d is %d.\n", fo, so, fo % so);
	printf("Enter next number for first operand (<= 0 to quit): ");
	scanf("%d", &fo);
	while ( fo > 0 ) {
		printf("%d %% %d is %d.\n", fo, so, fo % so);
		printf("Enter next number for first operand (<= 0 to quit): ");
		scanf("%d", &fo);
	}
	printf("Done.\n");
	return 0; 
}
