#include<stdio.h>

int main() {
	
	int i = 1;
	
	for (i = 1; i <= 5; i++) {
		printf("%d\n", ++i);
	}
	
	printf("-----Seperated-----\n");
	
	for (i = 1; i <= 5; i++) {
		printf("%d\n", i++);
	}

	return 0;
}

