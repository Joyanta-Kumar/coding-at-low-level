#include <stdbool.h>
#include <stdio.h>

bool validate_pin(const char *pin) {
  int count = 0;
  while (pin[count] != '\0') {
    if (pin[count] > '9' || pin[count] < '0')  { return false; }
    count++;
  }
  return count == 4 || count == 6;
}

int main()
{
  printf("%d", validate_pin("1234"));
  return 0;
}