#include<stdio.h>

int main() {

	float fehr, celc;
	
	printf("Enter you temperature in fehrenheit: ");
	scanf("%f", &fehr);
	
	celc = 5.0/9.0 * (fehr-32.0);
	
	printf("Celcius temperature: %.2f\n", celc);
	
	return 0;
}

