#include<stdio.h>

int main () {

    int x1 = 4, x2 = 8;
    
    printf("=> (x1 = 4)\n");
    printf("x1-- : %d\n", x1--);
    printf("x1 : %d\n\n", x1);
    
    printf("=> (x2 = 8)\n");
    printf("--x2 : %d\n", --x2);
    printf("x2 : %d\n", x2);
    
    return 0;
}