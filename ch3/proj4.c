#include <stdio.h>

int main(void)
{
  int a, b, c;
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &a, &b, &c);

  printf("You entered %d.%d.%d\n", a, b, c);
  return 0;
}
