#include<stdio.h>

int main() {
    
    int arr[20], i, j;
    
    for(i = 0; i < 20; i++) {
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 20; i++) {
        
        for(j = i+1; j < 20; j++) {
            
            if(arr[i] == arr[j]) {
            
                arr[j] = 0;
            }
        }
    }
    
    for(i = 0; i < 20; i++) {
        if(arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}