#include<stdio.h>
void main()
{
    int number ,f=0;
    printf("Enter the number:");
    scanf("%d",&number);

    for(int i=2;i<number;i++)
    {
        if((number%i)==0)
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("%d is not a Prime Number",number);
    }
    else
    {
        printf("%d is  a prime number",number);
    }
}
