#include <stdio.h>

int main() {

  printf("Enter ISBN: ");

  int a, b, c, d, e;
  scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);

  printf("GS1 prefix: %d\nGroup identifier: %d %d %d %d \n", a, b, c, d, e);

  return 0;
}
