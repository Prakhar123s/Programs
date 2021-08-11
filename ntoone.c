#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter the value of statpoint of loop:");
    scanf("%d",&n);
    do
    {
        printf("%d\t",n);
        n--;
    }
    while(n>=i);   
}