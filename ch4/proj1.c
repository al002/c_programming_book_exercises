#include <stdio.h>

int main(void)
{
  int i;
  printf("Enter a two-digit number: ");
  scanf("%d", &i);

  int first = i / 10;
  int last = i % 10;
  printf("The reversal is: %d%d\n", last, first);

  return 0;
}
