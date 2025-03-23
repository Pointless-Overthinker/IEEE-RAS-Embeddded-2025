#include <stdio.h>

int main() {
  int n;
  printf("Enter the period: ");
    scanf("%d", &n);
    int years = n / 365;
    int remaining_days = n % 365;
    int months = remaining_days / 30;
    int days = remaining_days % 30;
    printf("The period is %d years, %d months, and %d days.\n", years, months, days);
    return 0;
}