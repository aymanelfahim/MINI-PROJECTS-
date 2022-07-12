#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
if  (argc != 2)
{
 printf(" chi qlwa");
 return 1;
}

    for (int i = 0; i < strlen(argv[1]); i++)
{
        if (!isdigit(argv[1][i]))
        {
        printf(" chi qlawi");
        return 2;
        }
}

        int key = atoi(argv[1]);

        string a = get_string("plaint text:");
        for (int j = 0, n = strlen(a); j < n; j++)
{
        if (isupper(a[j]))
        {
        a[j]=(a[j]-65+key)%26;
        a[j]=a[j]+65;
        }
        if ( islower(a[j]))
        {
        a[j]=(a[j]-91+key)%26;
        a[j]=a[j]+91;
        }







    }         printf("ciphertext: %sn",a );

    }












