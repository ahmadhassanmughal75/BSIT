#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	
	int freq[6] = {0}, face, roll;
	
	srand(time(NULL));
	
	for(roll = 0; roll < 6000; roll++) {
		face = 1 + rand() % 6;
		freq[face - 1]++;
	}
	
	printf("Face\t\tFrequency\n");
	
	for(face = 0; face < 6; face++) {
		printf("  %d\t\t%d\n", face+1, freq[face]);
	}

	return 0;
}
