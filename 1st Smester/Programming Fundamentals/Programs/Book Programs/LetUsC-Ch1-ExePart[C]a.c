#include<stdio.h>

int main() {
    float abc = 2.5, g;
    int big = 2;
    g = big / 2 + big * 4 / big - big + abc / 3;
    printf("Value of g is = %f\n", g);
    return 0;
}