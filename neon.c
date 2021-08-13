#include<stdio.h>
void main()
{   
    int number;
    int copy;
    int sumofnum=0;
    printf("Enter the number:");
    scanf("%d",&number);

    int sqnum=number*number;
    while (sqnum)
    {
        copy=sqnum%10;
        sumofnum=sumofnum+copy;
        sqnum=sqnum/10;    
    }
    
    if(sumofnum==number)
    {
        printf("GIven number is neon number");
    }
    else
    {
        printf("It is not neon number");
    }
    
}
