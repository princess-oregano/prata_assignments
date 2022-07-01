#include <stdio.h>
int main()
{
	int num, odd, even;
	int sodd, seven;
	double aodd, aeven;

nonum:
	odd = even = 0;
	sodd = seven = 0;
	printf("Enter a line of integer numbers(0 to end the input): ");

	scanf("%d", &num);
	while ( num != 0 ) 
	{
		if ( num % 2 == 1) 
		{
			odd++;
			sodd = sodd + num;
		}
		else 
		{
			even++;
			seven = seven + num;
		}
		scanf("%d", &num);
	}

	if ( odd == 0 && even != 0)
	{
		aeven = (double) seven / (double) even;
		printf("%d even and no odd numbers were entered.\n"
			"The average value of the even integers is %.2lf.\n",
			even, aeven);
	} 
	else if (even == 0 && odd != 0)
	{	
		aodd = (double) sodd / (double) odd;
		printf("%d odd and no even numbers were entered.\n"
			"The average value of the odd integers is %.2lf.\n",
			 odd, aodd);
	}
	else if (even == 0 && odd == 0)
	{
		printf("No numbers were entered!\n");
		goto nonum;
	}
	else
	{
		aeven = (double) seven / (double) even;
		aodd = (double) sodd / (double) odd;
		printf("%d even and %d odd numbers were entered.\n"
			"The average value of the even integers is %.2lf.\n"
			"The average value of the odd integers is %.2lf.\n",
			even, odd, aeven, aodd);
	}
}
