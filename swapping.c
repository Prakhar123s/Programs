#include<stdio.h>
void main()
{
    int a ,b;
    printf("Enter the a and b:");
    scanf("%d %d",&a,&b);
    a=a+b; 
    b=a-b; 
    a=a-b;
    printf("a and b after Swapping:%d and %d",a ,b);
}