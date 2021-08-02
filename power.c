#include<stdio.h>
void main()
{
    int number,expo;
    long int power=1;
    printf("enter the number:");
    scanf("%d",&number);

    printf("Enter the exponent:");
    scanf("%d",&expo);

    while (expo)
    {
        power =power*number;
        expo--;
    }
    printf("Power  is %d",power);
}