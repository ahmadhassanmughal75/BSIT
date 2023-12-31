#include<stdio.h>

int main() {

    int i=1, sOdd=0, mEven=1;
    
    while(i <= ) {
        
        if(i%2 == 0) {
            mEven = mEven * i;
        } else {
            sOdd = sOdd + i;
        }
        i++;
    }
    
    printf("Multiply of all Even is = %d\n", mEven);
    printf("Sum of all Odd is = %d\n", sOdd);

   return 0;
}