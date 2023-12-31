#include<stdio.h>

int main() {

    float units, charges, fac = 0.3, ged = 0.05;
    
    printf("Enter units: ");
    scanf("%f", &units);
    
    if(units <= 100) {
        charges = units * 7.74;
    } else {
        charges = 100 * 7.74 + (units - 100) * 10.06;
    }
    
    charges = charges + fac + ged;
    
    printf("Electricity Charges (inc. tax): %.3f\n", charges);
    
    return 0;
}