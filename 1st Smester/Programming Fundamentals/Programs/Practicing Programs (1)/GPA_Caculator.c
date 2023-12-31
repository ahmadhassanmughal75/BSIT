#include<stdio.h>

int percCalc(int m);
float gpCalc(int marksArr);

int main() {

	int i, marksArr[5], credHouArr[5] = {4, 3, 3, 3, 3}, sumOfCredh = 16;
	float finalGpa, sumOfGp = 0, gpArr[5], gpProdCredh[5];
	
	for (i = 0; i < 5; i++) {
		
		int marks;
		
		if(i == 0) {
			printf("Enter Programming Fundamentals marks : ");
			scanf("%d", &marks);
			marksArr[0] = percCalc(marks);
		}
		if(i == 1) {
			printf("Enter Grammer marks : ");
			scanf("%d", &marks);
			marksArr[1] = percCalc(marks);
		}
		if(i == 2) {
			printf("Enter Caculus marks : ");
			scanf("%d", &marks);
			marksArr[2] = percCalc(marks);
		}
		if(i == 3) {
			printf("Enter ICT marks : ");
			scanf("%d", &marks);
			marksArr[3] = percCalc(marks);
		}
		if(i == 4) {
			printf("Enter Applied Physics marks : ");
			scanf("%d", &marks);
			marksArr[4] = percCalc(marks);
		}
	}
	
	for(i = 0; i < 5; i++) {
		gpArr[i] = gpCalc(marksArr[i]);
		gpProdCredh[i] = gpArr[i] * credHouArr[i];
		sumOfGp += gpProdCredh[i];
	}
	
	finalGpa = sumOfGp / sumOfCredh;
	
	printf("G.P.A is : %.3f\n", finalGpa);
	
	return 0;
}

int percCalc(int m) {
	int perc = (m * 100) / 30;
	return perc;
}

float gpCalc(int marksArr) {
		if((marksArr >= 80) && (marksArr <= 100)) {
			return 4;
		}
		else if(marksArr == 79) {
			return 3.94;
		}
		else if(marksArr == 78) {
			return 3.87;
		}
		else if(marksArr == 77) {
			return 3.80;
		}
		else if(marksArr == 76) {
			return 3.74;
		}
		else if(marksArr == 75) {
			return 3.67;
		}
		else if(marksArr == 74) {
			return 3.60;
		}
		else if(marksArr == 73) {
			return 3.54;
		}
		else if(marksArr == 72) {
			return 3.47;
		}
		else if(marksArr == 71) {
			return 3.40;
		}
		else if(marksArr == 70) {
			return 3.34;
		}
		else if(marksArr == 69) {
			return 3.27;
		}
		else if(marksArr == 68) {
			return 3.20;
		}
		else if(marksArr == 67) {
			return 3.14;
		}
		else if(marksArr == 66) {
			return 3.07;
		}
		else if(marksArr == 65) {
			return 3.00;
		}
		else if(marksArr == 64) {
			return 2.92;
		}
		else if(marksArr == 63) {
			return 2.85;
		}
		else if(marksArr == 62) {
			return 2.78;
		}
		else if(marksArr == 61) {
			return 2.70;
		}
		else if(marksArr == 60) {
			return 2.64;
		}
		else if(marksArr == 59) {
			return 2.57;
		}
		else if(marksArr == 58) {
			return 2.50;
		}
		else if(marksArr == 57) {
			return 2.43;
		}
		else if(marksArr == 56) {
			return 2.36;
		}
		else if(marksArr == 55) {
			return 2.30;
		}
		else if(marksArr == 54) {
			return 2.24;
		}
		else if(marksArr == 53) {
			return 2.18;
		}
		else if(marksArr == 52) {
			return 2.12;
		}
		else if(marksArr == 51) {
			return 2.06;
		}
		else if(marksArr == 50) {
			return 2.00;
		}
		else if(marksArr == 49) {
			return 1.90;
		}
		else if(marksArr == 48) {
			return 1.80;
		}
		else if(marksArr == 47) {
			return 1.70;
		}
		else if(marksArr == 46) {
			return 1.60;
		}
		else if(marksArr == 45) {
			return 1.50;
		}
		else if(marksArr == 44) {
			return 1.40;
		}
		else if(marksArr == 43) {
			return 1.30;
		}
		else if(marksArr == 42) {
			return 1.20;
		}
		else if(marksArr == 41) {
			return 1.00;
		}
		else if(marksArr <= 40) {
			return 0;
		}
}
