#include<stdio.h>

void arraySum(int arr[], int size);

int main() {

    int i, arr[10];
    
    for(i = 0; i < 10; i++) {
        printf("Enter %d number: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    arraySum(arr, 10);
    
    return 0;
}

void arraySum(int arr[], int size) {

    int i, sum = 0;
    
    for(i = 0; i < size; i++) {
        
        sum += arr[i];
    }
    
    printf("Sum of all elements(digits) is: %d\n", sum);
}