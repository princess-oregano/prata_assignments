#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int random[100] = {};
        int temp;

        srand((unsigned int) time(0));

        for (int i = 0; i < 100; i++)
                random[i] = rand() % 10 + 1;

        printf("The array before sorting.\n");
        for (int i = 0; i < 100; i++)
        {
                if (i % 10 == 0)
                        printf("\n");
                printf("%3d ", random[i]);
        }
        printf("\n");

        for (int i = 0; i < 99; i++)
                for (int j = 0; j < 100; j++)
                        if (random[j+1] > random[j])
                        {
                                temp = random[j+1];
                                random[j+1] = random[j];
                                random[j] = temp;
                        }
        
        printf("The array after sorting.\n");
        for (int i = 0; i < 100; i++)
        {
                if (i % 10 == 0)
                        printf("\n");
                printf("%3d ", random[i]);
        }
        
        printf("\n");

        return 0;
}

