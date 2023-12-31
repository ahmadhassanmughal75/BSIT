#include<stdio.h>

int main() {
	
	int x = 5;
	
	printf("Address of 'x' variable is :: %d\n", x);
	printf("Address of 'x' variable is :: %p\n\n", &x);
	
	int *ptr = &x;
	
	printf("Address store in the 'ptr' pointer variable is :: %p\n", ptr);
	printf("Address of 'ptr' pointer variable is :: %p\n", &ptr);
	printf("Value at the address store in the 'ptr' pointer variable is :: %d\n", *ptr);

	return 0;
}

