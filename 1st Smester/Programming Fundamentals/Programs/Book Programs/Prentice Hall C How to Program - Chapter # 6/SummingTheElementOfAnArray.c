#include<stdio.h>
#define SIZE 10

int main() {
	
	int arrSum[SIZE], i, sum = 0;
	
	for(i = 0; i < SIZE; i++) {
		printf("Enter your number %d : ", i+1);
		scanf("%d", &arrSum[i]);
		
		sum += arrSum[i];
	}
	
	for(i = 0; i < SIZE; i++) {
		printf("%d ", arrSum[i]);
	}
	
	printf("\nSum of array element values is : %d\n", sum);

	return 0;
}
