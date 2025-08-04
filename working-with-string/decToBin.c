#include <stdio.h>


void fakeBin(const char *digits, char *binary);


int main()
{
  char digits[] = "54545454";
  char binary[] = "00000000";

  fakeBin(digits, binary);
  printf("%s\n", digits);
  printf("%s\n", binary);
}


void fakeBin(const char *digits, char *binary) {
  int i = 0;
  while (digits[i] != '\0') {
    binary[i] = digits[i] >= '5' ? '1' : '0';
    i++;
  }
  binary[i] = '\0';
}
