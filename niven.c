#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    int  sum=0, dnum=number;
    while(dnum)
    {
        int c=dnum%10;
        sum=sum+c;
        dnum=dnum/10;
    }
    // printf("%d\n",sum);
    if(number%sum==0)
    {
        printf("It is niven number");
    }
    else
    printf("It is not niven number");
}