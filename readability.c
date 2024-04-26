#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int length;
float count_sentences(string text);
float count_words(string text);
float count_letters(string text);
int main(void)
{
    // prompt the user for a text
    string text = get_string("Enter a text: ");
    length = strlen(text);
    // count the number of words, letters and sentences
    float letters = count_letters(text);
    float words = count_words(text);
    float sentences = count_sentences(text);
    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;

    // compute the index
    int index = round((0.0588 * (L) -0.296 * (S) -15.8));
    if ((1 <= index) && (index < 16))
    {
        printf("Grade %i\n", index);
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade 16+\n");
    }
}

// function to count letters
float count_letters(string text)
{
    float letters = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
    }
    return letters;
}

// function to count words
float count_words(string text)
{
    float words = 1;
    for (int i = 0; i < length; i++)
    {
        if (isblank(text[i]))
        {
            words += 1;
        }
    }
    return words;
}

// function to count sentences

float count_sentences(string text)
{
    float sentences = 0;
    for (int i = 0; i < length; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences += 1;
        }
    }
    return sentences;
}
