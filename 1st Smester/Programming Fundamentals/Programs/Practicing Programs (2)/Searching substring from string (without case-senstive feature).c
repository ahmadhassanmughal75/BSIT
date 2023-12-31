#include<stdio.h>

int main() {
	
	char str1[100], str2[100];
	int length_str1 = 0, length_str2 = 0;
	
	printf("Enter string 1: ");
	fgets(str1, sizeof(str1), stdin);
	
	int i = 0;
	while(str1[i] != '\0') {
		if(str1[i] == '\n') {
			str1[i] = '\0';
			break;
		}
		length_str1++;
		i++;
	}
	
	printf("Enter string 2: ");
	fgets(str2, sizeof(str2), stdin);
	
	int j = 0;
	while(str2[j] != '\0') {
		if(str2[j] == '\n') {
			str2[j] = '\0';
			break;
		}
		length_str2++;
		j++;
	}
	
//	printf("\nLength of string 1: %d\n", length_str1);
//	printf("Length of string 2: %d\n\n", length_str2);
	
	int matchCheck;
	
	for(i = 0; i <= length_str1 - length_str2; i++) {
		
//		printf("\n\ni = %d\n\n", i);
		
		matchCheck = 0;
		
		for(j = 0; j < length_str2; j++) {
			
			if((str1[i + j] == str2[j]) || (str1[i + j] + 32 == str2[j]) || (str1[i + j] == str2[j] + 32)) {
				matchCheck++;
			}
			else {
				break;
			}
			
		}
		
		if(matchCheck == length_str2) {
			break;
		}
	
	}
	
	if(matchCheck == length_str2) {
		printf("\n%s     (:: Matched ::)", str2);
	}
	else {
		printf("\nNot matched");
	}
	
	return 0;
}
