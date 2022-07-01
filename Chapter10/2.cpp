#include <stdio.h>

#define SIZE 5

void copy_arr(double * target, double * start, int size); 
void copy_ptr(double * target, double * start, int size);
void copy_ptrs(double * target, double * start, double * end);

int main()
{
        double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
        double target1[SIZE] = {};
        double target2[SIZE] = {};
        double target3[SIZE] = {};

        copy_arr(target1, source, SIZE);
        copy_ptr(target2, source, SIZE); 
        copy_ptrs(target3, source, source + SIZE);
        
        printf("The contents of source, target1, target2, and target3 are:\n");
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", source[i]);
        printf("\n");
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", target1[i]);
        printf("\n"); 
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", target2[i]);
        printf("\n"); 
        for (int i = 0; i < SIZE; i++)
                printf("%.1f ", target3[i]);
        printf("\n");

        return 0;
}

void copy_arr(double * target, double * start, int size)
{
        for (int i = 0; i < size; i++)
                target[i] = start[i];
}

void copy_ptr(double * target, double * start, int size) 
{
        for (int i = 0; i < size; i++)
                *(target + i) = *(start + i);
}

void copy_ptrs(double * target, double * start, double * end)
{
        for (int i = 0; start < end; start++, i++)
                *(target + i) = *start;
}

