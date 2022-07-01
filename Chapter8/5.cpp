#include <stdio.h>
int main(void)
{
	int guess = 50;
	char response;
	int min = 1;
	int max = 101;

	printf("Pick an integer from 1 to 100. I will try to guess it.\n"
		"Respond with a y if my guess is right, with\n"
		"an h if it is higher and with l if it.\n"
		"it is lower than your number.\n");
	
	printf("Uh...is your number %d?\n", guess);

	while ( (response = getchar()) != 'y')
	{
		if (response == 'h')
		{
			max = guess; 
			guess = (max + min) / 2;
			printf("Well, then, is it %d?\n", guess);
		}
		else if (response == 'l')
		{
			min = guess;
			guess = (max + min) / 2;
			printf("Well, then, is it %d?\n", guess);
		}
		else printf("Sorry, I understand only y, h or l.\n");
		while (getchar() != '\n')
			continue;
	}
	printf("I knew I could do it!\n");

	return 0;
}
