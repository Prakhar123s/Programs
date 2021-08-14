#include<stdio.h>
void main()
{
    int num1 , num2 ;
    printf("Enter the value of number1 and number2:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        printf("%d is largest",num1);
    }
    else{
        printf("%d is largest",num2);
    }
}