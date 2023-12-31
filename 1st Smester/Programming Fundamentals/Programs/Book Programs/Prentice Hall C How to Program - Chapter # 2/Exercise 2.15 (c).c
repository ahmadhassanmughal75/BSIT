#include<stdio.h>

int main() {
    int x = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("%d\n", x); // \n for new line
    printf("%d\t", x); // \t for tap-space

    // Ouput is 324
    
    return 0;
}