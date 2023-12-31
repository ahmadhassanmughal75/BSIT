#include<stdio.h>

int main() {

	int i = 1;
	float number = 1, seriesSum = 0;
	
	while (i <= 100) {
		
		seriesSum += (1 / number);
		
		if (i == 1) {
			printf("%.0f + ", number);
		} else if (i == 100) {
			printf("1/%.0f = ", number);
		} else {
			printf("1/%.0f + ", number);
		}
		
		number++;
		i++;
	}
	
	printf("%f\n", seriesSum);
	
	return 0;
}
