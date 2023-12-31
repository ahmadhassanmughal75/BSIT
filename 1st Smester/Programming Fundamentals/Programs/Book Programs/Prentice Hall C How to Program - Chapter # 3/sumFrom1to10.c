#include<stdio.h>

int main() {
	
	int x = 1, sum = 0;
	
	while (x <= 10) {
		sum += x;
		x++;
	}
	printf("The sum is : %d\n", sum);
	
	return 0;
}
