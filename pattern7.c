#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);  

        }
        for(int k=i-1;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}