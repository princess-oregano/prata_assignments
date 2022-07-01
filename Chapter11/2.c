#include <stdio.h>
#include <ctype.h>
#include <string.h>

void storing(char* array, int num_of_char);

int main()
{
        const int num_of_char = 10;

        char array[num_of_char];                //declaring the array
        for (int i=0; i < num_of_char; i++)     //initialising the array
                array[i] = '0';

        storing(array, num_of_char);

        printf("The stored text is:\n");
        fputs(array, stdout);
        printf("\n");

        return 0;
}

void storing(char* array, int num_of_char)
{
        int i = 0;
        char ch = '0';

        printf("Enter text:\n");

        for (i = 0; i < num_of_char; i++)
        {
                ch = getchar();
                if (ch != EOF && !isspace(ch))
                    array[i] = ch;
                else
                    break;
        }

        array[i] = '\0';
}

