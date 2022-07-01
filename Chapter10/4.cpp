#include <stdio.h>

#define SIZE 8

int index_maxima(double * array, int size);

int main()
{
        double array[SIZE] = {5.6, 8.9, 10.5, 1.3, 2.5, 14.4, 13.9, 5.7};

        printf("The contents of the array are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%f ", array[i]);
        printf("\n");
        printf("THe index of the largest element in the array is: %d\n", index_maxima(array, SIZE));

        return 0;
}

int index_maxima(double * array, int size)
{
        int index =  0;

        for (int i = 0; i < size; i++)
                if (array[i] > array[i - 1])
                        index = i;

        return index;
}


