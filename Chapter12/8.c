#include <stdio.h>
#include <stdlib.h>

int* make_array(int num_of_elem, int value);
void show_array(const int ar[], int length);

int main()
{
        int* pa;
        int size;
        int value;
        
        printf("Enter the number of elements: ");
        
        while (scanf("%d", &size) == 1 && size > 0)
        {
                printf("Enter the initialization value: ");
                scanf("%d", &value);
                
                pa = make_array(size, value);
                
                if (pa)
                {
                        show_array(pa, size);
                        free(pa);
                }
                printf("Enter the number of elements (<1 to quit): ");
        }

        printf("Done.\n");
        
        return 0;
}

int* make_array(int num_of_elem, int value)
{
        int* pointer = (int*) malloc(num_of_elem * sizeof(int));
        
        for (int i = 0; i < num_of_elem; i++)
                *(pointer + i) = value;

        return pointer;
}

void show_array(const int ar[], int length)
{
        for (int i = 0; i < length; i++)
        {
                if (i % 8 == 0 && i > 0)
                        printf("\n");
                printf("%d ", ar[i]);
        }
        
        printf("\n");
}

