#include <stdio.h>

int main(void)
{
  int amount;
  printf("Enter a dollar amount: ");
  scanf("%d", &amount);
  int twenty_quant = amount / 20;
  int twenty_amount = twenty_quant * 20;
  int ten_quant = (amount - twenty_amount) / 10;
  int ten_amount = ten_quant * 10;
  int five_quant = (amount - twenty_amount - ten_amount) / 5;
  int five_amount = five_quant * 5;
  int one_quant = (amount - twenty_amount - ten_amount - five_amount);
  printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", twenty_quant, ten_quant, five_quant, one_quant);
  return 0;
}
