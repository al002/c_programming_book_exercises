#include <stdio.h>

int main(void)
{
  float x = 366.0124324f;
  printf("%-8.1e\n", x);
  printf("%10.6e\n", x);
  printf("%-8.3f\n", x);
  printf("%6.0f\n", x);
  return 0;
}
