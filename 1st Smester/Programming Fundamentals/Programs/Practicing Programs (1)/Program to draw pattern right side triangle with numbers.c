#include<stdio.h>

int main() {

	int i, j, s;
	
	for(i = 1; i <= 5; i++) {
		
		for(s = 1; s < i; s++) {
			printf("  ");
		}
		
		int k = 0;
		for(j = i; j <= 5; j++) {
			k = k + i;
			printf("%d ", k);
		}

		printf("\n");
	}
	
	return 0;
}

