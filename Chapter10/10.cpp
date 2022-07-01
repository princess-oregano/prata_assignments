#include <stdio.h>

#define SIZE 4

void sum(int * array1, int * array2, int * array3, int size);
void print_ar(int * array1, int size);

int main()
{
        int array1[SIZE] = {2, 4, 6, 8};
        int array2[SIZE] = {1, 0, 4, 6};
        int array3[SIZE] = {};
        
        printf("The elements of the array 1, 2 and 3 are:\n");
        print_ar(array1, SIZE);
        print_ar(array2, SIZE);
        print_ar(array3, SIZE);

        sum(array1, array2, array3, SIZE);
        
        printf("After the sum function, the elements of the array 11, 2 and 3 are:\n"); 
        print_ar(array1, SIZE);
        print_ar(array2, SIZE); 
        print_ar(array3, SIZE);
               
        return 0;
}

void sum(int * array1, int * array2, int * array3, int size)
{
        for (int i = 0; i < size; i++)
                array3[i] = array1[i] + array2[i];
}

void print_ar(int * array, int size)
{
        for (int i = 0; i < SIZE; i++)
                printf("%d ", array[i]);
        printf("\n");
}

