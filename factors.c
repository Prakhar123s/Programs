#include<stdio.h>
void main()
{
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d\t",i);
            
        }
    }
}