#include <stdio.h>
int main()
{
	int min, max; 

	printf("Enter the minimum:\n");
	scanf("%d", &min);
	printf("Enter the maximum:\n");
	scanf("%d", &max);
	
	for ( ;  min <= max; min++)
		printf("%10d%10d%10d\n", min, min*min, min*min*min);

	return 0;
}

