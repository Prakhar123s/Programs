#include<stdio.h>
void main()
{
    int number,c=0;
    printf("Enter the number:");
    scanf("%d",&number);

    int dnum=number;
    while(dnum)
    {
        c=c*10;
        c=c+dnum%10;
        dnum=dnum/10;
    }
    if(c==number)
    {
        printf("%d is palindrome",number);
    }
    else
    printf("%d is not palindrome",number);
}