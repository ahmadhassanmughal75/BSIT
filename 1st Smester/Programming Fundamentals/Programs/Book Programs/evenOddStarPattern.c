#include<stdio.h>

int main() {
	
	int i = 1, j;
	
	while (i <= 8) {
		j = 1;
		while (j <= 8) {
			if (i % 2 == 0) {
				printf(" *");
			} else {
				printf("* ");
			}
			j++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
