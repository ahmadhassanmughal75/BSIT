#include<stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter angle 1. : ");
    scanf("%f", &angle1);
    printf("Enter angle 2. : ");
    scanf("%f", &angle2);
    printf("Enter angle 3. : ");
    scanf("%f", &angle3);

    int sum = angle1 + angle2 + angle3;

    if ( sum == 180) {
        printf("Its a Triangle\n");
    } else {
        printf("Not a Triangle\n");
    }

    return 0;
}