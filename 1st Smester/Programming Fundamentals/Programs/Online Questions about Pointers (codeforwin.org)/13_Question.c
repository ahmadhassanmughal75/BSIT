// Q # 13 :: Write a C program to copy one string to another using pointers.

#include<stdio.h>
#include<string.h>

int main() {
	
	char strOne[100], *strOne_ptr = strOne;
	char copyStr[100], *cpyStr_ptr = copyStr;
	
	gets(strOne);
	
	
	// Method 1 :: to copy one string to another string using pointer
	while(*strOne_ptr != '\0') {
		*cpyStr_ptr = *strOne_ptr; // assigning(copy) charcters from one string to another string
		strOne_ptr++;
		cpyStr_ptr++;
	}
	printf("\nCopy String (using pointers)\n%s\n", copyStr);
	
	
	// Method 2 :: to copy one string to another using library function
	strcpy(copyStr, strOne);
	printf("\nCopy String (using library function)\n%s\n", copyStr);

	return 0;
}

