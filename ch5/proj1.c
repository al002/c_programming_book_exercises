#include <stdio.h>

int main(void)
{
  int n, i;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 10) {
    i = 1;
  } else if (n < 100) {
    i = 2;
  } else if (n < 1000) {
    i = 3;
  }

  printf("The number %d has %d digits\n", n, i);
  
  return 0;
}
