#include <stdio.h>

int main() {
  int number, i;
  int sum = 0;
  
  printf("Enter the value of n: ");
  scanf("%d", &number);
  
  printf("The first %d even numbers are: ", number);
  for (i = 2; i <= 2 * number; i += 2) {
    printf("%d ", i);
    sum += i;
  }
  printf("\nThe sum of the first %d even numbers is: %d\n", number, sum);
  
  return 0;
}
