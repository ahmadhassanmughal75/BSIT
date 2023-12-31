#include<stdio.h>

int main() {
    int a, b, sum, difference, product, quotient, remainder;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;
    remainder = a % b;

    printf("Sum is = %d\nDifference is = %d\nProduct is = %d\nQuotient is = %d\nRemainder is = %d\n", sum, difference, product, quotient, remainder);

    return 0;
}