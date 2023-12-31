#include<stdio.h>

int main() {
	
	char givenStr[50];
	
	printf("Enter string: ");
	fgets(givenStr, sizeof(givenStr), stdin);
	
	int i = 0, length = 0;
	while(givenStr[i] != '\0') {
		if(givenStr[i] == '\n') {
			givenStr[i] = '\0';
			break;
		}
		length++;
		i++;
	}
	
	int j = length - 1;
	
	for(i = 0; i < j; i++) {
		char temp = givenStr[i];
		givenStr[i] = givenStr[j];
		givenStr[j] = temp;
		j--;
	}
	
	printf("\nReversed String is: %s\n", givenStr);
	
	return 0;
}

