#include<stdio.h>

int main() {
	
	int arr1[10], i, j, k;
	
	for(i = 0; i < 10; i++) {
		printf("Enter value %d : ", i+1);
		scanf("%d", &arr1[i]);
	}
	
	printf("Element\tValue\tHistogram\n");
	
	for(j = 0; j < 10; j++) {
		printf("%d\t%d\t", j, arr1[j]);
		
		for(k = 0; k < arr1[j]; k++) {
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}
