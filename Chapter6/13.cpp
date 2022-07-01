#include <stdio.h>
int main()
{
	int array[8];
	array[0] = 1;
	int i;

	for (i=1; i<8; i++)
		array[i] = array[i-1]*2;
	i=0;
	do {
		printf("%d ", array[i]);
		i++; }
	while (i < 8);
	printf("\n");
	return 0;
}
