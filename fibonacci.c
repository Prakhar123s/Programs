#include<stdio.h>
void main()
{
    int number, start=1,before=0,sum=0;
    printf("Enter the number:");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        sum=before+start;
        before=start;
        start=sum;
        printf("%d\t",start);

    }

}