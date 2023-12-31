#include<stdio.h>

int main () {

    int i = 1, y, x, final = 1;
    
    printf("Enter number : ");
    scanf("%d", &y);
    
    printf("Enter power : ");
    scanf("%d", &x);
    
    while(i <= x) {
        final *= y;
        i++;
    }
    
    printf("Answer is : %d\n", final);
    
    return 0;
}