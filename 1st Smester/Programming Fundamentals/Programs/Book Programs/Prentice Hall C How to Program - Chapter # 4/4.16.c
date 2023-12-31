#include<stdio.h>

int main () {

    int i, j, s;
    
    // ------( Pattern # 1 )------
    /*
    for(i = 10; i >= 1; i--) {
    
        for(s = i; s < 10; s++) {
            printf(" ");
        }
        
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    
    // ------( Pattern # 2 )------
    /*
    for(i = 10; i >= 1; i--) {
        
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    
    // ------( Pattern # 3 )------
    /*
    for(i = 1; i <= 10; i++) {
        
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    
    // ------( Pattern # 4 )------
    /*
    for(i = 1; i <= 10; i++) {
    
        for(s = i; s < 10; s++) {
            printf(" ");
        }
        
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    
    return 0;
}