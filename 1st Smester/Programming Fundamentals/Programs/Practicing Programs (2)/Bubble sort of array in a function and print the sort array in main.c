#include<stdio.h>

void bubbleSorterFunc(int *ptrArr);

int main() {
	
	int arr[10];
	
	int i;
	for(i = 0; i < 10; i++) {
		printf("Enter num. %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	bubbleSorterFunc(arr);
	
	for(i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	return 0;
}

void bubbleSorterFunc(int *ptrArr) {
	int i, j;
	for(i = 0; i < 10; i++) {
		for(j = i + 1; j < 10; j++) {
			if(ptrArr[i] > ptrArr[j]) {
				int temp = ptrArr[j];
				ptrArr[j] = ptrArr[i];
				ptrArr[i] = temp;
			}
		}
	}
}
