#include<stdio.h>

int main() {
    int number;
    printf("Enter five-digit number : ");
    scanf("%d", &number);

    int quot1 = number / 10;
    int rem1 = number % 10;
    int quot2 = quot1 / 10;
    int rem2 = quot1 % 10;
    int quot3 = quot2 / 10;
    int rem3 = quot2 % 10;
    int quot4 = quot3 / 10;
    int rem4 = quot3 % 10;

    printf("%d   %d   %d   %d   %d\n", quot4, rem4, rem3, rem2, rem1);

    return 0;
}