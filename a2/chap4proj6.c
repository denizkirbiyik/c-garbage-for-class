#include <stdio.h>

int main() {

  char ean[12];

  printf("Enter first 12 digits of EAN: ");
  scanf("%s", ean);

  for (int i = 0; i < 12; i++) {
    ean[i] -= '0';
  }

  char t1 = 0;
  char t2 = 0;

  for (int j = 1; j < 12; j += 2) {
    t1 += ean[j];
    t2 += ean[j - 1];
  }

  int num = 9 - ((3 * t1 + t2 - 1) % 10);
  printf("\nCheck digit: %d", num);

  return 0;
}
