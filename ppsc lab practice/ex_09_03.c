//decimal to binary using function
#include <stdio.h>

void decimalToBinary(int n) {
    int binaryNumber[32];
    int i = 0;
    while (n > 0) {
        binaryNumber[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary equivalent of the decimal number: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binaryNumber[j]);
    printf("\n");
}

int main() {
    int decimalNumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    decimalToBinary(decimalNumber);
    return 0;
}
