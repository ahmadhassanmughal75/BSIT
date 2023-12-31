#include<stdio.h>

int main() {

	int num1, num2, num3, max;
	
	printf("Enter three numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	
	max = num1;
	
	max = (max > num2) * max + (num2 > max) * num2;
	max = (max > num3) * max + (num3 > max) * num3;
	
	printf("Maximum No. %d\n", max);
	
	return 0;
}

