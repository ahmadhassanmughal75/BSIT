#include<stdio.h>

int main() {
	char character;
	printf("Enter your character : ");
	scanf("%c", &character);
	
	if (character >= 65 && character <= 90) {
		printf("Your character is a Upper-case Alphabet\n");
	}
	else if (character >= 97 && character <= 122) {
		printf("You character is a Lower-case Alphabet\n");
	}
	else if (character >= 48 && character <= 57) {
		printf("Your character is a Number\n");
	}
	else if ((character >= 0 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) || (character >= 123 && character <= 127)) {
		printf("Your character is a Special Symbol\n");
	}
	
	return 0;
}
