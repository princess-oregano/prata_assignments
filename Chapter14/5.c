#include <stdio.h>

#define CSIZE 4

struct name {
        char first_name[41];
        char last_name[41];
};

struct student {
        struct name identity;
        float grade[3];
        float average;
};

void get_info(struct student info[]);
void calc_average(struct student info[]);
void print_student(struct student info[]);
void print_class(struct student info[]);

int main()
{
        struct student array[CSIZE] = {
                {{"Via", "Raichel"}, {0.0, 0.0, 0.0}, 0.0},
                {{"Kairen", "Riscott"}, {0.0, 0.0, 0.0}, 0.0},
                {{"Marathea", "Feit"}, {0.0, 0.0, 0.0}, 0.0},
                {{"Isaac", "Feit"}, {0.0, 0.0, 0.0}, 0.0}
        };

        printf("Enter the grades\n");
        get_info(array);
        calc_average(array);
        print_student(array);
        print_class(array);

        return 0;
}

void get_info(struct student info[])
{
        for (int i = 0; i < CSIZE; i++)
                for (int j = 0; j < 3; j++)
                        scanf("%f", &info[i].grade[j]);
}

void calc_average(struct student info[])
{
        float total = 0.0;

        for (int i = 0; i < CSIZE; i++, total = 0.0)
        {
                for (int j = 0; j < 3; j++)
                        total += info[i].grade[j];
                
                info[i].average = total / 3;
        }
}

void print_student(struct student info[])
{
        for (int i = 0; i < CSIZE; i++)
                printf("%s, %s -- %.1f, %.1f, %.1f. Average: %f\n", info[i].identity.last_name,
                                 info[i].identity.first_name, info[i].grade[0], info[i].grade[1],
                                 info[i].grade[2], info[i].average);
}

void print_class(struct student info[])
{
        float  total1 = 0.0;
        float total2 = 0.0;
        float total3 = 0.0;
        float total_av = 0.0;

        for (int i = 0; i < CSIZE; i++)
        {
                total1 += info[i].grade[0];
                total2 += info[i].grade[1];
                total3 += info[i].grade[2];
                total_av += info[i].average;
        }

        printf("The average grade in class for the first subject: %.1f\n"
               "Second: %.1f\n"
               "Third: %.1f\n"
               "Overall: %.1f\n", (double) total1 / CSIZE, (double) total2 / CSIZE, 
                                  (double) total3 / CSIZE, (double) total_av / CSIZE);
}
 
