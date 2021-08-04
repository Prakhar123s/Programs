#include<stdio.h>
void main()
{
    int i,j,m;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=5;k>i;k--)
        {
            printf(" ");
        }
        for(int m=i;m>=1;m--)
        {
            printf("%d",m);
        }
        printf("\n");
    }


}