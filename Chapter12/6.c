#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
        int prompt = 0;
        int counter[10] = {};

        for ( ; prompt < 10; prompt++)
        {
                srand((unsigned int) time(NULL));

                for (int i = 0; i < 1000; i++)
                        counter[rand() % 10]++;

                for (int i = 0; i < 10; i++)
                        printf("%d: %d times.\n", i + 1, counter[i]);
                
                printf("\n");

                for (int i = 0; i < 10; i++)
                        counter[i] = 0;
        }

        return 0;
}
                        
    



