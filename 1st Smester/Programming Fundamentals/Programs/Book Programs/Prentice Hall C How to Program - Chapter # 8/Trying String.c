#include<stdio.h>

int main() {
	
	int i;
	char str[100], *str_ptr = str;
	
	gets(str_ptr);
	printf("%s\n", str_ptr);
	printf("%c\n", *str_ptr);
	printf("%u\n", *str_ptr);
	printf("%u\n", str_ptr);
	
//	gets(str);
//	printf("%s\n", str);
	
	
//	scanf("%s", str);
//	printf("%s\n", str);
	
	
//	for(i = 0; i <= 10; i++) {
//		printf("%c", str[i]);
//	}
//	printf("\n%u\n", &str);
//	
//	printf("\n%c\n", *str_ptr);
	
	
	system("color a");
	return 0;
}

