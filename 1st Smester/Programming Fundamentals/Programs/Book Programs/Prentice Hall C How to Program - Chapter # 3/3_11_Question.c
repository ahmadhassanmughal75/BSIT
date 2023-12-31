#include<stdio.h>

int main() {

    int x = 1, total;

    while(x <= 10) {
        total += x;
        ++x;
    }

    printf("%d\n", total);

    return 0;
}