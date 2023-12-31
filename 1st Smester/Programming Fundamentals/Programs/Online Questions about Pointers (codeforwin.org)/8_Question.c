// Q # 8 :: Write a C program to search an element using pointers.

#include<stdio.h>

int main() {
	
	int size, x, *x_ptr = &x, flag = 0;
	
	printf("Enter the size of array : ");
	scanf("%d", &size);
	
	int arr[size], *arr_ptr = arr, i;
	for(i = 0; i < size; i++) {
		printf("Enter the value %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number 'x' : ");
	scanf("%d", &x);
	
	for(i = 0; i < size; i++) {
		if (*(arr_ptr + i) == *x_ptr) {
			flag++;
			break;
		}
	}
	
	if (flag != 0) {
		printf("'%d' is present at the index of (%d) within the array\n", x, i);
	}
	else {
		printf("Not Found!\n");
	}

	return 0;
}
