#include <stdio.h>   // prints all the integers from (and including) some value up to (and including) a value larger by 10
int main()           //some value up to (and including) a value larger by 10
{
	int n;       //for counting
	int num;     //the entered number
	
	printf("Enter an integer number:\n");
	scanf("%d", &num);
	n = num;
	printf("%d ", num);
	while (++num < n + 11) {
		printf("%d ", num);
	}	
	printf("\n");

	return 0;
}
