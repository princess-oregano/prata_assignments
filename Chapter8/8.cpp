#include <stdio.h>
#include <stdlib.h>
void add(float a, float b);
void sub(float a, float b);
void mul(float a, float b);
void div(float a, float b);
int main()
{
	char ch;
	float fir, sec;    //numbers

	while(1)
	{	
		printf("Enter the operation of your choice:\n"
		       "a. add              s. subcract    \n"
		       "m. multiply         d. divide      \n"
		       "q. quit                            \n");

		ch = getchar();
		while (getchar() != '\n')
			continue;
		
		if ( ch == 'q')               //quitting the programm
		{
			printf("Bye.\n");
			exit(0);
		}

		switch(ch)                    //choosing an option
		{
			case 'a': 
				add(fir, sec);
				break;
			case 's':
				sub(fir, sec);
				break;
			case 'm':
				mul(fir, sec);
				break;
			case 'd':
				div(fir, sec);
				break;
			default: printf("Wrong input!\n");
		}
	}
	return 0;
}

void add(float a,float b)                   //adding
{
	char input;

	printf("Enter first number: ");
	while (scanf("%f", &a) != 1)
	{
		while ( (input = getchar()) != '\n')
			putchar(input);
		printf(" is not a number.\n" 
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	}
	printf("Enter second number: ");
	while (scanf("%f", &b) != 1) 
	{
		while ( (input = getchar()) != '\n')
			putchar(input);

		printf(" is not a number.\n"
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	} 

	while ( getchar() != '\n' )  
		continue;

	printf("%.2f + %.2f = %.2f\n", a, b, a + b);
}

void sub(float a, float b)                    //substraction
{
	char input;

	printf("Enter first number: ");
	while (scanf("%f", &a) != 1)
	{
		while ( (input = getchar()) != '\n')
			putchar(input);
	printf(" is not a number.\n" 
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	}

	printf("Enter second number: ");
	while (scanf("%f", &b) != 1) 
	{
		while ( (input = getchar()) != '\n')
			putchar(input);
		printf(" is not a number.\n"
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	} 

	while ( getchar() != '\n' )  
		continue;

	printf("%.2f - %.2f = %.2f\n", a, b, a - b);
}

void mul(float a, float b)                      //multiplying
{
	char input;

	printf("Enter first number: ");
	while (scanf("%f", &a) != 1)
	{
		while ( (input = getchar()) != '\n')
			putchar(input);
		printf(" is not a number.\n" 
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	}
	printf("Enter second number: ");
	while (scanf("%f", &b) != 1) 
	{
		while ( (input = getchar()) != '\n')
			putchar(input);
		printf(" is not a number.\n"
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	} 
	while ( getchar() != '\n' )  
		continue;
	printf("%.2f * %.2f = %.2f\n", a, b, a * b);
}

void div(float a, float b)                          //division
{
	char input; 

	printf("Enter first number: ");
	while (scanf("%f", &a) != 1)
	{
	while ( (input = getchar()) != '\n')
			putchar(input);				printf(" is not a number.\n" 
		       "Please enter a number such as 2.5, -1.78E8 or 3: ");
	}

	printf("Enter second number: ");
	while(1)
	{
		if (scanf("%f", &b) != 1) 
		{
			while ( (input = getchar()) != '\n')
			putchar(input);
			printf(" is not a number.\n"
			       "Please enter a number such as 2.5, -1.78E8 or 3: ");
		} 
		else if (b != 0)
			break;
		else
		{
			printf("Enter a number other than 0: ");
			continue;
		}
	}

	while ( getchar() != '\n' )  
		continue;

	printf("%.2f / %.2f = %.2f\n", a, b, a / b);
}
