// Q # 1 :: Write a C program to create, initialize and use pointers.

#include<stdio.h>

int main() {
	
	printf(":: Pointers for integers ::\n");
	
	int int_X = 6;
	int *x_ptr = &int_X;
	
	printf("The value of x is (using pointer) : %d\n", *x_ptr);
	printf("The address of x is (using pointer) : %u\n", x_ptr);
	
	
	printf("\n:: Pointers for float ::\n");
	
	float float_Y = 34.23;
	float *y_ptr = &float_Y;
	
	printf("The value of y is (using pointer) : %f\n", *y_ptr);
	printf("The address of y is (using pointer) : %u\n", y_ptr);
	
	
	printf("\n:: Pointers for characters ::\n");
	
	char char_Z = 'A';
	char *z_ptr = &char_Z;
	
	printf("The value of z is (using pointer) : %c\n", *z_ptr);
	printf("The address of z is (using pointer) : %u\n", z_ptr);

	return 0;
}
