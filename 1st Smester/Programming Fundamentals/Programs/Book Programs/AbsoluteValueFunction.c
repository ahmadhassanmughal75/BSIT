#include<stdio.h>

int main() {
    float number;
    printf("Enter your number that you want to check the absloute value of that number : ");
    scanf("%f", &number);

    if (number > 0) {
        printf("Absolute Value is = %.0f\n", number);
    }
    else if (number < 0) {
        float absolute = (-1) * number;
        printf("Absolute Value is = %0.0f\n", absolute);
    }
    else {
        printf("Your entry is wrong!!!\n");
    }

    return 0;
}
