#include <stdio.h>
#include <stdlib.h>

char *strrev(char *string);


int main() {
  printf("%s\n", strrev("Hello"));
  return 0;
}


char *strrev (char *string)
{
  int count = 0;
  while (string[count] != '\0') count++;
  int half = count / 2;
  for (int i = 0; i < half; i++) {
    char temp = string[i];
    string[i] = string[count-i-1];
    string[count-i-1] = temp;
  }
  return string;

}