#include<stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);

    if (a % b == 0) {
        printf("%d is a Multiple of %d\n", a, b);
    }
    if (a % b != 0) {
        printf("%d is not a Multiple of %d\n", a, b);
    }

    return 0;
}