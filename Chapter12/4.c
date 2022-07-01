#include <stdio.h> 

int caller_count();

int main()
{
        int times = 0;

        printf("Enter a number of times to call a function.\n");
        scanf("%d", &times);
        
        for (int i = 0; i < times; i++)
                printf("The number of times the function was called is %d.\n", caller_count());

        return 0;
}

int caller_count()
{
        static int count = 0;

        return ++count;
}
