#include <stdio.h>

#define SIZE 8

void reverse(double * array, int size);

int main()
{
        double array[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};

        printf("The elements of the array are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", array[i]);
        reverse(array, SIZE);
        printf("\nAfter the reverse function the elements of the array are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", array[i]);
        printf("\n");

        return 0;
}

void reverse(double * array, int size)
{
        double temp[size] = {};        //temporary array

        for (int i = 0; i < size; i++)
                temp[i] = array[size - i - 1];
        for (int i=0; i < size; i++)
                array[i] = temp[i];
}

