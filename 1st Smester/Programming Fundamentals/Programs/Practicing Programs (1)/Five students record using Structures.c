#include<stdio.h>

struct Student {
    char name[20];
    int rollNo;
    float cgpa;
};

int main() {
    
    struct Student arr[5];
    int i;
    
    for(i = 0; i < 5; i++) {
        printf("::Student %d::\n", i+1);
        printf("Enter name: ");
        scanf("%s", &arr[i].name);
        printf("Enter roll no: ");
        scanf("%d", &arr[i].rollNo);
        printf("Enter cgpa: ");
        scanf("%f", &arr[i].cgpa);
        
        printf("\n\n");
    }
    
    printf("\nPrinting Records\n");
    
    for(i = 0; i < 5; i++) {
        printf("::Student %d::\n", i+1);
        printf("Name: %s\nRoll No: %d\nCGPA: %.3f\n", arr[i].name, arr[i].rollNo, arr[i].cgpa);
        printf("\n\n");
    }
    
    return 0;
}