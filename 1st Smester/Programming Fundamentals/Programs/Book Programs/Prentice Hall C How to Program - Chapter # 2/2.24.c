#include<stdio.h>

int main() {
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("The number is Even (%d)\n", a);
    }
    if (a % 2 != 0) {
        printf("The number is Odd (%d)\n", a);
    }

    return 0;
}