#include<stdio.h>

int main() {

    int x, sum;
    x = 1;
    sum = 0;

    while(x < 11) {
        sum += x;
        x++;
    }

    printf("The sum is : %d\n", sum);

    return 0;
}