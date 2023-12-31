// Q # 3 :: Write a C program to swap two numbers using pointers.

#include<stdio.h>

int main() {
	
	int x, y, *x_ptr = &x, *y_ptr = &y;
	
	printf("Enter the value of x : ");
	scanf("%d", &x);
	printf("Enter the value of y : ");
	scanf("%d", &y);
	
	printf("::Before Swaping::\nThe value of x is : %d\nThe value of y is : %d\n", x, y);
	
	*x_ptr = *x_ptr + *y_ptr;
	*y_ptr = *x_ptr - *y_ptr;
	*x_ptr = *x_ptr - *y_ptr;
	
	printf("\n::After Swaping::\nThe value of x is : %d\nThe value of y is : %d\n", x, y);

	return 0;
}

