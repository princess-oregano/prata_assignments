#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096

void append(FILE *source, FILE *dest);

int main(int argc, char* argv[])
{
        FILE* append_file;
        FILE* source_file;
        int files = 0;                //number of files appended
        int ch = 0;
        int count_src = 0;
       
        if (argc < 3)
        {
                printf("Usage: %s appendfile sourcefile[s]\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        if ((append_file = fopen(argv[1], "a+")) == NULL)
        {
                fprintf(stderr, "Can't open %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }

        if (setvbuf(append_file, NULL, _IOFBF, BUFSIZE) != 0)
        {
                fputs("Can't create output buffer\n", stderr);
                exit(EXIT_FAILURE);
        }

        for (count_src = 2; count_src < argc; count_src++)
        {
                if (strcmp(argv[1], argv[count_src]) == 0)
                        fputs("Can't append file to itself\n", stderr);

                else if ((source_file = fopen(argv[count_src], "r")) == NULL)
                        fprintf(stderr, "Can't open %s\n", argv[count_src]);

                else
                {
                        if (setvbuf(source_file, NULL, _IOFBF, BUFSIZE) != 0)
                        {
                                fputs("Can't create input buffer\n", stderr);
                                continue;
                        }

                        append(source_file, append_file);

                        if (ferror(source_file) != 0)
                                fprintf(stderr,"Error in reading file %s.\n", argv[count_src]);
                        if (ferror(append_file) != 0)
                                fprintf(stderr,"Error in writing file %s.\n", argv[1]);

                        fclose(source_file);

                        files++;

                        printf("File %s appended.\n", argv[count_src]);
                }
        }

        printf("Done appending. %d files appended.\n", files);

        rewind(append_file);
        printf("%s contents:\n", argv[1]);

        while ((ch = getc(append_file)) != EOF)
                putchar(ch);

        puts("Done displaying.");
        fclose(append_file);
        
        return 0;
}

void append(FILE *source, FILE *dest)
{
        size_t bytes;
        static char temp[BUFSIZE];

        while ((bytes = fread(temp,sizeof(char),BUFSIZE,source)) > 0)
                fwrite(temp, sizeof (char), bytes, dest);

}

