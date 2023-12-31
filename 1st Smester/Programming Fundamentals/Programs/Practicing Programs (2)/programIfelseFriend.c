#include<stdio.h>

void main() {
	
	float totMarks, obtMarks, percentage;
	
	printf("Enter total marks: ");
	scanf("%f", &totMarks);
	
	printf("Enter obtained marks: ");
	scanf("%f", &obtMarks);
	
	percentage = obtMarks * 100.0 / totMarks;
	
	if(percentage >= 50.0) {
		printf("You are a good student!\n");
	} else {
		printf("You are not a good student!\n");
	}
}

