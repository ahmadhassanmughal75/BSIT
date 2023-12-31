#include<stdio.h>

int main() {
	
	float x = 1, sumSeq = 0;
	
	while(x <= 100) {
		
		if(x == 1) {
			printf("1 + ");
		}
		else if(x == 100) {
			printf("1/%.0f : ", x);
		} else {
			printf("1/%.0f + ", x);
		}
		sumSeq += (1/x);
		x++;
	}
	
	printf("%f", sumSeq);

	return 0;
}

