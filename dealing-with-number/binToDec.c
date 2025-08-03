#include <stdio.h>
#include <stddef.h>


unsigned binary_array_to_numbers(const unsigned bits[], size_t count)
{
  unsigned integer = 0;
  int m = 1;
  for (count; count > 0; count--) {
    integer += (bits[count] ? m : 0);
    m = m * 10;
  }
	return integer;
}