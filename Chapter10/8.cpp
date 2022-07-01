#include <stdio.h>

void copy_arr(int * target, int * start, int size);

int main()
{
        int big_array[7] = {1, 2, 3, 4, 5, 6, 7};
        int small_array[3] = {};

        printf("The contents of big_array are: ");
        for (int i = 0; i < 7; i++)
                printf("%d ", big_array[i]);
        printf("\n");

        printf("The contents of small_array are: ");
        for (int i = 0; i < 3; i++)
                printf("%d ", small_array[i]);
        printf("\n");

        copy_arr(small_array, &big_array[2], 3);

        printf("The contents of small_array after copying are: ");
        for (int i = 0; i < 3; i++)
                printf("%d ", small_array[i]);
        printf("\n");

        return 0;
}

void copy_arr(int * target, int * start, int size)
{
        for (int i = 0; i < size; i++)
                target[i] = start[i];
}

