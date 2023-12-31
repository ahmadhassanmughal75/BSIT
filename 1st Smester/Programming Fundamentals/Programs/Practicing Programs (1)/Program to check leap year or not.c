#include<stdio.h>

int main() {

	int year;
	
	printf("Enter year: ");
	scanf("%d", &year);
	
	if(year % 4 == 0) {
		printf("Leap Year\n");
	} else {
		printf("Not a Leap year\n");
	}
	
	return 0;
}

