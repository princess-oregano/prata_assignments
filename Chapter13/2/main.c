#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
        FILE* cfp;       //copied file pointer
        FILE* tfp;       //target file pointer
        char ch;         //character to copy
        
        if (argc != 3)
        {
                fprintf(stderr, "Usage: %s <copied_file> <target_file>\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if((cfp = fopen(argv[1], "rb")) == NULL)
        {
                fprintf(stderr, "Couldn't open %s", argv[1]);
                exit(EXIT_FAILURE);
        }

        if((tfp = fopen(argv[2], "wb")) == NULL)
        {
                fprintf(stderr, "Couldn't open %s", argv[1]);
                exit(EXIT_FAILURE);
        }

        while ((ch = getc(cfp)) != EOF)
                putc(ch, tfp);

        if (fclose(cfp) != 0)
                printf("Could not close file %s\n", argv[1]);

        if (fclose(tfp) != 0)
                printf("Could not close file %s\n", argv[2]);

        return 0;
}
       
