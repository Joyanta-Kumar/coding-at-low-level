#include <stdio.h>


unsigned long int getLen(const char *string);


int main()
{

  printf("%lu", getLen("Hello"));
  return 0;
}


unsigned long int getLen(const char *string)
{
  for (unsigned long int i = 0; 1; i++) if (string[i] == '\0') { return i; }
}