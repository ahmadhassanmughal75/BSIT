#include<stdio.h>

int main() {

	float marks, perc;
	
	printf("Enter marks: ");
	scanf("%f", &marks);
	
	perc = (marks * 100) / 1000;
	
	printf("%f\n", perc);
	
	if(perc >= 60.0) {
		printf("PASS\n");
	}
	else {
		printf("FAIL\n");
	}
	
	return 0;
}

