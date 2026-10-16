#include <stdio.h>

float expo(float num, int e) {
  float r = 1;


  for (int i = 0; i < e; i++) {
    r *= num;
  }

  return r;
}

int main() {

  printf("Enter a number: ");

  float f;
  scanf("%f", &f);

  printf("\nThe result is: %f\n", 3*expo(f, 5)+2*expo(f, 4)-5*expo(f, 3)-expo(f, 2)+7*f-6);

  return 0;
}
