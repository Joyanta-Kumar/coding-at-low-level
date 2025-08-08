#include <stdio.h>
#include <math.h>


int getCentury(int year);


int main()
{
  int a = 1;
  int b = 0;
  int c = 10;
  a = c / b;
  printf("%d", a);
}


int getCentury(int year)
{
  return (year-1) / 100 + 1;
}