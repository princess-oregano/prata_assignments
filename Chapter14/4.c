#include <stdio.h>
#include <string.h>

struct name {
        char first_name[41];
        char middle_name[41];
        char last_name[41];
};

struct soc_sec {
        int soc_number;
        struct name identity;
};

void print_struct(struct soc_sec data[]);

int main()
{
        struct soc_sec soc_data[5] = {
                {302039823, {"Flossie", "Maria", "Dribble"}},
                {956456433, {"Marianna", "Lia", "Mirage"}},
                {565327867, {"Via", "Rirett", "Raichel"}},
                {694864556, {"Verne", "", "Kartrait"}},
                {784561564, {"Kairen", "", "Riscott-Raichel"}}
        };

        print_struct(soc_data);

        return 0;
}

void print_struct(struct soc_sec data[])
{
        for (int i = 0; i < 5; i++)
        {
                if (strlen(data[i].identity.middle_name) > 0)
                        printf("%s, %s %c. – %d\n", data[i].identity.last_name, data[i].identity.first_name,
                                        data[i].identity.middle_name[0], data[i].soc_number);
                else
                        printf("%s, %s – %d\n", data[i].identity.last_name, data[i].identity.first_name,
                                        data[i].soc_number);
        }
}
               
