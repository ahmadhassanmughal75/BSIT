#include<stdio.h>

void pointer(int *ptrPara);

int main() {
	printf(":: Main Function ::\n\n");
	int x = 6;
	
	printf("Value of 'x' is : %d\n", x);
	printf("Address of 'x' is : %p\n", &x);
	
	int *ptr = &x;
	
	printf("Address of pointer is : %p\n", &ptr);
	
	printf("\n\n:: User-defined Function ::\n\n");
//	pointer(&x);
	pointer(ptr); // same as above calling function statement

	return 0;
}

void pointer(int *ptrPara) {
	int value = *ptrPara;
	printf("Value at the address store in pointer of 'x' : %d\n", value);
	
	int address = ptrPara;
	printf("Address of 'x' store in pointer : %p\n", address);
	
	int pointerAddress = &ptrPara;
	printf("Address of pointer : %p\n", pointerAddress);
}
