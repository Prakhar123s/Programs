#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter the endpoint of loop:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d\t",i);
        i++;
    }
    
}