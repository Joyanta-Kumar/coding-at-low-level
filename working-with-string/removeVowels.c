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
  // Got the size of the actual string.

  for (int k = 0; k < i; k++) {
    if (!isVowel(getLower(str[k]))) {
      newStr[j] = str[k];
      j++;
    }
  }
  // Counted minimum memory we need.

  newStr[j-1] = '\0';
  newStr = realloc(newStr, j);
  // Our wanted string in newStr, and the str, fuck off.
  return newStr;
}


bool isVowel(char letter)
{
  // Let's make everything as my own as possible.
  const char vowels[5] = { 'a', 'e', 'i', 'o', 'u' };
  for (int i = 0; i < 5; i++) {
    if (vowels[i] == letter) {
      return true;
    }
  }
  return false;
}


char getLower(char letter) {
  // Yes, I want to make this too.
  if (letter <= 'Z') {
    return letter + 32;
  }
  return letter;
}