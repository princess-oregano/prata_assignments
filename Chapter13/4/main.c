#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
        FILE* file_pointer;       //pointer to the displayed file
        char ch;                  //displayed character

        if (argc < 2)
                printf("Usage: ./%s <filename> ... <filename>\n", argv[0]);

        for (int i = 1; i < argc; i++)
        {
                if ((file_pointer = fopen(argv[i], "r")) == NULL)
                {
                        fprintf(stderr, "Error: cannot open file %s\n", argv[i]);
                        exit(EXIT_FAILURE);
                }

                while ((ch = getc(file_pointer)) != EOF)
                        putc(ch, stdout);

                if (fclose(file_pointer) != 0)
                        fprintf(stderr, "Error: cannot close file %s\n", argv[i]);

                printf("\n");
        }

        return 0;
}

