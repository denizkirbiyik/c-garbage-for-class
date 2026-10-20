#include <stdio.h>

int main() {

  printf("Input numerical grade: ");
  int grade;
  scanf("%d", &grade);

  char num;

  switch (grade / 10) {
  case 10:
  case 9:
    num = 'A';
    break;
  case 8:
    num = 'B';
    break;
  case 7:
    num = 'C';
    break;
  case 6:
    num = 'D';
    break;
  default:
    num = 'F';
    break;
  }

  printf("Letter Grade: %c", num);

  return 0;
}
