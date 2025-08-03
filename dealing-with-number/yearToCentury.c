#include <stdio.h>
#include <math.h>


int getCentury(int year);


int main()
{
  return 0;
}


int getCentury(int year)
{
  return (year-1) / 100 + 1;
}