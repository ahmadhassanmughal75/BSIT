#include<stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is largest\n", a);
    }
    if (b > a) {
        printf("%d is largest\n", b);
    }
    if (a == b) {
        printf("These numbers are equal\n");
    }

    return 0;
}