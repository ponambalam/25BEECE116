#include <stdio.h>

int main() {
    int number, firstDigit;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    firstDigit = number / 100;
    if (firstDigit % 2 == 0) {
        printf("The first digit %d is even.\n", firstDigit);
    } else {
        printf("The first digit %d is odd.\n", firstDigit);
    }

    return 0;
}