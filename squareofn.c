#include<stdio.h>
void main()
{
    int number ;
    printf("Enter the number:");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        int square=i*i;
        printf("Square of %d is:%d\n",i,square);
    }
}