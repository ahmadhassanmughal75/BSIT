#include<stdio.h>

int fact(int n);

int main() {
    
    int num, result;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    result = fact(num);
    
    printf("Factorial is: %d\n", result);
    
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fact(n-1);
}