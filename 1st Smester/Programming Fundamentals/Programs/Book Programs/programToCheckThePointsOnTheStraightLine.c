#include<stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the value of x1 : ");
    scanf("%d", &x1);
    printf("Enter the value of y1 : ");
    scanf("%d", &y1);
    printf("Enter the value of x2 : ");
    scanf("%d", &x2);
    printf("Enter the value of y2 : ");
    scanf("%d", &y2);
    printf("Enter the value of x3 : ");
    scanf("%d", &x3);
    printf("Enter the value of y3 : ");
    scanf("%d", &y3);

    int slope1 = (y2 - y1) / (x2 - x1);
    int slope2 = (y3 - y2) / (x3 - x2);

    if(slope1 == slope2) {
        printf("All three points lies on the same line\n");
    } else {
        printf("Points not lies on the same line\n");
    }
}