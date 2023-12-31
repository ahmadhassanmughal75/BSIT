#include<stdio.h>

void myPrint(void);

int main() {

    myPrint();

    return 0;
}

void myPrint(void) {

    printf("Hello World!\n");
    myPrint();
    
}