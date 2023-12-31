#include<stdio.h>
#define SIZE 10

int main() {
	
	int table[SIZE], i;
	
	printf("Element\t\tValue\n");
	
	for(i = 0; i < SIZE; i++) {
		printf("  %d\t\t  %d\n", i, 2 * (i+1));
	}

	return 0;
}
