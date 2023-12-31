#include<stdio.h>

int main() {
	
	int arr[] = {1, 8, 3, 5, 5, 9, 3, 8, 3, 10};
	int length = sizeof(arr) / sizeof(arr[0]);
	
	int i, j;
	
	for(i = 0; i < length; i++) {
		int isUnique = 1;
		
		for(j = 0; j < i; j++) {
			if(arr[i] == arr[j]) {
				isUnique = 0;
				break;
			}
		}
		
		if(isUnique) {
			printf("%d ", arr[i]);
		}
	}
	
	return 0;
}

