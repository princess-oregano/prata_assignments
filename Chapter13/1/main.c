#include <stdio.h>
#include <stdlib.h>

int main()
{
        int ch = 0;
        FILE* fp;
        unsigned long count = 0;
        char filename[40] = {};

        printf("Enter the name of the file you want to copy: ");
        scanf("%s", filename);

        if ((fp = fopen(filename, "r")) == NULL)
        {
                printf("Can't open %s\n", filename);
                exit(EXIT_FAILURE);
        }

        while ((ch = getc(fp)) != EOF)
        {
                putc(ch,stdout); 
                count++;
        }

        fclose(fp);

        printf("File %s has %lu characters\n", filename, count);

        return 0;
}
