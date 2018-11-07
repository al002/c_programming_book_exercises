#include <stdio.h>

int main(void)
{
  int num;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &num);

  int i1, i2, i3, i4, i5 = 0;
  i1 = num % 8;
  i2 = (num / 8) % 8;
  i3 = (num / 8 / 8) % 8;
  i4 = (num / 8 / 8 / 8) % 8;
  i5 = (num / 8 / 8 / 8 / 8) % 8;

  printf("In octal, your number is: %d%d%d%d%d\n", i5, i4, i3, i2, i1);

  return 0;
}
