#include <stdio.h>
#include "pe12-2a.h"

static int set;
static int distance;
static double fuel;

void set_mode(int mode)
{
        set = mode;

        if (set < 0 || set > 1)
        {
                printf("Invalid mode specified. Mode 1(US) used.\n");
                set = 1;
        }
}

void get_info()
{
        printf("Enter distance traveled in %s: ", (set == 0) ? "kilometers" : "miles");
        scanf("%d", &distance);

        printf("Enter fuel consumed in %s: ", (set == 0) ? "liters" : "gallons");
        scanf("%lf", &fuel);
}


void show_info()
{
        if (set == 0)
                printf("Fuel consumption is %.2lf liters per 100 km.\n", fuel / distance * 100);
        else
                printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
}

