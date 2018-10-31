#include <stdio.h>

int main(void)
{
  int item_num, year, month, day;
  float unit_price;

  printf("Enter item number: ");
  scanf("%d", &item_num);

  printf("Enter unit price: ");
  scanf("%f", &unit_price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("%-d\t$%6.2f\t%02d/%02d/%d\n", item_num, unit_price, month, day, year);

  return 0;
}
