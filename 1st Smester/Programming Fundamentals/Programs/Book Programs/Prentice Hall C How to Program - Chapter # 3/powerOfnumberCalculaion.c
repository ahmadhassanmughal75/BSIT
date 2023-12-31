#include<stdio.h>

int main() {
	
	int x, y, i = 1, power = 1;
	
	printf("Enter the number that you wan to take its power : ");
	scanf("%d", &x);
	printf("Enter the power of number : ");
	scanf("%d", &y);
	
	while (i <= y) {
		power *= x;
		i++;
	}
	
	printf("%d raised to the %d power is = %d\n", x, y, power);
	
	return 0;
}
