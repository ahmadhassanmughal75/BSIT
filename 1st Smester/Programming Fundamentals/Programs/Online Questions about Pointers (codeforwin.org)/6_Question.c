// Q # 6 :: Write a C program to swap two arrays using pointers.

#include<stdio.h>

int main() {
	
	int arr1[5] = {2, 4, 6, 8, 10}, *arr1_ptr = arr1;
	int arr2[5] = {1, 3, 5, 7, 11}, *arr2_ptr = arr2;
	int i;
	
	printf("::Before Swaping::\nArray 1 => ");
	for(i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}
	
	printf("\nArray 2 => ");
	for(i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	
	for(i = 0; i < 5; i++) {
		*(arr1_ptr + i) = *(arr1_ptr + i) + *(arr2_ptr + i);
		*(arr2_ptr + i) = *(arr1_ptr + i) - *(arr2_ptr + i);
		*(arr1_ptr + i) = *(arr1_ptr + i) - *(arr2_ptr + i);
	}
	
	printf("\n\n::After Swaping::\nArray 1 => ");
	for(i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}
	
	printf("\nArray 2 => ");
	for(i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}

	return 0;
}

