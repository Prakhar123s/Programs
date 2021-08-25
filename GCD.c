#include<stdio.h>
void main()
{
    int max,num1,num2,i;
    printf("Enter  the number1 and number2:");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
    {
        max=num1;
    }
    else
    max=num2;
    for(i=max;i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            printf("%d",i);
                    break;

        }
    }
}
    