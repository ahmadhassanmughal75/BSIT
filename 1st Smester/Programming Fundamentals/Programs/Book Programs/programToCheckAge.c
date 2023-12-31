#include<stdio.h>

int main() {
    int Ram, Shyam, Ajay;
    printf("Enter the age of Ram : ");
    scanf("%d", &Ram);
    printf("Enter the age of Shyam : ");
    scanf("%d", &Shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d", &Ajay);

    if (Ram < Shyam) {
        if(Ram < Ajay) {
            printf("Ram is the youngest\n");
        } else {
            printf("Ajay is the yougest\n");
        }
    }
    else if (Ram > Shyam) {
        if(Shyam < Ajay) {
            printf("Shyam is the yougest\n");
        } else {
            printf("Ajay is the youngest\n");
        }
    }

    return 0;
}