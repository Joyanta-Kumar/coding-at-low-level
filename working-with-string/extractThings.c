#include <stdio.h>


int getAge(const char *inputString);


int main()
{
  getAge("3 years old.");
  return 0;
}

int getAge(const char *inputString)
{
  return (int) inputString[0]-48;
}