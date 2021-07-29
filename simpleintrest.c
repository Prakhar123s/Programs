#include<stdio.h>
void main()
{
    float principle, SI, rate, time;
    printf("Enter the principle:");
    scanf("%f",&principle);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter the time period:");
    scanf("%f",&time);
    SI=(principle*rate*time)/100;
    printf("Simple intrest is:%2f",SI);
}