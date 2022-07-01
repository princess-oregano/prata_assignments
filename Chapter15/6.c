#include <stdio.h>
#include <stdbool.h>

#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define OFF 0
#define ON 1
#define ID_MASK 0xFF
#define SIZE_MASK 0x7F

struct settings {
        unsigned int font_id:     8;
        unsigned int font_size:   7;
        unsigned int:             1;
        unsigned int align:       2;
        unsigned int bold:        1;
        unsigned int italic:      1;
        unsigned int underline:   1;
        unsigned int:             3;
};

int main()
{
        struct settings font = {1, 12, LEFT, OFF, OFF, OFF};
        char choice;

        printf("  ID SIZE ALIGNMENT   B   I   U\n");
        
        printf("%4d %4d", font.font_id, font.font_size); 
        
        if (font.align == LEFT)
                printf("    left    ");
        else if (font.align == CENTER)
                printf("   center   ");
        else if (font.align == RIGHT) 
                printf("    right   ");

        if (!font.bold)
                printf("off ");
        else 
                printf(" on ");
        
        if (!font.italic)
                printf("off ");
        else 
                printf(" on ");

        if (!font.underline)
                printf("off ");
        else 
                printf(" on ");
        
        printf("\n");

        puts("f)change font       s)change size      a)change alignment");
        puts("b)toggle bold       i)toggle italic    u)toggle underline");
        puts("q)quit");

        while ((choice = getchar()) != 'q')
        {
                while (getchar() != '\n')
                        continue;

                switch (choice)
                {
                        case 'f':
                                printf("Enter the ID number of the font(1-255): ");
                                
                                int id = 0;
                                scanf("%d", &id);
                                
                                if (id > 0 && id < 256)
                                        font.font_id = id & ID_MASK; 
                                else 
                                        printf("Invalid ID number.\n");

                                while (getchar() != '\n')
                                        continue;

                                break;

                        case 's':
                                printf("Enter the size of the font(1-127): ");
                                
                                int size = 0;
                                scanf("%d", &size);
                                if (size > 0 && size < 127) 
                                        font.font_size = size & SIZE_MASK;
                                else 
                                        printf("Invalid size number.\n");

                                while (getchar() != '\n')
                                        continue;

                                break;
                        
                        case 'a':
                                printf("Select alignment:\n");
                                printf("l)left   c)center   r)right\n");
                                
                                char alignment; 
                                if ((alignment = getchar()) == 'l')
                                        font.align = LEFT;
                                else if (alignment == 'c')
                                        font.align = CENTER;
                                else if (alignment == 'r')
                                        font.align = RIGHT;
                                else 
                                        printf("Wrong input!\n");
                                        
                                while (getchar() != '\n')
                                        continue;

                                break;
                        
                        case 'b':
                                font.bold = ~font.bold;
                                break;
                        
                        case 'i':
                                font.italic = ~font.italic;
                                break;
                        
                        case 'u':
                                font.underline = ~font.underline;
                                break;
                        
                        default:
                                printf("Wrong input!\n");
                }
       
                printf("  ID SIZE ALIGNMENT   B   I   U\n");
        
                printf("%4d %4d", font.font_id, font.font_size); 
                
                if (font.align == LEFT)
                        printf("    left    ");
                else if (font.align == CENTER)
                        printf("   center   ");
                else if (font.align == RIGHT) 
                        printf("   right   ");

                if (!font.bold)
                        printf("off ");
                else 
                        printf(" on ");
                
                if (!font.italic)
                        printf("off ");
                else 
                        printf(" on ");

                if (!font.underline)
                        printf("off ");
                else 
                        printf(" on ");
                
                printf("\n");

                puts("f)change font       s)change size      a)change alignment");
                puts("b)toggle bold       i)toggle italic    u)toggle underline");
                puts("q)quit");
        }

        return 0;
}

