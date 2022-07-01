#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 500
#define SIZE_WORD 40
int main()
{
        int words = 0;
        char** array_of_words;

        printf("How many words do you wish to enter? ");
        scanf("%d", &words);

        array_of_words = (char **) malloc(words * sizeof(char*)); 

        printf("Enter %d words now:\n", words);

        for (int i = 0; i < words; i++)
        {
                char* word = (char*) malloc(SIZE_WORD * sizeof(char));
                scanf("%s", word);
                array_of_words[i] = word;
        }
        
        printf("Here are your words:\n");
        for (int i = 0; i < words; i++)
         {
              printf("%s\n", *(array_of_words + i));
         }

        free(array_of_words);

        return 0;
}

