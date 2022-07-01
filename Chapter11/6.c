#include <stdio.h>
#include <stdbool.h>

#define LINE_LENGTH 100

bool is_within(char ch_to_find, char* line);

int main()
{
        char ch_to_find;
        char line[LINE_LENGTH] = {};
          
        printf("Enter a character to find: "); 
        while (scanf("%c", &ch_to_find) == 1)
        {
                while ((getchar()) != '\n')
                        continue;

                printf("Enter a line: "); 
                fgets(line, LINE_LENGTH, stdin);

                if (is_within(ch_to_find, line))
                        printf("The character is within the line.\n");
                else
                        printf("The character is not within the line.\n");
                
                printf("Enter a character to find(EOF to quit): ");
        }

        printf("\n");

        return 0;
}

bool is_within(char ch_to_find, char* line)
{
        for (int i = 0; i < LINE_LENGTH; i++)
                if (line[i] == ch_to_find)
                        return true;

        return false; 
}

