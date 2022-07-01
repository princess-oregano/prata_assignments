#include <stdio.h>

#define SIZE1 5
#define SIZE2 3

void copy_arr(double * target, double * array, int size);

int main()
{
        double array[SIZE1][SIZE2] = {
                {1.1, 1.2, 1.3},
                {2.1, 2.2, 2.3},
                {3.1, 3.2, 3.3},
                {4.1, 4.2, 4.3},
                {5.1, 5.2, 5.3}};
        double target[SIZE1][SIZE2] = {0};

        printf("The contents of the array are:\n");
        for (int i = 0; i < SIZE1; i++)
        {
                for (int j = 0; j < SIZE2; j++)
                {
                        printf("%.1f ", array[i][j]);
                }
                printf("\n");
        }

        printf("The inicial contents of the target array are:\n");
        for (int i = 0; i < SIZE1; i++)
        {
                for (int j = 0; j < SIZE2; j++)
                {
                        printf("%.1f ", target[i][j]);
                }
                printf("\n"); 
        }


        for (int i = 0; i < SIZE1; i++)
                copy_arr(target[i], array[i], SIZE2);

        printf("The contents of the target array after using copy_arr function are:\n");
        for (int i = 0; i < SIZE1; i++)
        {
                for (int j = 0; j < SIZE2; j++)
                {
                        printf("%.1f ", target[i][j]);
                }
                printf("\n");
        }

        return 0;
}

void copy_arr(double * target, double * array, int size)
{
        for (int j = 0; j < size; j++)
                target[j] = array[j];
}

