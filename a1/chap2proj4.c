#include <stdio.h>

int main() {
  printf("Enter an amount: ");

  float x;
  scanf("%f", &x);

  printf("\nWith tax added: %.2f\n", x*1.05);

  return 0;
}
