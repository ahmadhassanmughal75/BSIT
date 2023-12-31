#include<stdio.h>

int main() {
	
	char string1[20];
	char string2[] = "string literals";
	int i;
	
	printf("Enter a string : ");
	scanf("%s", string1);
	
	printf("String1 : %s\nString2 : %s\nString1 with spaces between characters is : ", string1, string2);
	
	for(i = 0; string1[i] != '\0'; i++) {
		printf("%c ", string1[i]);
	}
	
	printf("\n");

	return 0;
}
