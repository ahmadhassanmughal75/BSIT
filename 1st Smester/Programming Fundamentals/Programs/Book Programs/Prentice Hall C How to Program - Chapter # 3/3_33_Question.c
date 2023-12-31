#include<stdio.h>

int main() {

    int i = 1, j, counter;
    printf("Enter your Value of Square b/w (1-20) : ");
    scanf("%d", &counter);

    if (counter >= 1 && counter <= 20) {

        while (i <= counter) {
            j = 1;

            while (j <= counter) {
                printf("*");
                j++;
            }

        printf("\n");
        i++;
        }
    } else {
        printf("Out of Range :: Your number is not in the range (1-20)!\n");
    }

    return 0;
}