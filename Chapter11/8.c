#include <stdio.h>

#define LINE_SIZE 100

char* string_in(char* target_line, char* line_to_find);

int main()
{
        char target_line[LINE_SIZE] = " ";
        char line_to_find[LINE_SIZE] = " ";

        fgets(target_line, LINE_SIZE, stdin);
        fgets(line_to_find, LINE_SIZE, stdin);

