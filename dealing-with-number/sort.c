#include <stdio.h>


void sort_ascending (size_t length, int array[length])
{
  if (length == 0) {
    return NULL;
  }

  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length; j++) {
      if (array[i] < array[j]) {
        int temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }

  return array;
}


int main()
{
  int n[4] = {2,3,1,5};
  sort_ascending(4, n);
  return 0;
}