#include<stdio.h>

int main() {

	int num, origNum, revs = 0, remd;
	
	printf("Enter (five-digit) integer : ");
	scanf("%d", &num);
	
	origNum = num;
	
	while (num != 0) {
		remd = num % 10;
		revs = revs * 10 + remd;
		num /= 10;
	}
	
	printf("Reversed number = %d\n", revs);
	
	if (revs == origNum) {
		printf("Reverse number is equal to Original number\n");
	} else {
		printf("Reverse number is not equal to Original number\n");
	}
	
	return 0;
}
