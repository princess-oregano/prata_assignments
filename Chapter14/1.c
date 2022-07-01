#include <stdio.h>
#include <string.h>
#include <ctype.h>

int days(char name[]);
char* s_gets(char line[], int limit);

struct month {
        char name[10];
        char abbrev[4];
        int days;
        int monumb;
        };

struct month months[12] =
        {
                {"january", "jan", 31, 1},
                {"february", "feb", 28, 2},
                {"march", "mar", 31, 3},
                {"april", "apr", 30, 4},
                {"may", "may", 31, 5},
                {"june", "jun", 30, 6},
                {"july", "jul", 31, 7},
                {"august", "aug", 31, 8},
                {"september", "sep", 30, 9},
                {"october", "oct", 31, 10},
                {"november", "nov", 30, 11},
                {"december", "dec", 31, 12}
        };

int main()
{
        char month_name[10];

        printf("Enter the name of the month: ");
        s_gets(month_name, 10);

        if (days(month_name))
                        printf("The number of days in the year up\n"
                               "to this month is %d.\n", days(month_name));
        else 
                printf("Invalid input!\n");

        return 0;
}

int days(char name[])
{
        int index = 0;
        int total = 0;
        int num_of_mon = 0;

        for (int i = 0; i < 12; i++)
                if (!strcmp(name, months[i].name))
                        num_of_mon = i;

        if (num_of_mon > 0)
        {
                for (index = 0, total = 0; index < num_of_mon; index++)
                        total += months[index].days;

                return(total);
        }
        else 
                return 0;
}

char* s_gets(char* line, int limit)
{
        char ch;      //temporary character
        int i = 0;

        while ((ch = getchar()) != '\n' && i < limit)
        {
                        line[i] = tolower(ch);
                        i++;
        }

        line[i] = '\0';

        return line;
}
