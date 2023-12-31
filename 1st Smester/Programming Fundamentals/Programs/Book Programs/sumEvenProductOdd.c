#include<stdio.h>

int main() {
	
	int i = 1, sumEven = 0, productEven = 1, sumOdd = 0, productOdd = 1;
	
	while (i <= 10) {
		
		if (i % 2 == 0) {
			sumEven = sumEven + i;
			productEven = productEven * i;
		} else {
			sumOdd = sumOdd + i;
			productOdd = productOdd * i;
		}
		i++;
	}
	printf("Sum of all Even numbers are : %d\n", sumEven);
	printf("Product of all Even numbers are : %d\n", productEven);
	printf("Sum of all Odd numbers are : %d\n", sumOdd);
	printf("Product of all Odd numbers are : %d\n", productOdd);
	
	return 0;
}
