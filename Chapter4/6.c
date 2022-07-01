#include <stdio.h>       //uses strlen() and requires specific 
#include <string.h>      //way of output
int main()
{
	char firstname[40];
	char lastname[40];
	printf("Enter your first name:\n");
	scanf("%s", firstname);
	printf("Enter your last name:\n");
	scanf("%s", lastname);
	printf("\n%s %s\n", firstname, lastname);
	printf("%*d %*d", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname));
	printf("\nAlternative:\n%s %s\n", firstname, lastname);
	printf("%-*d %-*d", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname));

	return 0;
}
