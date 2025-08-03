#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char *disemvowel(const char *str);
bool isVowel(char letter);
char getLower(char letter);

int main()
{
  printf("%s", disemvowel("HellO wOrld"));
  return 0;
}


char *disemvowel(const char *str)
{
  int i = 0;
  int j = 0;

  while (str[i] != '\0') i++; i++;
  char *newStr = malloc(i);

  for (int k = 0; k < i; k++) {
    if (!isVowel(getLower(str[k]))) {
      newStr[j] = str[k];
      j++;
    }
  }
  newStr[j-1] = '\0';
  newStr = realloc(newStr, j);
  return newStr;
}


bool isVowel(char letter)
{
  const char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
  for (int i = 0; i < 5; i++) {
    if (vowels[i] == letter) {
      return true;
    }
  }
  return false;
}


char getLower(char letter) {
  if (letter <= 'Z') {
    return letter + 32;
  }
  return letter;
}