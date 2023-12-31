// Q # 9 :: Write a C program to access two dimensional array using pointers.

#include<stdio.h>

int main() {
	
	int row, column, i;
	printf("Enter the size of your Matrix :\nRows = ");
	scanf("%d", &row);
	printf("Columns = ");
	scanf("%d", &column);
	
	int arr[row][column], *arr_ptr = arr;
	
	for (i = 0; i < (row*column); i++) {
		printf("Enter value %d : ", i + 1);
		scanf("%d", arr_ptr + i);
	}
	
	printf("\n:: User Matrix (%dx%d) ::", row, column);
	
	for (i = 0; i < (row*column); i++) {
		if(i % column == 0) {
			printf("\n\n");
		}
		printf("   %d   ", *(arr_ptr + i));
	}
	
	return 0;
}
