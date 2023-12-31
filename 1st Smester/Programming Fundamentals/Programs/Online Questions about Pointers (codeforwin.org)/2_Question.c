// Q # 2 :: Write a C program to add two numbers using pointers.

#include<stdio.h>

int main() {

	int *x_ptr, *y_ptr;
	int x, y;
	
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("Enter the value of y : ");
	scanf("%d", &y);
	
	x_ptr = &x;
	y_ptr = &y;
	
	printf("The Sum of x and y is : %d\n", (*x_ptr) + (*y_ptr));

	return 0;
}
