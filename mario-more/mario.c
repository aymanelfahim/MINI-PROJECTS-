#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
do
 {
    n = get_int("height:");
     }
  while (n < 1 || n>8 );
  for (int i = 0; i < n; i++)
  {
   for (int j = 0; j < i+1; j++)
   printf("#");
   for (int k = 0; k<n-i-1; k++)
   printf(" ");
   for (int g = 0; g < n; g++)
    {
        for (int l = 0; l < n; l++)
        {
            printf("  ");
        }
      printf("\n");
   }
  }
}



