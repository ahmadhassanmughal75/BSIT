#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {

	srand(time(NULL));
	
    int i;

    for(i = 1; i <= 20; i++) {
        printf("%d    ", 1 + ( rand() % 6) );

        if(i % 5 == 0) {
            printf("\n");
        }
    }

    return 0;
}
