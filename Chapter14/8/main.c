#include <stdio.h>
#include <stdbool.h>

#define SEATS 12

struct seat {
        int id_number;
        bool assign_marker;
        char last_name;
        char first_name;
};

void menu();
void show_num_empty(struct seat plane[]);
void show_list_empty(struct seat plane[]);
void show_seats(struct seat plane[]);
void assign_seat(struct seat plane[]);
void delete_assign(struct seat plane[]);

int main()
{
        int mode;
        struct seat plane[SEATS];

        printf("Welcome to Colossus Airlines!\n");
        printf("To choose a function, enter its letter label:\n"
               "a) Show number of empty seats\n"
               "b) Show list of empty seats\n"
               "c) Show alphabetical list of seats\n"
               "d) Assign a customer to a seat assignment\n"
               "e) Delete a seat assignment\n"
               "f) Quit\n");
        
        while ((mode = getchar()) != 'f')
        {
                switch(mode)
                {
                        case 'a':
                                show_num_empty(plane);
                                break;
                        case 'b':
                                show_list_empty(plane);
                                break;
                        case 'c':
                                show_seats(plane);
                                break;
                        case 'd':
                                assign_seat(plane);
                                break;
                        case 'e':
                                delete_assign(plane);
                                break;
                        default:
                                printf("Wrong input!\n");
                }
        }

        printf("Thank you for using Colossus Airlines!\n");

        return 0;
}

void show_num_empty(struct seat plane[])
{
        int count = 0;

        for (int i = 0; i < SEATS; i++)
                if (!assign_marker)
                        count++;

        printf("There are %d seats available.\n", count);
}
