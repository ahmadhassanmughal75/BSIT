#include<stdio.h>

int main() {
    float r, diameter, circumference, areaOfCircle, pi = 3.14159;
    printf("Enter the radius of circle : ");
    scanf("%f", &r);

    // Diameter Formula
    diameter = r * r;

    // Circumference Of Circle Formula
    circumference = 2 * pi * r;

    // Area Of Circle Formula
    areaOfCircle = pi * (r * r);

    printf("Diameter of Circle is = %f\nCircumference of Circle is = %f\nArea of Circle is = %f\n", diameter, circumference, areaOfCircle);

    return 0;
}