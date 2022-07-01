#include <stdio.h>

void copy_array(int arrays, int elements, int array[arrays][elements], int target[arrays][elements]);
void print_array(int arrays, int elements, int array[arrays][elements]);

int main()
{
        const int arrays = 3;
        const int elements = 5;

        int array[arrays][elements];
        int target[arrays][elements];
        
        for (int i = 0; i < arrays; i++)
                for (int j = 0; j < elements; j++)
                        array[i][j] = i * j + j;

        printf("The elements of the array are:\n");
        print_array(arrays, elements, array);
        printf("The elements of the target array are(random numbers):\n");
        print_array(arrays, elements, target);

        copy_array(arrays, elements, array, target);

        printf("The elements of the target array after the copy are:\n");
        print_array(arrays, elements, target);

        return 0;
}

void copy_array(int arrays, int elements, int array[arrays][elements], int target[arrays][elements])
{
        for (int i = 0; i < arrays; i++)
                for (int j = 0; j < elements; j++)
                        target[i][j] = array[i][j];
}

void print_array(int arrays, int elements, int array[arrays][elements])
{
        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        printf("%d ", array[i][j]);
                }
                printf("\n");
        }
}



