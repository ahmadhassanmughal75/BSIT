#include<stdio.h>

int main() {
	
	float value = 333.546372;
	
	printf("%f\n", value);
	printf("%-15.1f\n", value);
	printf("%-15.2f\n", value);
	printf("%-15.3f\n", value);
	printf("%-15.4f\n", value);
	printf("%-15.5f\n", value);

	return 0;
}
