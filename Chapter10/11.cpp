#include <stdio.h>

#define ARRAYS 3

void display(int ar[][5], int arrays, int elements);
void doubling(int ar[][5], int arrays, int elements);

int main()
{
        int array[ARRAYS][5] = {
                {11, 12, 13, 14, 15},
                {21, 22, 23, 24, 25},
                {31, 32, 33, 34, 35}};

        printf("The initial array is:\n");
        display(array, ARRAYS, 5);

        printf("The array after doubling is:\n");
        doubling(array, ARRAYS, 5);
        display(array, ARRAYS, 5);

       return 0;
}

void display(int ar[][5], int arrays, int elements)
{
        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        printf("%d ", ar[i][j]);
                }
                printf("\n");
        }
}

void doubling(int ar[][5], int arrays, int elements)
{
        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        ar[i][j] = 2 * ar[i][j];
                }
        }
}

