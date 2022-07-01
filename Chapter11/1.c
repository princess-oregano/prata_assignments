#include <stdio.h>

void storing(char* array, int num_of_char);

int main()
{
        int num_of_char;

        printf("Enter a number of characters to store:\n");
        scanf("%d", &num_of_char);
        num_of_char += 1;                       //counting the '\0' symbol

        char array[num_of_char];                //declaring the array
        for (int i=0; i < num_of_char; i++)     //initialising the array
                array[i] = 0;

        storing(array, num_of_char);

        printf("The stored text is:");
        fputs(array, stdout);
        printf("\n");

        return 0;
}

void storing(char* array, int num_of_char)
{
        int i = 0;

        printf("Enter text:\n");
        for (i = 0; i < num_of_char; i++)
                array[i] = getchar();
}

