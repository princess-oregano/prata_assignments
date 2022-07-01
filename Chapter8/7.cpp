#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define RATEOT 1.5 * RATE
#define OVERTIME 40
#define TAXRATE1 0.15
#define TAXRATE2 0.2
#define TAXRATE3 0.25
#define THSUM1 300.00
#define THSUM2 450.00

int main()
{
	int hours;
	double RATE, gross, taxes, net;
	char opt;

		
while(1)
{	
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");	
	printf("a) $8.75/hr			    b) $9.33/hr                  \n");
	printf("c) $10.00/hr                        d) $11.20/hr                 \n");
	printf("q) quit                                                          \n");
	printf("*****************************************************************\n");

	opt = getchar();

	if ( (opt >= 'a' && opt <= 'd') || opt == 'q' ) 
	{
		switch (opt)
		{
			case 'a':
				RATE = 8.75;
				break;
			case 'b':
				RATE = 9.33;
				break;
			case 'c':
				RATE = 10.00;
				break;
			case 'd':
				RATE = 11.20;
				break;
			case 'q':	
				printf("Good bye!\n");
				exit(0);

		}
	}
	else 
	{
		printf("\nInvalid input!\n");
		continue;
	}

			printf("Enter a number of hours worked in a week: ");
			scanf("%d", &hours);
			while (getchar() != '\n')
				continue;

			if (hours <= 40 && hours > 0)
				gross = hours * RATE;
			else if (hours <= 0)
				printf("Invalid number.\n");
			else gross = OVERTIME * RATE + RATEOT * (hours - OVERTIME); 
		
			if (gross < THSUM1)
				taxes = TAXRATE1 * gross;
			else if (gross < THSUM2)
				taxes = TAXRATE1 * THSUM1 + TAXRATE2 * (gross - THSUM1);
			else taxes = TAXRATE1 * THSUM1 + TAXRATE2 * (THSUM2 - THSUM1) + TAXRATE3 * (gross - THSUM2); 

			net = gross - taxes;

			printf("\nThe gross pay is %.2lf$, the taxes are %.2lf$, "
				"so the net pay is %.2lf$.\n\n", gross, taxes, net);
}
	return 0;
}	
