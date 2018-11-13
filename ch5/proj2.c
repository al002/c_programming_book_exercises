#include <stdio.h>

int main(void)
{
  int hour, minute, h;
  printf("Enter a 24 hours time: ");
  scanf("%d:%d", &hour, &minute);

  h = hour;

  if (hour > 12) {
    h = hour - 12;
  }

  printf("Equivalent 12-hour time: %.2d:%.2d %s\n", h, minute, hour > 12 ? "PM" : "AM");

  return 0;
}
