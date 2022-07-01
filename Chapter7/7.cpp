#include <stdio.h>
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
	int opt;

	while (1)
	{
		printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");	
		printf("1) $8.75/hr			    2) $9.33/hr                  \n");
		printf("3) $10.00/hr                        4) $11.20/hr                 \n");
		printf("5) quit                                                          \n");
		printf("*****************************************************************\n");

		scanf("%d", &opt);
		
		if (opt == 5) 
			break;
		else if ( opt > 0 && opt < 5) 
		{
			switch (opt)
			{
				case 1:
					RATE = 8.75;
					break;
				case 2:
					RATE = 9.33;
					break;
				case 3:
					RATE = 10.00;
					break;
				case 4:
					RATE = 11.20;
					break;
			}
		}
		else 
		{
			printf("\nInvalid input!\n");
			continue;	
