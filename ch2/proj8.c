#include <stdio.h>

int main(void)
{
  float loan;
  printf("Enter amount of loan: ");
  scanf("%f", &loan);
  float interest_rate;
  printf("Enter interest rate: ");
  scanf("%f", &interest_rate);
  float monthly_payment;
  printf("Enter monthly payment: ");
  scanf("%f", &monthly_payment);

  float interest_rate_percentage = interest_rate / 100.0f / 12.0f;
  
  float balance_after_first = loan + (loan * interest_rate_percentage) - monthly_payment;
  float balance_after_second = balance_after_first + (balance_after_first * interest_rate_percentage) - monthly_payment;
  float balance_after_third = balance_after_second + (balance_after_second * interest_rate_percentage) - monthly_payment;

  printf("Balance remaining after first payment: $%.2f\n", balance_after_first);
  printf("Balance remaining after second payment: $%.2f\n", balance_after_second);
  printf("Balance remaining after third payment: $%.2f\n", balance_after_third);
  return 0;
}
