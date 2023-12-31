#include<stdio.h>

int isPrime(int n);

int main() {

	int num, flag;
	
	printf("Enter number: ");
	scanf("%d", &num);
	
	flag = isPrime(num);
	
	if(flag != 0) {
		printf("Composite Number\n");	
	}
	else {
		printf("Prime Number\n");	
	}
	
	return 0;
}

int isPrime(int n) {
	int i;
	
	if(n == 1 || n == 2) {
		return 0;
	}
	else {
		for(i = 2; i < n; i++) {
			if(n % i == 0) {
				return 1;
			} else {
				return 0;
			}
		}
	}
}
