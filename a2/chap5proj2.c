#include <stdio.h>
#include <string.h>

int main() {

  printf("Enter a 24-hour time: ");

  int hr, min;
  scanf("%d:%d", &hr, &min);

  char end[3];

  strcpy(end, "AM");

  if (hr > 12) {
    hr -= 12;
    strcpy(end, "PM");
  } else if (hr == 0) {
    hr = 12;
  }

  printf("%.2d:%.2d %s", hr, min, end);

  return 0;
}
