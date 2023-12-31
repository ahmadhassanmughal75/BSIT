#include<stdio.h>

int main() {
	
	float num, finalAvg, i, numeratorSum = 0, totalDivider = 0;
	
	for(i = 1; i != 9999; i++) {
		printf("Enter your number %d : ", i);
		scanf("%d", &num);
		
		numeratorSum += num;
		totalDivider++;
	}
	
	finalAvg = numeratorSum / totalDivider;
	
	printf("Average is = %d\n", finalAvg);

	return 0;
}

