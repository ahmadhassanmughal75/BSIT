#include<stdio.h>

int main () {

    int i = 1, larg1 = 0, larg2 = 0, num;
    
    while(i <= 10) {
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        
        if(num > larg1) {
            larg2 = larg1;
            larg1 = num;
        } else if (num > larg2) {
            larg2 = num;
        }
        i++;
    }
    
    printf("1st Largest number is : %d\n2nd Largest number is : %d\n", larg1, larg2);
    
    return 0;
}