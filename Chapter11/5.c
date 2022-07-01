#include <stdio.h>

#define LINE_SIZE 50

char* finder(char* line, char ch);

int main()
{
        char line[LINE_SIZE];
        char ch_to_find;
        
        printf("Enter a line of text: ");

        while (fgets(line, LINE_SIZE, stdin) != NULL)
        {

                printf("Enter a character to find: ");
                scanf("%c", &ch_to_find);

                while ((getchar()) != '\n')
                        continue;

                if (finder(line, ch_to_find) != NULL)
                        printf("The adress of the character is: %p.\n", finder(line, ch_to_find));
                else 
                        printf("The character is not found.\n");
                
                printf("Enter a line of text(EOF to quit): ");
        }  
        
        printf("\n");

        return 0;
}

char* finder(char* line, char ch)
{
        int i = 0;
        char* adress = NULL;

        while (i < LINE_SIZE)
        {
                if (line[i] == ch)
                {
                        adress = line + i;
                        break;
                }
                else
                {
                        i++;
                }
        }

        return adress;
}

