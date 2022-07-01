#include <stdio.h> //asks your first and last names and prints them in the format last, first 
int main()
{
	char firstname[40];
	char lastname[40];
	printf("Insert  your first name.\n");
	scanf("%s", firstname); 
	printf("Insert your last name:\n");
	scanf("%s", lastname);
	printf("Your first and last names in the format last, first:\n%s, %s\n", lastname, firstname);

	return 0;
}	
		
