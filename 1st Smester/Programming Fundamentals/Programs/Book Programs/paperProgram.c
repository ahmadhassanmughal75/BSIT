#include<stdio.h>

int main() {
	
	int number;
	printf("Enter the 4-digit number that you want to reverse the number : ");
	scanf("%d", &number);
	
	int quot1 = number / 10;
	int rem1 = number % 10;
	int quot2 = quot1 / 10;
	int rem2 = quot1 % 10;
	int quot3 = quot2 / 10;
	int rem3 = quot2 % 10;
	
	printf("%d%d%d%d\n", rem1, rem2, rem3, quot3);
	
	return 0;
}
