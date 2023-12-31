#include<stdio.h>

int SWAP(int arr1[], int arr1Size, int arr2[], int arr2Size);

int main() {
	
	int arr[5], i, j;
	
	for(i = 0; i < 5; i++) {
		printf("Enter element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 5; i++) {
		
		for(j = i+1; j < 5; j++) {
			if(arr[i] > arr[j]) {
				SWAP(arr, i, arr, j);
			}
			
		}
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}

int SWAP(int arr1[], int arr1Size, int arr2[], int arr2Size) {
	int hold = arr1[arr1Size];
	arr1[arr1Size] = arr2[arr2Size];
	arr2[arr2Size] = hold;
}
