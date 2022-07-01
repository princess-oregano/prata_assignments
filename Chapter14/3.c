#include <stdio.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book {
        char title[MAXTITL];
        char author[MAXAUTL];
        float value;
};

char * s_gets(char * st, int n);
void sort_title(struct book* ptr[], int count);

int main()
{
        struct book library[MAXBKS];
        struct book* ptr[MAXBKS];
        int count = 0;
        int index = 0;

        printf("Please enter the book title.\n");
        printf("Press [enter] at the start of a line to stop.\n");
        
        while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
        && library[count].title[0] != '\0')
        {
                ptr[count] = &library[count];

                printf("Now enter the author.\n");
                s_gets(library[count].author, MAXAUTL);
                
                printf("Now enter the value.\n");
                scanf("%f", &library[count++].value);
                
                while (getchar() != '\n')
                        continue;

                if (count < MAXBKS)
                        printf("Enter the next title.\n");
        }

        if (count > 0)
        {
                printf("Here is the list of your books:\n");
                
                for (index = 0; index < count; index++)
                        printf("%s by %s: $%.2f\n", library[index].title,
                                library[index].author, library[index].value);

                sort_title(ptr, count);
                printf("Here is the list of your books in alphabetical order:\n");
                
                for (index = 0; index < count; index++)
                        printf("%s by %s: $%.2f\n", ptr[index]->title,
                                        ptr[index]->author, ptr[index]->value);
       }
        else
                printf("No books? Too bad.\n");


        
        return 0;
}

char * s_gets(char * st, int n)
{
        char * ret_val;
        char * find;

        ret_val = fgets(st, n, stdin);
        
        if (ret_val)
        {
                find = strchr(st, '\n');
                if (find)
                        *find = '\0';
        }
        else
                while (getchar() != '\n')
                        continue;
        
        return ret_val;
}

void sort_title(struct book* sort_ptr[], int count)
{
        int top = 0;
        int search = 0;
        struct book * temp;

        for (top = 0; top < count - 1; top++)
                for (search = top + 1; search < count; search++)
                        if (strcmp(sort_ptr[search]->title, sort_ptr[top]->title) < 0)
                        {
                                temp = sort_ptr[search];
                                sort_ptr[search] = sort_ptr[top];
                                sort_ptr[top] = temp;
                        }
}
