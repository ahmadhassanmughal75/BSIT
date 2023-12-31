#include<stdio.h>

int main() {
    
    int arr[20], i, j;
    
    for(i = 0; i < 20; i++) {
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(i = 0; i < 20; i++) {
        
        int flag = 0;
        
        for(j = i+1; j < 20; j++) {
                   
            if(arr[i] == arr[j]) {
                flag++;
                arr[j] = -1;
            }
        }
        
        if(flag == 0 && arr[i] != -1) {
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}