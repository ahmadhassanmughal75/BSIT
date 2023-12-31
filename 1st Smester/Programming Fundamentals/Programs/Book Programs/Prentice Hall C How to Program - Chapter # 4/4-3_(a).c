#include<stdio.h>

int main() {

	int sum = 0, count;
	
	for(count = 1; count <= 99; count++) {
		if(count % 2 != 0) {
			sum += count;
		}
	}
	
	printf("The sum of all the Odd numbers from 1 to 99 is : %d\n", sum);

	return 0;
}

