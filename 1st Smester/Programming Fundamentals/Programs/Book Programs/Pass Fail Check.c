#include<stdio.h>

int main() {
    float marks, perc;
    printf("Enter your marks: ");
    scanf("%f", &marks);

    perc = (marks / 1000) * 100;

    if (perc >= 60) {
        printf("Percentage is: %f \t( P A S S )\n", perc);
    } else {
        printf("Percentage is: %f \t( F A I L )\n", perc);
    }
}