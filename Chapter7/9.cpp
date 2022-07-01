#include <stdio.h>
int main()
{
	int num, a, b;
	int isPrime;

	printf("Enter an integer positive number(q to quit): ");
	
	while (	scanf("%d", &num) == 1)
	{
		if (num >= 2)
		{	
			printf("2 ");
	
			for (a=2; a<=num; a++)
			{
				for (b=2; b<a; b++)
				{
					if (a%b == 0)
					{
						isPrime = 0;
						break;
					}
					else isPrime = 1;
				}
	
				if (isPrime)
					printf("%d ", a);
			}
			printf("\nEnter an integer positive number(q to quit): ");

		}
		else 
		{
			printf("Invalid number!\n");
			printf("Enter an integer positive number(q to quit): ");
			continue;
		}
	}
	printf("Done.\n");
	return 0;
}
