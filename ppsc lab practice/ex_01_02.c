#include <stdio.h>

int main() {
  int integer;
  float floatingPoint;
  char character;

  printf("Enter an integer: ");
  scanf("%d", &integer);

  printf("Enter a floating point number: ");
  scanf("%f", &floatingPoint);

  printf("Enter a character: ");
  scanf(" %c", &character);

  printf("You entered: \n");
  printf("Integer: %d\n", integer);
  printf("Floating Point: %f\n", floatingPoint);
  printf("Character: %c\n", character);

  return 0;
}
