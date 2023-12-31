#include<stdio.h>

float absoluteFun(float n);

int main() {

	float num;
	
	printf("Enter your number: ");
	scanf("%f", &num);
	
	printf("Absolute Value is: %.3f\n", absoluteFun(num));
	
	return 0;
}

float absoluteFun(float n) {
	if(n >= 0) {
		return n;
	}
	else if (n < 0) {
		return (n * (-1));
	}
}
