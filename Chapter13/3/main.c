#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
        int ch;              //character in the input
        FILE* source;        //source array
        FILE* target;        //target array

        if (argc != 3)
        {
                fprintf(stderr, "Usage: %s <copied_file> <target_file>\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if((source = fopen(argv[1], "rb")) == NULL)
        {
                fprintf(stderr, "Couldn't open %s", argv[1]);
                exit(EXIT_FAILURE);
        }

        if((target = fopen(argv[2], "wb")) == NULL)
        {
                fprintf(stderr, "Couldn't open %s", argv[1]);
                exit(EXIT_FAILURE);
        }

        while ((ch = getc(source)) != EOF)
                putc(toupper(ch), target);

        if (fclose(source) != 0)
                printf("Could not close file %s\n", argv[1]);

        if (fclose(target) != 0)
                printf("Could not close file %s\n", argv[2]);

        return 0;
}

