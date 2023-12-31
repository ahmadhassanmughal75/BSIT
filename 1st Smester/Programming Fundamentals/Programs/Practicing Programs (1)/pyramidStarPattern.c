#include<stdio.h>

int main () {

    int i = 1;
    
    while(i <= 5) {
    
        if(i == 1) {
            printf("    *    ");
        } else if(i == 2) {
            printf("   ***   ");
        } else if(i == 3) {
            printf("  *****  ");
        } else if(i == 4) {
            printf(" ******* ");
        } else if(i == 5) {
            printf("*********");
        }
    printf("\n");
    i++;
    }  
    return 0;
}