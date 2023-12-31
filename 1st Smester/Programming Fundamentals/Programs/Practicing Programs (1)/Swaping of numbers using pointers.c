#include<stdio.h>

int main() {
    
    int x = 10, y = 20, *ptr1 = &x, *ptr2 = &y;
    
    printf("::Before Swaping::\nx = %d\ny = %d\n", x, y);
    
    int hold = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = hold;
    
    printf("::After Swaping::\nx = %d\ny = %d", x, y);
    
    return 0;
}