// Q # 5 :: Write a C program to copy one array to another using pointers.

#include<stdio.h>

int main() {
	
	int main_arr[10] = {2, 5, 2, 6, 8, 6, 7, 4, 2, 9}, *mainArr_ptr = main_arr, copy_arr[10], i;
	
	printf("::Main Array::\n");
	
	for(i = 0 ; i < 10; i++) {
		printf("%d ", main_arr[i]);
	}
	
	for (i = 0; i < 10; i++) {
		copy_arr[i] = *(mainArr_ptr + i);
	}
	
	printf("\n\n::Copy Array (using Pointer)::\n");
	
	for(i = 0 ; i < 10; i++) {
		printf("%d ", copy_arr[i]);
	}

	return 0;
}
