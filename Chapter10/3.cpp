#include <stdio.h>

#define SIZE 8

int maxima(int * array, int size);

int main()
{
        int array[SIZE] = {56, 89, 100, 95, 12, 105, 144, 8};

        printf("The contents of the array are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%d ", array[i]);
        printf("\n");
        printf("The maximum integer of the array is: %d\n", maxima(array, SIZE));

        return 0;
}

int maxima(int * array, int size)
{
        int max = 0;
        max = array[0];
        for (int i = 1; i < size; i++)
                if (array[i] > max) 
                        max = array[i];

        return max;
}
       
