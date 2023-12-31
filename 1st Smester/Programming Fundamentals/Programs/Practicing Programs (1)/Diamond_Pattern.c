#include<stdio.h>
int main ()
{
    int i,j,k;
    for (i=1; i<=6; i++)
    {
        for (k=5; k>=i; k--)
        {
            printf(" ");
        }
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    // Upside Down
    for (i=1; i<=5; i++)
    {
        for (k=1; k<=i; k++)
        {
            printf(" ");
        }
        for (j=5; j>=i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}