#include<stdio.h>

void mean(int meanArr[], int meanSize);
void median(int medianArr[], int medianSize);
void mode(int modeArr[], int modeSize, int freq[], int freqSize);

int main() {
	
	int num, arr[10], freq[10] = {0};
	
	for(num = 0; num < 10; num++) {
		printf("Enter element %d : ", num+1);
		scanf("%d", &arr[num]);
		
		if(arr[num] > 10) {
			printf("Out of Range! (1-10)\nEnter Agian\n");
			num = -1;
		}
		else if (arr[num] < 1) {
			printf("Out of Range! (1-10)\nEnter Agian\n");
			num = -1;
		}
	}
	
	printf(":: M E A N ::\n");
	mean(arr, 10); // calling mean function
	printf("\n\n");
	
	printf(":: M E D I A N ::\n");
	median(arr, 10); // calling median function
	printf("\n\n");
	
	printf(":: M O D E ::\n");
	mode(arr, 10, freq, 10); // calling mode function
	printf("\n\n");
	
	return 0;
}

void mean(int meanArr[], int meanSize) {
	int i;
	float mean, total = 0;
	
	// taking sum of all values of array
	for(i = 0; i < meanSize; i++) {
		total += meanArr[i];
	}
	
	// calculating mean
	mean = total / meanSize;
	
	printf("Mean is = %.2f", mean);
}

void median(int medianArr[], int medianSize) {
	int i, j, median;
	
	// printing un-sorted array
	printf("Unsorted Array => ");
	for(i = 0; i < medianSize; i++) {
		printf("%d ", medianArr[i]);
	}
	
	// using bubble sorting algorithm
	for (i = 0; i < medianSize; i++) {
		
		for (j = i+1; j < medianSize; j++) {
			if(medianArr[i] > medianArr[j]) {
				int hold = medianArr[i];
				medianArr[i] = medianArr[j];
				medianArr[j] = hold;
			}
		}
	}
	
	printf("\nSorted Array   => ");
	
	// printing sorted array
	for(i = 0; i < medianSize; i++) {
		printf("%d ", medianArr[i]);
	}
	
	// calculating median
	median = medianArr[medianSize / 2];
	printf("\nMedian is = %d\n", median);
}

void mode(int modeArr[], int modeSize, int freq[], int freqSize) {
	
	int i;
	
	// calculating frequency
	for(i = 0; i < freqSize; i++) {
		freq[modeArr[i]-1]++;
	}
	
	// printing frequency of elements
	for(i = 0; i < modeSize; i++) {
		printf("%d : %d\n", i+1, freq[i]);
	}
}
