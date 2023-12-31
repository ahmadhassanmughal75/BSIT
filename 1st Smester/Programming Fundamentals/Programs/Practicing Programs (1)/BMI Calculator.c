#include<stdio.h>
#include<string.h>

int main() {

	char status[30];
	float weight, height, bmi;
	
	printf("Enter your weight is (kg): ");
	scanf("%f", &weight);
	printf("Enter your height in (feet): ");
	scanf("%f", &height);
	
	height = height * 0.3048;
	
	bmi = weight / (height * height);
	
	if(bmi <= 18.4) {
		strcpy(status, "Underweight");
	}
	else if((bmi >= 18.5) && (bmi <= 24.9)) {
		strcpy(status, "Normal");
	}
	else if((bmi >= 25.0) && (bmi <= 39.9)) {
		strcpy(status, "Overweight");
	}
	else if(bmi >= 40) {
		strcpy(status, "Obese");
	}
	else {
		strcpy(status, "Error");
	}
	
	printf("Your BMI value: %.3f\n", bmi);
	printf("Your BMI status: %s\n", status);
	
	return 0;
}

