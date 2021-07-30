#include<stdio.h>  
int main()    
{    
int number, reverse=0, remiander;    
printf("Enter a number: ");    
  scanf("%d", &number);    
  while(number!=0)    
  {    
     remiander=number%10;    
     reverse=reverse*10+remiander;    
     number/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
// #include<stdio.h>
// void main()
// {
//     int num,i;
//     printf("enter a number: \n");
//     scanf("%d",&num);
// while(num!=0)
// {
//     i=num%10;
//     num=num/10;
//     printf(" %d",i);
//     }
// }