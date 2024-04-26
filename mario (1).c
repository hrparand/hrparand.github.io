#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promp the user for the height of the pyramid should be
    int height;
    do
    {
        height = get_int("how tall should the pyramid be? ");
    }

    while (height < 1 || height > 8);

    // print the # as blocks of the pyramid

    for (int linenumber = 0; linenumber < height; linenumber++)
    {
        for (int spaces = 0; spaces < height - linenumber - 1; spaces++)
        {
            printf(" ");
        }
        for (int hashnumber = 0; hashnumber <= linenumber; hashnumber++)
        {

            printf("#");
        }
        printf("  ");
        for (int hashnumber = 0; hashnumber <= linenumber; hashnumber++)
        {
            printf("#");
        }
        printf("\n");
    }
}
