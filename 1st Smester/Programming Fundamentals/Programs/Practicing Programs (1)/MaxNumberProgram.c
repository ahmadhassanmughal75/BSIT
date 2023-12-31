#include<stdio.h>

int main (){
    int a, b, c;
    printf("Enter the valie of a: ");
    scanf("%d", &a);
    printf("Enter the valie of b: ");
    scanf("%d", &b);
    printf("Enter the valie of c: ");
    scanf("%d", &c);
    
    int res = (a>b)*a + (b>a)*b;
    int finOut = (res>c)*res + (c>res)*c;
    printf("Maximum Number is: %d\n", finOut);
    return 0;
}