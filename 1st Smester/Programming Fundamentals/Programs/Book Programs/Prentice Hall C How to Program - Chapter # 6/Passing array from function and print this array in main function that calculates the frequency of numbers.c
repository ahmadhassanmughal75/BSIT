#include<stdio.h>

void arrayFreqFunc(int mainArrayPara[], int mainArraySize, int freqFindArrayPara[], int freqArraySize);

int main() {
	
	int mainArray[10], freqFindArray[6] = {0}, i, j;
	
	for (i = 0; i < 10; i++) {
		printf("Enter value b/w (1-6) : ");
		scanf("%d", &mainArray[i]);
	}
	
	arrayFreqFunc(mainArray, 10, freqFindArray, 6);
	
	for(j = 0; j < 6; j++) {
		printf("Frequency of %d is : %d\n", j+1, freqFindArray[j]);
	}
	
	return 0;
}


void arrayFreqFunc(int mainArrayPara[], int mainArraySize, int freqFindArrayPara[], int freqArraySize) {
	int i;
	for(i = 0; i < mainArraySize; i++) {
		freqFindArrayPara[mainArrayPara[i]-1]++;
	}
}
