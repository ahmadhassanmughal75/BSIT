#include<stdio.h>

int main () {

    int n, i, val, upd;
    
    printf("Enter number that how many values you want to enter : ");
    scanf("%d", &n);
    printf("%d ", n);
    
    for(i = 1; i <= n; i++) {
    
        printf("Enter your vale %d : ", i);
        
        scanf("%d", &val);
        
        upd += val;
        
        printf("%d ", upd);
    }
        
    return 0;
}