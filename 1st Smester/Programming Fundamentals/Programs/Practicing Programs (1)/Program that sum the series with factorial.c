#include<stdio.h>

int main() {

	int i, j;
	float series;
	
	for(i = 1; i <= 5; i = i + 2) {
		float fact = 1;
		for(j = 1; j <= (i + 2); j++) {
			fact *= j;
		}
//		printf("%d\n", fact);
		series += (i / fact);
	}
	
	printf("Sum of Series is: %f\n", series);
	
	return 0;
}

