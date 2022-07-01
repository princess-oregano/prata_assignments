#include <stdio.h>

#define ARRAYS 3
#define ELEMENTS 5

void scanner(int arrays, int elements, double target[arrays][elements]);
double average_set(int elements, double* target);
double average_total(int arrays, int elements, double target[arrays][elements]);
double maxima(int arrays, int elements, double target[arrays][elements]);
void report(double avset1, double avset2, double avset3, double avtot, double max);

int main()
{
        double array[ARRAYS][ELEMENTS];

        printf("Hello! Enter an 3x5 array:\n");
        scanner(ARRAYS, ELEMENTS, array);
        report(
                average_set(ELEMENTS, &array[0][0]),
                average_set(ELEMENTS, &array[1][0]),
                average_set(ELEMENTS, &array[2][0]),
                average_total(ARRAYS, ELEMENTS, array), 
                maxima(ARRAYS, ELEMENTS, array));

        return 0;
}

void scanner(int arrays, int elements, double target[arrays][elements])
{
        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        scanf("%lf", &target[i][j]);
                }
        }
}

double average_set(int elements, double* target)
{
        double set = 0;
        for (int i = 0; i < elements; i++)
                set = set + target[i];

        return set / elements;
}

double average_total(int arrays, int elements, double target[arrays][elements])
{
        double total = 0;
        double avtot = 0;

        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        total = total + target[i][j];
                }
        }
        
        avtot = total / (arrays * elements);

        return avtot;
}

double maxima(int arrays, int elements, double target[arrays][elements])
{
        double max = target[0][0];

        for (int i = 0; i < arrays; i++)
        {
                for (int j = 0; j < elements; j++)
                {
                        if (target[i][j] > max)
                                max = target[i][j];
                }
        }

        return max;
}

void report(double avset1, double avset2, double avset3, double avtot, double max) 
{
        printf("\n**************THE ANALYSIS OF THE ARRAY***************\n\n");
        printf("The average of the first set is %.2lf\n", avset1);
        printf("The average of the second set is %.2lf\n", avset2);
        printf("The average of the third set is %.2lf\n", avset3);
        printf("The average of all the values is %.2lf\n", avtot);
        printf("The largest value in the array is %.2lf\n", max);
}        

