#include<stdio.h>

int main() {
    int a, b, c, res, outp;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    res = (a > b) * a + (b > a) * b;
    outp = (res > c) * res + (c > res) * c;

    printf("a = %d\t b = %d\t c = %d\nMaximum number is: %d\n", a, b, c, outp);
    return 0;
}