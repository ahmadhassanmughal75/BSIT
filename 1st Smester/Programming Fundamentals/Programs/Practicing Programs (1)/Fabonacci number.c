#include<stdio.h>
int main()
{
int seqloop,i,new=0,vari1=0,vari2=1;
printf("Enter your number");
scanf("%d",&seqloop);
printf("Fabonacci sequence is \n 1");
for(i=1;i<seqloop;i++)
{
new=vari2+vari1;
if(i==(seqloop-1)){
printf("%d \n",new);
}
else 
{
printf("%d",new);
}
vari1=vari2;
vari2=new;
}
return 0;
}