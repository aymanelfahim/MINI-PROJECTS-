#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("height:");
    }
    while (n < 1 ||	n>8 );

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int k = 0; k < n-i; k++)
            printf(".");
        for (int j = 0; j < i+1; j++)
            printf("#");
printf("\n");

        }


    }
