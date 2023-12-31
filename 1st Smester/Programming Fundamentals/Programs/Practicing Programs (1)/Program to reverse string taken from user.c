#include<stdio.h>

int main() {

	char str[100];
	
	printf("Enter your String: ");
	fgets(str, sizeof(str), stdin);
	
	printf("Input String is : %s\n\n", str);
	
	int i = 0;
	
	while(str[i] != '\0') {
		if(str[i] == '\n') {
			str[i] = '\0';
			break;
		}
		i++;
	}
	
	
	int length = 0;
	
	while(str[length] != '\0') {
		length++;
	}
	
	printf("Length of string: %d\n\n", length);
	
	for(i = 0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
	
	printf("Reverse of String is: %s\n", str);
	
	return 0;
}

