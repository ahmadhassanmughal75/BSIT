#include<stdio.h>

int main() {
    int year;
    printf("Enter your year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("Its a leap year\n");
    }
    else {
        printf("Not a leap year\n");
    }
    return 0;
}