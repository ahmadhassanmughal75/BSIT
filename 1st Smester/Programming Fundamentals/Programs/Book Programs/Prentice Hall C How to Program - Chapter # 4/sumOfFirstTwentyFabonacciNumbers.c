#include<stdio.h>

int main() {
	
	int i, new = 0, var1 = 0, var2 = 1, sumUpd = 0;
	
	for(i = 1; i < 20; i++) {
		new = var2 + var1;
		sumUpd += new;
		var1 = var2;
		var2 = new;
	}
	
	printf("%d\n", sumUpd+1);

	return 0;
}
