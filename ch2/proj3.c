#include <stdio.h>

#define M_PI 3.14

int main(void)
{
  float radius;
  printf("Enter radius: ");
  scanf("%f", &radius);
  float volume = (4.0f * M_PI * radius * radius * radius) / 3.0f;
  printf("volume is %f\n", volume);
  return 0;
}
