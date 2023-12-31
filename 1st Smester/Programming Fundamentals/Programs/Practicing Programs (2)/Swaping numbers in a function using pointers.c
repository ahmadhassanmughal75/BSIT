#include<stdio.h>

void pointerSwap(int *ptrX, int *ptrY);

int main() {
	
	int x = 10, y = 20;
	
	printf(":: Original ::\nx = %d\ny = %d\n", x, y);
	
	pointerSwap(&x, &y);
	
	printf("\n\n:: Swaped ::\nx = %d\ny = %d\n", x, y);
	
	return 0;
}

void pointerSwap(int *ptrX, int *ptrY) {
	*ptrX = *ptrX + *ptrY;
	*ptrY = *ptrX - *ptrY;
	*ptrX = *ptrX - *ptrY;
}
