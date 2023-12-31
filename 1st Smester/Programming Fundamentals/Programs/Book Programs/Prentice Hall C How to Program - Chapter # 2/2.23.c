#include<stdio.h>

int main() {
    int a, b, c, d, new1L, new2L, new3L, new1S, new2S, new3S;

    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("Enter the value of c : ");
    scanf("%d", &c);
    printf("Enter the value of d : ");
    scanf("%d", &d);

    // Formula to check the largest number
    new1L = (a > b) * a + (b > a) * b;
    new2L = (new1L > c) * new1L + (c > new1L) * c;
    new3L = (new2L > d) * new2L + (d > new2L) * d;

    printf("Largest value is = %d\n", new3L);

    // Formula to check the smallest number
    new1S = (a < b) * a + (b < a) * b;
    new2S = (new1S < c) * new1S + (c < new1S) * c;
    new3S = (new2S < d) * new2S + (d < new2S) * d;

    printf("Smallest value is = %d\n", new3S);

    return 0;
}