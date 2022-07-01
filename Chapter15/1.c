#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 8

int bin_to_int(char* ptr_bin);
bool not_bin(char* ptr_bin);

int main()
{
        char bin[SIZE + 1];

        printf("Enter a binary number with up to 8 digits: ");
        fgets(bin, SIZE + 1, stdin);

        if (not_bin(bin))
        {
                printf("The binary input must contain only 0s and 1s.\n");
                exit(EXIT_FAILURE);
        }
        else
                printf("The value of entered binary is %d.\n", bin_to_int(bin));

        return 0;
}

int bin_to_int(char* ptr_bin)
{
        int i = 0;
        int ret_val = 0;

        while (ptr_bin[i] != '\0')
                ret_val = 2 * ret_val + (ptr_bin[i++] - '0');

        return ret_val;
}

bool not_bin(char* ptr_bin)
{
        bool ret_val = false;
        int i = 0;

        while (!ret_val && ptr_bin[i] != '\0')
        {
                if (ptr_bin[i] != '0' && ptr_bin[i] != '1')
                        ret_val = true;

                i++;
        }

        return ret_val;
}

