#include<stdio.h>

int main() {

	float fehr, celc;
	
	printf("Enter the temperture (in fahrenheit): ");
	scanf("%f", &fehr);
	
	celc = 5 / 9 * fehr - 32;
	
	printf("Celcius Temperature: %.2f\n", celc);
	
	return 0;
}
