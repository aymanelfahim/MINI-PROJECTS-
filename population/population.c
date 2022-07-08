#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int s;
  do
  {
    s=get_int("give start);
  }
  while(s<9);
  int e;
  do
  {
    e=get_int("give end);
  }
  while (e<s);
  int n=0;
  while (e>=s)
  s=s+s/3-s/4;
  n=n+1;
  printf("years:"n);





