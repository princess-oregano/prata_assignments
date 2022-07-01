#include <stdio.h>
int main () 
{
	int array[8];
	int i;
	
	printf("Enter 8 integer numbers: ");
	for (i=0; i<8; i++)
		scanf("%d", &array[i]);
	printf("Entered numbers in reverse order: "); 
	for (i=7; i>=0; i--)
		printf("%d ", array[i]);

	printf("\n");
	return 0;
}
