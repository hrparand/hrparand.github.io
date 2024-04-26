#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // prompt the user for their name
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}
