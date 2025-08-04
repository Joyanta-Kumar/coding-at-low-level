#include <stdio.h>
#include <stdlib.h>

char *accum(const char *source);
char getUpper(char letter);
char getLower(char letter);


int main()
{
  printf("%s\n", accum("NjZqevBUXxQ"));
  return 0;
}


char *accum(const char *source)
{
  int count = 0;
  int index = 0;
  int newCount = 0;
  while (source[count] != '\0') count++;
  newCount = (1+count) * count / 2 + count - 1;
  char *output = calloc(newCount+1, 1);

  for (int i = 0; i < count; i++) {
    if (i != 0) { output[index++] = '-'; }
    output[index++] = getUpper(source[i]);
    for (int j = 0; j < i; j++) { output[index++] = getLower(source[i]); }
  }
  return output;
}



char getUpper(char letter) {
  if (letter > 90) {
    return letter - 32;
  }
  return letter;
}
char getLower(char letter) {
  if (letter < 90) {
    return letter + 32;
  }
  return letter;
}