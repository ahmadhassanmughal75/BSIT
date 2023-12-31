#include<stdio.h>

int main() {
	
	int i, j, k, iniP, finP, sort[6];
	
	// Taking input from user for Array
	for(i = 0; i <= 5; i++) {
		printf("Enter your number %d : ", i+1);
		scanf("%d", &sort[i]);
	}
	
	// Printing un-sorting array after taking input from user
	for(iniP = 0; iniP <= 5; iniP++) {
		printf("%d\t", sort[iniP]);
	}
	
	// Sorting Algorithm	
	for(j = 0; j <= 5; j++) {
		for(k = j; k <= 5; k++) {
			if(sort[j] > sort[k]) {
				// Swaping Array values if condition True
				sort[j] = sort[j] + sort[k];
				sort[k] = sort[j] - sort[k];
				sort[j] = sort[j] - sort[k];
			}
		}
	}
	
	printf("\n");
	
	// Printing after sorting (smaller to bigger)
	for(finP = 0; finP <= 5; finP++) {
		printf("%d\t", sort[finP]);
	}
	
	return 0;
}
