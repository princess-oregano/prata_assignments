#include <stdio.h>
#define START 100.0
int main ()
{
	int i = 1;
	double dap, dei;

	dap = dei = START;

	do {
		dap = START + START * 0.1 * i;
		dei = 1.05 * dei; 
		i++;
	}
	while (dap >= dei);
	printf("It takes %d years for the value of Deirdre’s"
	" investment to exceed the value of Daphne’s investment.\n"
	"Value of Deidre's investment: %.2lf.\n"
	"Value of Daphne's investment: %.2lf.\n", i, dei, dap);

	return 0;
}	
