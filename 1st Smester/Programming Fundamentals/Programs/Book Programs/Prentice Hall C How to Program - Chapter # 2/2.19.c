#include<stdio.h>

int main() {
    int a, b, c, sum, average, product;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);

    sum = a + b + c;
    average = (a + b + c) / 3;
    product = a * b * c;
    printf("Sum is = %d\nProduct is = %d\nAverage is = %d\n", sum, product, average);
    
    // L A R G E S T
    if (a > b) {
        if (a > c) {
            printf("%d is largest\n", a);
        }
        if (c > a) {
            printf("%d is largest\n", c);
        }
    }
    if (b > a) {
        if (b > c) {
            printf("%d is largest\n", b);
        }
        if (c > b) {
            printf("%d is largest\n", c);
        }
    }

    // S M A L L E S T
    if (a < b) {
        if (a < c) {
            printf("%d is smallest\n", a);
        }
        if (c < a) {
            printf("%d is smallest\n", c);
        }
    }
    if (b < a) {
        if (b < c) {
            printf("%d is smallest\n", b);
        }
        if (c < b) {
            printf("%d is smallest\n", c);
        }
    }

    return 0;
}