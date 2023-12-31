#include<stdio.h>

int main() {
	
	int userNum, i, flag = 0;
	
	printf("Enter number: ");
	scanf("%d", &userNum);
	
	if(userNum < 2) {
		flag = -1;
	}
	else {
		for(i = 2; i < userNum; i++) {
			if(userNum % i == 0) {
				flag = 1;
				break;
			}
		}
	}
	
	if(flag == 0) {
		printf("%d is a Prime number\n", userNum);
	}
	else if(flag == 1) {
		printf("%d is not a prime number\n", userNum);
	}
	else {
		printf("Numbers less than 2 can't be a prime number!\n");
	}
	
	return 0;
}

