#include<stdio.h>
#include<math.h>

int main() {
    int x, y, cx = 0, cy = 0, radius, distance;

    printf("Enter the value of 1st point 'x' : ");
    scanf("%d", &x);
    printf("Enter the value of 2nd point 'y' : ");
    scanf("%d", &y);
    printf("Enter the radius of Circle : ");
    scanf("%d", &radius);

    // First we find the distance using points 'x' and 'y', Distance Formula;

    distance = sqrt(pow((x - cx), 2) + pow((y - cy), 2)); 

    if (distance > radius) {
        printf("Point is outside the Circle\n");
    }
    else if(distance < radius) {
        printf("Point is inside the Circle\n");
    }
    else if (distance == radius) {
        printf("Point is on the Circle\n");
    }
    return 0;
}

/*
Conditions To Determine The Position of the Point(x, y)
1. Distance is greater than radius: point is outside the Circle.
2. Distance is less than radius : point is inside the Circle.
3. Distance is equal to the radius: point is on the Circle.
*/