#include<stdio.h>

int main() {
	int year;
	printf("Enter your year : ");
	scanf("%d", &year);
	
	if((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
		printf("Its a Leap Year");
	}
	else {
		printf("Its not a Leap Year");
	}
	return 0;
}
