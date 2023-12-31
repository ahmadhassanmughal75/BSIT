#include<stdio.h>

int main() {

	int counter = 1, number, largest = 0;
	
	while (counter <= 10) {
		printf("Enter number %d : ", counter);
		scanf("%d", &number);
		
		if (number > largest) {
			largest = number;
		}
		
		counter++;
	}
	
	printf("The largest number b/w the series of 10 numbers is : %d\n", largest);
	
	return 0;
}
