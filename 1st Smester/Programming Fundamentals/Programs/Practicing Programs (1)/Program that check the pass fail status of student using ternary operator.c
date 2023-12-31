#include<stdio.h>

int main() {

	float marks, perc;
	
	printf("Enter marks: ");
	scanf("%f", &marks);
	
	perc = (marks * 100) / 500;
	
	perc > 33 ? printf("PASS\n") : printf("FAIL\n");
	
	return 0;
}
