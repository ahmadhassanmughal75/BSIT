#include<stdio.h>
int main(void)
{
float num,Mathmarks,percentage ;
printf("Enter a number");
scanf("%f",&num);
percentage=(num*100)/(1000);
printf("Enter your Math marks");
scanf("%f",&Mathmarks);
if((percentage>=50)||(Mathmarks>=60)){
printf("pass");
}
else
{
printf("Fail");
}
return 0;
}