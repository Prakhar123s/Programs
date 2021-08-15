#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    int big=(a>b && a>c ? a:b>c?b:c);
        printf("%d is greatest",big);
}