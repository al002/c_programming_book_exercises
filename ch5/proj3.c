#include <stdio.h>

int main(void)
{
  float shares, price, commission, rival_commission, value;

  printf("Enter number of shares: ");
  scanf("%f", &shares);

  printf("Enter price of per share: ");
  scanf("%f", &price);

  value = shares * price;

  if (value < 2500.00f) {
    commission = 30.00f + .017f * value;
  } else if (value < 6250.00f) {
    commission = 56.00f + .0066f * value;
  } else if (value < 20000.00f) {
    commission = 76.00f + .0034f * value;
  } else if (value < 50000.00f) {
    commission = 100.00f + .0022f * value;
  } else if (value < 500000.00f) {
    commission = 155.00f + .0011f * value;
  } else {
    commission = 255.00f + .0009f * value;
  }

  if (shares < 2000.00f) {
    rival_commission = 33.00f + .003f * shares;
  } else {
    rival_commission = 33.00f + .003f * shares;
  }

  if (commission < 39.00f) {
    commission = 39.00f;
  }

  printf("Commission: $%.2f\nRival Commission: $%.2f\n", commission, rival_commission);

  return 0;
}
