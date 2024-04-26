#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);
int main(void)
{
    // prompt both users for a word
    string word1 = get_string("Player 1's word: ");
    string word2 = get_string("Player 2's word: ");

    // compare the two scores and announce the winner
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    if (score1 > score2)
    {
        printf("Player 1 wins.\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins.\n");
    }
    else
    {
        printf("Tie.\n");
    }
}

// go through each letter and add up the scores
int compute_score(string word)
{
    int score = 0;
    int length = strlen(word);
    for (int i = 0; i < length; i++)
    {
        if (isupper(word[i]))
        {
            score += points[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += points[word[i] - 'a'];
        }
    }
    return score;
}
