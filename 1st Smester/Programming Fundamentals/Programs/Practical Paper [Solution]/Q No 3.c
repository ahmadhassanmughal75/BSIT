#include<stdio.h>
#define SIZE 20

int main() {
	
	int arr[SIZE], i, j;
	
	for(i = 0; i < SIZE; i++) {
		printf("Enter value %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < SIZE; i++) {
		for(j = i+1; j < SIZE; j++) {
			if(arr[i] == arr[j]) {
				arr[j] = 0;
			}
		}
	}

	for(i = 0; i < SIZE; i++) {
		if(arr[i] != 0) {
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}
