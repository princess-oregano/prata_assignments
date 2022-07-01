#include <stdio.h>

#define LINE_SIZE 100

char* mystrncopy(char* target_line, char* source, int length);

int main()
{
        int length = 0;
        char target_line[LINE_SIZE] = "I don't like programming.";
        char source[] = "I like programming.";

        printf("Enter a number of characters to copy: ");
        scanf("%d", &length);

        printf("The target line before using the mystrncopy function:\n");
        fputs(target_line, stdout);

        mystrncopy(target_line, source, length);

        printf("The target line after using the mystrncopy function:\n");
        fputs(target_line, stdout);
        
        printf("\n");

        return 0;
}

char* mystrncopy(char* target_line, char* source, int length)
{
        int i = 0;

        if (length < LINE_SIZE)
        {
                for (i = 0; i < length; i++)
                        target_line[i] = source[i];

                target_line[i] = '\0';
        }
        else
                target_line = "NULL(the number of character to copy is\n"
                        "larger than the length of the target line)";

        return target_line;
}

