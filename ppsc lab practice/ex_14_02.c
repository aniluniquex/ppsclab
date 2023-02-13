#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex subtract(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

int main() {
    struct complex a, b, c;

    printf("Enter the real and imaginary parts of first complex number: ");
    scanf("%f%f", &a.real, &a.imag);
    printf("Enter the real and imaginary parts of second complex number: ");
    scanf("%f%f", &b.real, &b.imag);

    c = subtract(a, b);
    printf("Difference of the complex numbers: %.1f + %.1fi\n", c.real, c.imag);

    return 0;
}
