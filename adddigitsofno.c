#include<stdio.h>
void main()
{
    int number, temp,sum=0 ;

    printf("Enter the number:");
    scanf("%d",&number);


    while(number)
    {
        temp=number%10;
        sum=sum+temp;
        number/=10;
    } 
    printf("The sum is %d",sum);
}