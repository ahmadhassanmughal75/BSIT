#include<stdio.h>

int main() {

    float gallon, milles, avg, total, overallAvg, counter;
    total = 0, counter = 0;
    
    printf("Enter gallons (-1 to end) : ");
    scanf("%f", &gallon);
    printf("Enter milles : ");
    scanf("%f", &milles);
    
    while(gallon != -1) {
        avg = milles / gallon;
        printf("The milles / gallon for this tank is : %f\n", avg);
        
        total += avg;
        counter++;
        
        printf("Enter gallons (-1 to end) : ");
        scanf("%f", &gallon);
        printf("Enter milles : ");
        scanf("%f", &milles);
    }
    
    overallAvg = total / counter;
    
    printf("The overall average was : %f\n", overallAvg);
    
    return 0;
}