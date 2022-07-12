#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    for (int i = 0, n = strlen(argv); i < n; i++)
    {
        if (argc == 2 && isdigit(argv[i]))
        {
        int atoi(string argv[1]);
        argv[1]=k
         a=get_string("plaint text:")
        for (int j = 0, n = strlen(a); j < n; j++)
{
        if (is upper(a[j]))
        {
        a[j]=a[j]-65;
        }
        if ( is lower(a[j]))
        a[j]=a[j]-91;
}
        for (int g = 0, n = strlen(a); g < n; g++)
        {
        a[g]=(a[g]+k)%26;
        }
        for (int l = 0, n = strlen(a); l < n; l++)
        {
        if (is lower(a[l]) )
        { a[l]=a[l]+91

        }
        if (is upper(a[l]))
        {
            a[l]=a[l]+65

        }



        printf("ciphertext%s"a );
    }
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;

    }
    }









}