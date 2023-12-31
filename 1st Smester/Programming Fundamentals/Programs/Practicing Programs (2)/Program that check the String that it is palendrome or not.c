#include<stdio.h>

int main() {
	
	char userStr[100];
	
	printf("Enter the string: ");
	fgets(userStr, sizeof(userStr), stdin);
	
	int i = 0, length = 0;
	while(userStr[i] != '\0') {
		if(userStr[i] == '\n') {
			userStr[i] = '\0';
			break;
		}
		length++;
		i++;
	}
	
	printf("\nLength of string is: %d\n", length);
	printf("i = %d\n", length / 2);
	
	int j = length - 1, flag = 0;
	for(i = 0; i < length / 2; i++) {
		if(userStr[i] != userStr[j]) {
			flag = 1;
			break;
		}
		j--;
	}
	
	if(flag == 0) {
		printf("\n\n:: Palindrome String ::\n");
	} else {
		printf("\n\n:: Not a Palindrome String ::\n");
	}
	
	return 0;
}

