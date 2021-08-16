#include<stdio.h>
int HCF(int num1,int num2);
int main()
{
    int num1,num2,LCM,Hcf;
    printf("Enter the number:");
    scanf("%d %d",&num1,&num2);

    Hcf=HCF(num1,num2);
    printf("The HCF of %d and %d is %d\n",num1,num2,Hcf);

    LCM=(num1*num2)/Hcf;
    printf("The LCM is %d",LCM);
    
}
int HCF(int num1,int num2)
{
    int temp;
    while(num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    int HCf=num1;
}