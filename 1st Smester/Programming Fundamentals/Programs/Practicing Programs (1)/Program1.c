#include<stdio.h>

int main (){
    int a = 536;
    int x1 = a % 10;
    int y1 = a / 10;
    int x2 = y1 % 10;
    int y2 = y1 / 10;
    int sum = x1 + y2 + x2;
    printf("%d\n", sum);
    return 0;
}