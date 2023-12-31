#include<stdio.h>

int main() {

    int arr[3][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
    int r, c;
    
    for(r = 0; r < 3; r++) {
        for(c = 0; c < 3; c++) {
            printf("%d    ", arr[r][c]);
        }
        printf("\n\n");
    }

    return 0;
}