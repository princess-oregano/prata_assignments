#include <stdio.h>                    //manipulates with output
#include <string.h>
int main ()
{
	char name[40];
	int width;
	printf("Insert your name:\n");
	scanf("%s", name);
	width = strlen(name) + 3;
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("\"%*s\"\n", width, name);

	return 0;
}	





