#include<stdio.h>

int main() {
	
	int x, y, i, j;
	
	printf("Enter two integers in the range 1-20: ");
	scanf("%d%d", &x, &y);
	
	for(i = 1; i <= y; i++) {
		for(j = 1; j <= x; j++) {
			printf("@");
		}
		
		printf("\n");
	}

	return 0;
}

