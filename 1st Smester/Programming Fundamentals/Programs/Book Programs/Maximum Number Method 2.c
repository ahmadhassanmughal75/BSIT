#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter the value of a = ");
    scanf("%d", &a);
    printf("Enter the value of b = ");
    scanf("%d", &b);
    printf("Enter the value of c = ");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("Maximum Number is => %d\n", a);
        } else {
            printf("Maximum Number is => %d\n", c);
        }
    }
    else if (b > a) {
        if (b > c) {
            printf("Maximum Number is => %d\n", b);
        } else {
            printf("Maximum Number is => %d\n", c);
        }
    }

    return 0;
}