#include<stdio.h>
void main()
{
    int number,sum=0;
    printf("Enter the end number:");
    scanf("%d",&number);

    for(int i=2;i<=number;i++)
    {
        int f=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        } 
        if(f==1)
        {
        sum=sum+i;
        }
    }
    printf("Sum of prime numbers are:%d",sum);
 }