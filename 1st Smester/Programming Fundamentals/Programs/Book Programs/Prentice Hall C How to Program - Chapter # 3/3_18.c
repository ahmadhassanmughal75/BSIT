#include<stdio.h>

int main (){

    int accountNum;
    float begBalance, totalCharges, totalCredits, creditLimit, newBalance;
    
    printf("Enter account number (-1 to end) : ");
    scanf("%d", &accountNum);
    
    while(accountNum != -1) {
        printf("Enter beginning balance : ");
        scanf("%f", &begBalance);
        printf("Enter total charges : ");
        scanf("%f", &totalCharges);
        printf("Enter total credits : ");
        scanf("%f", &totalCredits);
        printf("Enter credit limit : ");
        scanf("%f", &creditLimit);
        
        newBalance = begBalance + totalCharges - totalCredits;
        
        printf("Account : %d\nCredit Limit : %f\nBalance : %f\n", accountNum, creditLimit, newBalance);
        
        if(newBalance > creditLimit) {
            printf("Credit Limit Exceeded\n");
        }
        
        printf("Enter account number (-1 to end) : ");
        scanf("%d", &accountNum);
    }
    
    return 0;
}