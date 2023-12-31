#include<stdio.h>

int main() {

	int num, q1, q2, q3, r1, r2, r3, rev, sum, diff, multi;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	q1 = num / 10;
	r1 = num % 10;
	q2 = q1 / 10;
	r2 = q1  % 10;
	q3 = q2 / 10;
	r3 = q2 % 10;
	
	printf("%d\n", q1);
	
	rev = r1 * 1000 + r2 * 100 + r3 * 10 + q3;
	sum = q3 + r3 + r2 + r1;
	diff = q3 - r3 - r2 - r1;
	multi = q3 * r3 * r2 * r1;
	
	printf("Reverse: %d\nSum: %d\nDifference: %d\nMultiplication: %d\n", rev, sum, diff, multi);
	
	return 0;
}

