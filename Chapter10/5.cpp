#include <stdio.h>

#define SIZE 8

int diff(int * array, int size);

int main()
{
        int array[SIZE] = {56, 89, 100, 95, 12, 105, 144, 8};

        printf("The contents of the array are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%d ", array[i]);
        printf("\n");
        printf("The difference between the largest and the smallest"
               " elements of the array is: %d\n", diff(array, SIZE));

        return 0;
}

int diff(int * array, int size)
{
        int max = 0;
        int min = 0;

        min = array[0];
        max = array[0];

        for (int i = 1; i < size; i++)
                if (array[i] > max) 
                        max = array[i];

        for (int i = 1; i < size; i++)
                if (array[i] < min) 
                        min = array[i];

        return max - min;
}


       
