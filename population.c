#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // promptign the user for a starting number of llamas
    int s;
    do
    {
        s = get_int("start size: ");
    }
    while (s < 9);

    // prompting the user for an ending number of llamas

    int g;
    do
    {
        g = get_int("end size: ");
    }
    while (g < s);

    // calculate the number of llamas at the end of each year

    int years = 0;
    while (s < g)
    {
        s = s + s / 3 - s / 4;
        years++;
    }
    printf("Years: %i\n", years);
}
