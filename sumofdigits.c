#include<stdio.h>
void main()
{
    int number,sum=0;
    printf("Enter the number:");
    scanf("%d",&number);

    while (number>0)
    {
        int temp=number%10;
        sum=sum+temp;
        number=number/10;
    }
    printf("%d",sum);

}