#include <stdio.h>

int main() {
  printf("Enter phone number [(xxx) xxx-xxxx]: ");

  int p1, p2, p3;
  scanf("(%d) %d-%d", &p1, &p2, &p3);

  printf("You entered %03d.%03d.%04d", p1, p2, p3);

  return 0;
}
