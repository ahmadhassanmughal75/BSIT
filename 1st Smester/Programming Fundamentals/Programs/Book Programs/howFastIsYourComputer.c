#include<stdio.h>

int main() {
	
	int i = 1;
	
	while (i <= 300000000) {
		if (i % 100000000 == 0) {
			printf("%d\n", i);
		}
		i++;
	}
	
	return 0;
}
