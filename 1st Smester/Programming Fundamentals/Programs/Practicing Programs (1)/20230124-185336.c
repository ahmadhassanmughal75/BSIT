#include<stdio.h>

int main (){
    int cost_price, selling_price;
    printf("Enter cost price of product : Rs.");
    scanf("%d", &cost_price);
    printf("Enter selling price of product : Rs.");
    scanf("%d", &selling_price);
    
    if(selling_price > cost_price) {
        printf("Profit is = Rs.%d\n", selling_price - cost_price);
    } else {
        printf("Loss is = Rs.%d\n", cost_price - selling_price);
    }  
    return 0;
}