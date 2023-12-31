#include<stdio.h>

int main() {

    int i = 100;
    
    while(i <= 999) {
        if(i % 5 == 0) {
            printf("%d\n", i);
        }
        i++;
    }

   return 0;
}