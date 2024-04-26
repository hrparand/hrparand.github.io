#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool onlydigits(string argv);

char rotate(char c, int key);

int main(int argc, string argv[])
{
    // accept only one command line argument
    if ((argc == 2) && onlydigits(argv[1]))
    {
        int key = atoi(argv[1]);
        string plaintext = get_string("Plaintext:  ");

        printf("ciphertext: ");
        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            printf("%c", rotate(plaintext[i], key));
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf(" Usage: ./caesar key\n");
        return 1;
    }
}

// accept only digits
bool onlydigits(string argv)
{
    int length = strlen(argv);
    for (int i = 0; i < length; i++)
    {
        if (!isdigit(argv[i]))
        {
            return false;
        }
    }
    return true;
}

// rotate
char rotate(char c, int key)
{
    if (isupper(c))
    {
        int Pi = c - 65;
        int Ci = (Pi + key) % 26;
        char cipher = Ci + 65;
        return cipher;
    }
    else if (islower(c))
    {
        int Pi = c - 97;
        int Ci = (Pi + key) % 26;
        char cipher = Ci + 97;
        return cipher;
    }
    else
    {
        return c;
    }
}
