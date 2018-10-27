#include <stdio.h>

int main(void)
{
  float x;
  printf("Enter a number: ");
  scanf("%f", &x);
  float result = (((((((3 * x + 2) * x) - 5) * x) - 1) * x) + 7) * x - 6;
  printf("result is %.2f\n", result);
  return 0;
}
