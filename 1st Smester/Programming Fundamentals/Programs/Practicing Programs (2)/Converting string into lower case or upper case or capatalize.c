#include<stdio.h>

int main() {
	
	char name[50];
	
	printf("Enter string: ");
	fgets(name, sizeof(name), stdin);
	
	int i, length = 0;
	while(name[i] != '\0') {
		if(name[i] == '\n') {
			name[i] = '\0';
			break;
		}
		length++;
		i++;
	}
	
	printf("Length: %d\n", length);
	
	printf("---------------------\n   Original String\n---------------------\n=> %s\n\n", name);
	
	
	for(i = 0; i < length; i++) {
		if((name[i] >= 'A') && (name[i] <= 'Z')) {
			name[i] = name[i] + 32;
		}
	}
	
	printf("---------------------\n  Lower-case String\n---------------------\n=> %s\n\n", name);
	
	
	for(i = 0; i < length; i++) {
		if((name[i] >= 'a') && (name[i] <= 'z')) {
			name[i] = name[i] - 32;
		}
	}
	
	printf("---------------------\n  Upper-case String\n---------------------\n=> %s\n\n", name);
	
	
	for(i = 0; i < length; i++) {
		int indexHolder;
		if(i == 0) {
			if((name[i] >= 'a') && (name[i] <= 'z')) {
				name[i] = name[i] - 32;
			}
		}
		else if(name[i] == ' ') {
			if((name[i+1] >= 'a') && (name[i+1] <= 'z')) {
				name[i+1] = name[i+1] - 32;
			}
			indexHolder = i + 1;
		}
		else {
			if(i == indexHolder) {
				continue;
			}
			if((name[i] >= 'A') && (name[i] <= 'Z')) {
				name[i] = name[i] + 32;
			}
		}
	}
	
	printf("---------------------\n  Captilized String\n---------------------\n=> %s\n\n", name);
	
	return 0;
}

