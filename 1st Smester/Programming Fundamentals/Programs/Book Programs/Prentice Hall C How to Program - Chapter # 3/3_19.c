#include<stdio.h>

int main () {

    float basicPay = 200, grossSales, grossPerc, overallPay;
    
    printf("Enter sales in dollars : ");
    scanf("%f", &grossSales);
    
    while(grossSales != -1) {
    
        grossPerc = (9 * grossSales) / 100;
        
        overallPay = basicPay + grossPerc;
        
        printf("Salary is : $%f\n", overallPay);
        
        printf("Enter sales in dollars : ");
        scanf("%f", &grossSales);
    }
    
    return 0;
}