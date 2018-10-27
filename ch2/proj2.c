#include <stdio.h>

#define M_PI 3.14

int main(void)
{
  float radius = 10.0f;
  float volume = (4.0f * M_PI * radius * radius * radius) / 3.0f;
  printf("volume is %f\n", volume);
  return 0;
}
