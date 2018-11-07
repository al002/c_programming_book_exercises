#include <stdio.h>

int main(void)
{
  int i;
  printf("Enter a three-digit number: ");
  scanf("%d", &i);

  int first = i / 100;
  int second = (i / 10) % 10;
  int last = i % 10;
  printf("The reversal is: %d%d%d\n", last, second, first);

  return 0;
}
