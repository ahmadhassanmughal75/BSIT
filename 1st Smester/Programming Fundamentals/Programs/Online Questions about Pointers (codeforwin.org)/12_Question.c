// Q # 12 :: Write a C program to find length of string using pointers.

#include<stdio.h>
#include<string.h>

int main() {
	
	char str[100], *ptr = str;
	int length = 0;
	
	printf("Enter your string : ");
	
//	scanf("%s", str); // taking string as input (white-space work as terminator), so we can't use white-spaces in scanf() function for taking string as input
	gets(str); // taking string as input including white-spaces

	printf("(User string) : %s\n", str); // printing string
	
	
	// Method 1 :: to find the length of string using pointer
	while(*ptr != '\0') {
		length++;
		ptr++;
	}
	printf("\nMethod 1\nLength of string is : %d\n", length);
	
	
	// Method 2 :: to find the length of string using library function
	int strLength = strlen(str);
	printf("\nMethod 2\nLength of string is : %d\n", strLength);

	return 0;
}
