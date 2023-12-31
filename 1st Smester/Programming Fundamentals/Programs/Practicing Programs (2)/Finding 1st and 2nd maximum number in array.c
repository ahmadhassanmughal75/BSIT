#include<stdio.h>

int main() {
	
	int arr[5], i;
	
	for(i = 0; i < 5; i++) {
		printf("Enter %d number: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int max = arr[0], secMax;
	
	for(i = 1; i < 5; i++) {
		if(arr[i] > max) {
			secMax = max;
			max = arr[i];
		}
		else if((arr[i] > secMax) && (arr[i] != max)) {
			secMax = arr[i];
		}
	}
	
	printf("1st Maximum no. is: %d\n2nd Maximum no. is: %d\n", max, secMax);
	
	return 0;
}
