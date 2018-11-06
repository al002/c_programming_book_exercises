#include <stdio.h>

int main(void)
{
  int i = 5;
  int j = 3;
  int k = 9;
  printf("%d %d\n", i / j, i % j);

  i = 2;
  j = 3;
  printf("%d\n", (i + 10) % j);

  i = 7;
  j = 8;
  printf("%d\n", (i + 5) % (j + 2) / k);

  return 0;
}
