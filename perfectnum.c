#include<stdio.h>
void main()
{
    int number,sum=0;
    printf("Enter the number:");
    scanf("%d",&number);
    int temp=number;
    for(int i=1;i<=number/2;i++)
    {

        if(number%i==0)
        sum=sum+i;

    }
    printf("%d\n",sum);
    if(temp==sum)
    {
        printf("it is perfect number");
    }
    else
    printf("It is not perfct number");
}