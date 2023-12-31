#include<stdio.h>

int main() {

    int x, y, i, power;
    i = 1;
    power = 1;

    printf("Enter the value of 'x' : ");
    scanf("%d", &x);
    printf("Enter the value of 'y' : ");
    scanf("%d", &y);

    while (i <= y) {
        power *= x;
        i++;
    }

    printf("%d\n", power);

    return 0;
}