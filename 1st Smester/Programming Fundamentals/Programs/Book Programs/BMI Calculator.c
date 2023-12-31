#include<stdio.h>

int main() {
	float weight, height, bmi;
	char status[30];
	
	printf("Enter your weight in (kg) : ");
	scanf("%f", &weight);
	
	printf("Enter your height in (feet) : ");
	scanf("%f", &height);
	
	height = height * 0.3048;
	
	bmi = (weight) / (height * height);
	
	if (bmi < 18.5) {
		status[30] = "Underweight";
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		status[30] = "Normal";
	}
	else if (bmi >= 25 && bmi <= 39.9) {
		status[30] = "Overweight";
	}
	else if (bmi >= 40) {
		status[30] = "Obese";
	}
	
	printf("\n\n%s Your BMI value is = %f\n\nBMI Values =>\nUnderweight : less than 18.5\nNormal : between 18.5 to 24.9\nOverweight : between 25 to 29.9\nObese : 30 or greater", status, bmi);
}
