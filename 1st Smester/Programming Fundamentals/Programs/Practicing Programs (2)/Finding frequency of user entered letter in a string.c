#include<stdio.h>

int main() {
	
	char str[100];
	
	printf("Enter string: ");
	fgets(str, sizeof(str), stdin);
	
	int i = 0, length = 0;
	
	while(str[i] != '\0') {
		if(str[i] == '\n') {
			str[i] = '\0';
			break;
		}
		length++;
		i++;
	}
	
	char userChoice;
	
	printf("Enter letter for checking its frequency: ");
	scanf("%c", &userChoice);
	
	int freqCounter = 0;
	
	for(i = 0; i < length; i++) {
		if(userChoice == str[i]) { // adding "ignoring case-sensitivity" feature use => if((userChoice == str[i]) || (userChoice == str[i] + 32) || (userChoice + 32 == str[i]))
			freqCounter++;
		}
	}
	
	printf("\nFrequency of %c is: %d\n", userChoice, freqCounter);
	
	return 0;
}
