#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c;
  float root1, root2, realPart, imaginaryPart, discriminant;

  printf("Enter the coefficients a, b, and c: ");
  scanf("%f%f%f", &a, &b, &c);

  discriminant = b * b - 4 * a * c;

    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);


  if (discriminant > 0) {
    
    printf("Root 1: %.2f\n", root1);
    printf("Root 2: %.2f\n", root2);
  } else if (discriminant == 0) {
    
    printf("Root 1: %.2f\n", root1);
    printf("Root 2: %.2f\n", root2);
  } else {
    // realPart = -b / (2 * a);
    // imaginaryPart = sqrt(-discriminant) / (2 * a);
    printf("Root 1: %.2f + %.2fi\n", realPart, imaginaryPart);
    printf("Root 2: %.2f - %.2fi\n", realPart, imaginaryPart);
  }

  return 0;
}
