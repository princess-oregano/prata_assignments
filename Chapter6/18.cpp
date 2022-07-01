#include <stdio.h>
#define DUNBAR 100
int main() 
{
	int i = 1; 
	int ppl = 5;   //number of friends

	do {
		printf("Week %d: professor Rabnud has %d friends.\n", i, ppl);
		ppl--;
		ppl *= 2;
		i++;
	} while (ppl < DUNBAR);

	printf("Week %d: professor Rabnud has %d friends.\n", i, ppl);

	return 0;
}
