#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    if (score1<score2)
    {
        printf("player 1 win");
    }
    else if
    (score1>score2)
    {
        printf(" players 2 win");
    }
    else
    {
        printf("its a tie");
    }



    }





int compute_score(string word)
{
    for (int i = 0 ;i < 26; i++)
    {
    POINTS [i] = word [i+65];

    }
    int n = 0;
    for (int j = 0 ;j <strlen(word) ; j=j+2)

    n=POINTS[j]+POINTS[j+1];


    return n;

}
