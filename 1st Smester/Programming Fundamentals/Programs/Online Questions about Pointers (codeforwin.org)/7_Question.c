// Q # 7 :: Write a C program to reverse an array using pointers.

#include<stdio.h>

int main() {
	
	int size;
	printf("Enter the size of array : ");
	scanf("%d", &size);
	
	int arr[size], i, j;
	int *leftV_ptr = &arr[0];
	
	j = size - 1;
	
	for(i = 0; i < size; i++) {
		printf("Enter value %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	if(size % 2 == 0) {
		
		for(i = 0; ((i-1) != j); i++) {
			
			*(leftV_ptr + i) = *(leftV_ptr + i) + *(leftV_ptr + j);
			*(leftV_ptr + j) = *(leftV_ptr + i) - *(leftV_ptr + j);
			*(leftV_ptr + i) = *(leftV_ptr + i) - *(leftV_ptr + j);
		
			j--;
		}
	}
	else if (size % 2 != 0) {
		
		for(i = 0; i != j; i++) {
			
			*(leftV_ptr + i) = *(leftV_ptr + i) + *(leftV_ptr + j);
			*(leftV_ptr + j) = *(leftV_ptr + i) - *(leftV_ptr + j);
			*(leftV_ptr + i) = *(leftV_ptr + i) - *(leftV_ptr + j);
		
			j--;
		}
	}
	else {
		printf("Wrong number!");
	}
	
	printf("\n\n");
	
	for(i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
