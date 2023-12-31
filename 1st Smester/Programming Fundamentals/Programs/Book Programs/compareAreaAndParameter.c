#include<stdio.h>

int main() {
    int rectLength = 5, rectWidth = 4;

    int areaOfRect = rectLength * rectWidth;
    int periOfRect = 2 * (rectLength + rectWidth);

    if (areaOfRect > periOfRect) {
        printf("Area of Rectangle (%d) is greater than Perimeter of Rectangle (%d)\n", areaOfRect, periOfRect);
    } else {
        printf("Area of Rectangle (%d) is not greater than Perimeter of Rectangle (%d)\n", areaOfRect, periOfRect);
    }

    return 0;
}