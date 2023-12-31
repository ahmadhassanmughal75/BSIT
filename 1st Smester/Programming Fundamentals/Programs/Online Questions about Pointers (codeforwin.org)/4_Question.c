// Q # 4 :: Write a C program to input and print array elements using pointers.

#include<stdio.h>

int main() {
	
	int arr[10], *arr_ptr = arr, i;
	
	for(i = 0; i < 10; i++) {
		printf("Enter elements %d : ", i+1);
		scanf("%d", (arr_ptr + i));
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d ", *(arr_ptr + i));
	}

	return 0;
}
