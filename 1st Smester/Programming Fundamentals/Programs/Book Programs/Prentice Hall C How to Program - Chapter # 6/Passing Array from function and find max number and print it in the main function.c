#include<stdio.h>

int arrayMaxFunc(int maxNumFindArray[], int arraySize);

int main() {
	
	int maxFindArray[10], i;
	
	// taking values input from user for array
	for(i = 0; i < 10; i++) {
		printf("Enter your number %d : ", i+1);
		scanf("%d", &maxFindArray[i]);
	}
	
	printf("\nMaximum number is : %d\n", arrayMaxFunc(maxFindArray, 10));

	return 0;
}

int arrayMaxFunc(int maxNumFindArray[], int arraySize) {
	int i, max;
	max = maxNumFindArray[0];
	for(i = 1; i < arraySize; i++) {
		if(max < maxNumFindArray[i]) {
				max = maxNumFindArray[i];
		}
	}
	return max;
}
