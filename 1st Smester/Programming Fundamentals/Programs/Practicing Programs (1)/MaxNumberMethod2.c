#include<stdio.h>

int main (){
    int a, b, c;
    printf("Enter the valie of a: ");
    scanf("%d", &a);
    printf("Enter the valie of b: ");
    scanf("%d", &b);
    printf("Enter the valie of c: ");
    scanf("%d", &c);
    
    if(a>b) {
        if(a>c) {
            printf("Maximum Number is: %d\n", a);
        } else {
            printf("Maximum Numberis: %d\n", c);
        }
    }
    else if(b>a) {
        if(b>c) {
            printf("Maximum Number is: %d\n", b);
        } else {
            printf("Maximum Number is: %d\n", c);
        }
    }
    return 0;
}