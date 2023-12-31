// Q # 14 :: Write a C program to concatenate two string using pointers.

#include<stdio.h>
#include<string.h>

int main() {
	
	char str1[40] = "Hello ", str2[40] = "World";
	char *str1_ptr = str1, *str2_ptr = str2;
	
	while(*str1_ptr != '\0') {
		printf("%c", *str1_ptr);
		str1_ptr++;
	}
	
	printf("\n\n");
	int i;
	while(i < 40) {
		printf("%u ", str1_ptr);
		i++;
	}
	
	// Method 1 :: to concatenate two string using pointers
	
	// Method 2 :: to concatenate two string using library function
	strcat(str1, str2);
//	printf("\n%s\n", str1);

	return 0;
}

