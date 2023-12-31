#include<stdio.h>

int main() {
	
	int arraySize;
	
	printf("Enter the size of array: ");
	scanf("%d", &arraySize);
	
	int arr[arraySize], i;
	
	for(i = 0; i < arraySize; i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n:: Entered Array ::\n");
	for(i = 0; i < arraySize; i++) {
		printf("%d ", arr[i]);
	}
	
	int j = arraySize - 1, flag = 0;
	for(i = 0; i < arraySize / 2; i++) {
		if(arr[i] != arr[j]) {
			flag = 1;
			break;
		}
		j--;
	}
	
	if(flag == 0) {
		printf("\n\n:: Palindrome Array ::\n");
	} else {
		printf("\n\n:: Not a Palindrome Array ::\n");
	}
	
	return 0;
}

