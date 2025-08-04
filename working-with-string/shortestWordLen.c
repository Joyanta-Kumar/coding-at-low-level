#include <sys/types.h>
#include <string.h>
#include <stdio.h>

size_t find_short(const char *s)
{
  size_t smallest = 256;
  size_t letterCount = 0;
  for (size_t i = 0; 1; i++) {
    if (s[i] == ' ' || s[i] == '\0') {
      if (letterCount < smallest) { smallest = letterCount; }
      if (s[i] == '\0') { break; }
      letterCount = 0;
    }
    else { letterCount++; }
  }
  return smallest;
}


int main()
{
  printf("%lu\n", find_short("Let's travel abroad shall we"));
  return 0;
}