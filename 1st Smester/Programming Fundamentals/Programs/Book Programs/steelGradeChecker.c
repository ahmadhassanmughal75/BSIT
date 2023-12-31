#include<stdio.h>

int main() {
	int givenHardness, givenTensileStrength;
	float givenCarbonContent;
	printf("Enter the hardness of the steel : ");
	scanf("%d", &givenHardness);
	printf("Enter the carbon content of the steel : ");
	scanf("%f", &givenCarbonContent);
	printf("Enter the tensile strength of the steel : ");
	scanf("%d", &givenTensileStrength);
	
	int cond1 = givenHardness > 50;
	int cond2 = givenCarbonContent < 0.7;
	int cond3 = givenTensileStrength > 5600;
	
	printf("Condition 1 = %d\nCondition 2 = %d\nCondition 3 = %d\n", cond1, cond2, cond3);
	
	if (cond1 == 1 && cond2 == 1 && cond3 == 1) {
		printf("Grade is 10\n");
	}
	else if (cond1 == 1 && cond2 == 1) {
		printf("Grade is 9\n");
	}
	else if (cond2 == 1 && cond3 == 1) {
		printf("Grade is 8\n");
	}
	else if (cond1 == 1 && cond3 == 1) {
		printf("Grade is 7\n");
	}
	else if (cond1 == 1 || cond2 == 1 || cond3 == 1) {
		printf("Grade is 6\n");
	}
	else if (cond1 == 0 && cond2 == 0 && cond3 == 0) {
		printf("Grade is 5\n");
	}
	
	return 0;
}
